#include<iostream>
#include<omp.h> // Header to use OpenMP
using namespace std;

int main(){
    // Directive to the compiler that tells this block of code can be parallelized
    #pragma omp parallel
    {
        cout << "\nHello World" << endl;
    }
    return 0;
}

// Compile with: g++ -fopenmp 01_hello_world_cpp.cpp -o hello_cpp

