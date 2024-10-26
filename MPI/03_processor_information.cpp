#include<iostream>
#include<mpi.h>

int main() {
    MPI_Init(NULL, NULL);

    int my_rank, world_size;
    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    MPI_Barrier(MPI_COMM_WORLD);
    std::cout << "Rank is " << my_rank << " among " << world_size << std::endl;

    MPI_Finalize();
    return 0;
}

// Compile with: mpiCC 03_processor_information.cpp -o mpi_info
// Run with: mpirun -np <number_of_processors> ./mpi_info

