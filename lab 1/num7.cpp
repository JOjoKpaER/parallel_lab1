#include <stdio.h>
#include "include/mpi.h"

int num7(){
    int rank;

    // получение ранга процесса
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int n = 100;
    int a[n];
    int k = rank + 1;
    int sum = 0;

    for(int i = 0; i < n; i++){
       a[i] = i;
    }

    for(int i = 0; i < k; i++){
        sum += a[i];
    }


    printf ("\n proc: %d\n sum = %d", rank, sum);


    return 0;
}
