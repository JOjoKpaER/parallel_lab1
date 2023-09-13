#include <stdio.h>
#include "include/mpi.h"

int num5(){
    int rank;

    // получение ранга процесса
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int n;

    if (rank % 2 == 0){
        n = 2 * rank;
    }else{
        n = 3 * rank;
    }

    printf ("\n rank: %d\n n = %d", rank, n);


    return 0;
}
