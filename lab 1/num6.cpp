#include <stdio.h>
#include "include/mpi.h"
#include <cstdlib>

int num6(){
    int rank;

    // ��������� ����� ��������
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int sum = 0;
    int n = 100;

    std::srand(rank); // ��� ��� ������� �� ���������

    for(int i = 0; i < n; i++){
        sum += std::rand() % 101;
    }

    printf ("\n proc: %d\n sum = %d", rank, sum / n);


    return 0;
}
