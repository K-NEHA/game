#include"header.h"

int CheckForWin(char* matrix){
    if (matrix[1] == matrix[2] && matrix[2] == matrix[3])
        return 1;
    else if (matrix[4] == matrix[5] && matrix[5] == matrix[6])
        return 1;
        
    else if (matrix[7] == matrix[8] && matrix[8] == matrix[9])
        return 1;
        
    else if (matrix[1] == matrix[4] && matrix[4] == matrix[7])
        return 1;
        
    else if (matrix[2] == matrix[5] && matrix[5] == matrix[8])
        return 1;
        
    else if (matrix[3] == matrix[6] && matrix[6] == matrix[9])
        return 1;
        
    else if (matrix[1] == matrix[5] && matrix[5] == matrix[9])
        return 1;
        
    else if (matrix[3] == matrix[5] && matrix[5] == matrix[7])
        return 1;
        
    else if (matrix[1] != '1' && matrix[2] != '2' && matrix[3] != '3' &&
        matrix[4] != '4' && matrix[5] != '5' && matrix[6] != '6' && matrix[7] 
        != '7' && matrix[8] != '8' && matrix[9] != '9')

        return 0;
    else
        return  - 1;
}