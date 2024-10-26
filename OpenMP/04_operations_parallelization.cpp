#include<iostream>
#include<cstdlib> 
#include<omp.h> 

using namespace std;

int main() {
    omp_set_num_threads(4);

    #pragma omp parallel 
    {
        int thread_id = omp_get_thread_num();
        int result = (thread_id + 1) * 2;
        cout << "Thread " << thread_id << " computed result: " << result << endl;
    }

    return 0;
}

// Compile with: g++ -fopenmp 04_operations_parallelization.cpp -o operations_parallelization

