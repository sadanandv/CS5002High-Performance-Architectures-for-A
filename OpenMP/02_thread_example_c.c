#include<stdio.h>
#include<omp.h>

void hello(int my_id, int t_th) {
    printf("\nPrinted using Thread %d / %d", my_id, t_th);
}

int main() {
    omp_set_num_threads(8);
    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        int nt = omp_get_num_threads();
        hello(id, nt);
    }
    return 0;
}

// Compile with: gcc -fopenmp 02_thread_example_c.c -o thread_example_c

