#include<iostream>
#include<cstdlib> 
#include<omp.h> 

using namespace std; 

int main() { 
    double start; 
    double end; 
    int ar[1000000], ub = 23, lb = -4;

    // Initialize array
    for (int i = 0; i < (1000000-1); i++)
        ar[i] = (rand() % (ub - lb + 1)) + lb;

    // Serial execution
    start = omp_get_wtime();
    for (int i = 0; i < (1000000-1); i++)
        ar[i] *= 10;
    end = omp_get_wtime(); 
    printf("Without Parallelization: %f seconds\n", end - start);

    // Parallel execution with various thread counts
    int thread_counts[] = {2, 4, 6, 8};
    for (int threads : thread_counts) {
        start = omp_get_wtime();
        omp_set_num_threads(threads);  
        #pragma omp parallel for 
        for (int i = 0; i < (1000000-1); i++)
            ar[i] *= 10;
        end = omp_get_wtime(); 
        printf("For %d Threads: %f seconds\n", threads, end - start);
    }

    return 0; 
}

// Compile with: g++ -fopenmp 03_for_loop_parallelization.cpp -o loop_parallelization

