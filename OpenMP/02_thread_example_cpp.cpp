#include<iostream>
#include<omp.h>

using namespace std;

void hello(int my_id, int t_th) {
    cout << "\nPrinted using Thread " << my_id << " / " << t_th << endl;
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

// Compile with: g++ -fopenmp 02_thread_example_cpp.cpp -o thread_example_cpp

