# CS5002High-Performance-Architectures-for-A
This repository contains examples of parallel programming using OpenMP and MPI, demonstrating core concepts such as thread management, synchronization, communication, and parallelization. Each example file is grouped under its respective directory: OpenMP or MPI.

## Repository Structure
The repository is organized as follows:

- **OpenMP**: Contains examples of multithreading and loop parallelization in both C and C++.
- **MPI**: Contains examples for inter-process communication using MPI.
- 
## Compilation and Execution
### OpenMP
For OpenMP examples:

1. To compile, use `-fopenmp` flag:
C: `gcc -fopenmp filename.c -o output`
C++: `g++ -fopenmp filename.cpp -o output`
2. Run the executable:
```bash
./output
```
### MPI
For MPI examples:

1. To compile, use mpiCC:
```bash
mpiCC filename.cpp -o output
```
2. Run the executable with a specified number of threads:
```bash
mpirun -np <number_of_threads> ./output
```
## Descriptions of Each Program
### OpenMP Programs
- 01_hello_world: Basic parallel "Hello World" in C and C++.
- 02_thread_example: Demonstrates thread creation and management.
- 03_for_loop_parallelization: Compares serial and parallel execution of a large array operation to measure performance gains.
- 04_operations_parallelization: Implements simple parallel arithmetic and logical operations.
### MPI Programs
- 01_hello_world: Simple MPI-based "Hello World".
- 02_communication_example: Showcases point-to-point and collective communication techniques.
- 03_processor_information: Retrieves processor rank and world size, demonstrating barrier synchronization.
### Notes
- OpenMP and MPI must be installed to compile and run these examples.
- Refer to each program’s comments for details on functionality and usage.
