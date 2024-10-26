#include<iostream>
#include<mpi.h>

int main() {
    MPI_Init(NULL, NULL);

    int message = 42;
    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    if (world_rank == 0) {
        MPI_Send(&message, 1, MPI_INT, 1, 0, MPI_COMM_WORLD);
        std::cout << "Processor 0 sent message " << message << std::endl;
    } else if (world_rank == 1) {
        MPI_Recv(&message, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        std::cout << "Processor 1 received message " << message << std::endl;
    }

    MPI_Finalize();
    return 0;
}

// Compile with: mpiCC 02_communication_example.cpp -o mpi_comm
// Run with: mpirun -np 2 ./mpi_comm

