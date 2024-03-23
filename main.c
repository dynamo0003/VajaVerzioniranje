#include <stdio.h>

// Makro definicija
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Funkcija za izračun največjega števila
int findMax(int x, int y) {
    return MAX(x, y);
}

int main() {
    int a, b;
    int max_num;

    // Vnos vrednosti za a in b
    printf("Vnesite prvo število: ");
    scanf("%d", &a);
    printf("Vnesite drugo število: ");
    scanf("%d", &b);

    // Vejitvena predprocesorska direktiva
#if defined(__LP64__)
    printf("Program se izvaja v 64-bitnem načinu.\n");
#else
    printf("Program se izvaja v 32-bitnem načinu.\n");
#endif

    // Klic funkcije in uporaba makra
    max_num = findMax(a, b);
    printf("Največje število med %d in %d je: %d\n", a, b, max_num);

    return 0;
}
