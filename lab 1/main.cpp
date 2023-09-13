#include <stdio.h>
#include "include/mpi.h"
#include "main.hpp"

int main(int argc, char* argv[]){

    MPI_Init(&argc, &argv);

    num2();
    //num3();
    //num4();
    //num5();
    //num6();
    //num7();

    MPI_Finalize();
    return 0;
}

