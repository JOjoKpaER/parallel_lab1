#include <stdio.h>
#include "include/mpi.h"

int num2(){
    int result_name;
    char proc_name[128];
    MPI_Get_processor_name(proc_name, &result_name);

    printf ("\n Name %s", proc_name);

    return 0;
}
