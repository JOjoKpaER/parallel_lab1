#include <stdio.h>
#include "include/mpi.h"

int num3(){
    double tick = MPI_Wtick();
    double starttime = MPI_Wtime();
    for (int i = 0; i < 1000000; i++){
        continue;
    }
    double fintime = MPI_Wtime();
    printf("\nTick resolution: %f", tick);
    printf("\nPassed: %f secs", fintime - starttime);
    printf("\nTicks: %f", (fintime - starttime)/tick);
    return 0;
}
