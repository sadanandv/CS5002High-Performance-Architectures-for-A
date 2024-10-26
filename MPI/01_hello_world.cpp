#include<iostream>
#include<mpi.h>

void perform_something() {
    std::cout << "\nSomething" << std::endl;
}

int main() {
    MPI_Init(NULL, NULL);
    perform_something();
    MPI_Finalize();
    return 0;
}

// Compile with: mpiCC 01_hello_world.cpp -o mpi_hello
// Run with: mpirun -np <number_of_threads> ./mpi_hello
