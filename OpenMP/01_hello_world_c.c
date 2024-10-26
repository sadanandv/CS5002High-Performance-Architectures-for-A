#include<stdio.h>
#include<omp.h> // Header to use OpenMP

int main(){
    // Directive to the compiler that tells this block of code can be parallelized
    #pragma omp parallel
    {
        printf("\nHello World");
    }
    return 0;
}

// Compile with: gcc -fopenmp 01_hello_world_c.c -o hello_c
