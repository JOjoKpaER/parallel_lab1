#include <stdio.h>
#include "include/mpi.h"

int num4(){
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int n = 1;
    for (int i = 0; i < 6 + rank; i++){
        n*=10;
    }

    double starttime = MPI_Wtime();

    double sum = 0.0;
    for (int i = 0; i < n; i++){
        sum += (1/(1+i));
    }

    double endtime = MPI_Wtime();

    printf ("\n Process: %d\n time: %f sec", rank, endtime - starttime);


    return 0;
}
