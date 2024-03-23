# Pravilo "all"
all: build run

# Pravilo "build" kliče pravila "build_i", "build_s" in "build_o"
build: build_i build_s build_o

# Pravilo "run" zažene preveden program
run:
	./demo_gcc

# Pravilo "clean" odstrani vse ustvarjene zbirke
clean:
	rm -f demo_gcc

# Pravilo "build_i" izvede predprocesiranje in zgradi zbirko s končnico ".i"
build_i: main.c
	gcc -E main.c -o main.i

# Pravilo "build_s" izvede kompilacijo in zgradi zbirko s končnico ".s"
build_s: main.i
	gcc -m32 -S main.i -o main.s

# Pravilo "build_o" izvede prevajanje in zgradi zbirko s končnico ".o"
build_o: main.s
	gcc -m32 -c main.s -o main.o
	gcc -m32 main.o -o demo_gcc
