#include <mpi.h>
#include <iostream>

int main(int argc, char** argv) {
    int rank, size;

    MPI_Init(&argc, &argc);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    std::cout << "Rank: " << rank << "; Size: " << size << ";" << std::endl;
    return 0;
}