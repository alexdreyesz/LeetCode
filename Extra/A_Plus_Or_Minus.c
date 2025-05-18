#include <stdio.h>

int main() {

    int array[11][3] = {
        {1, 2, 3},
        {3, 2, 1},
        {2, 9, -7},
        {3, 4, 7},
        {1, 1, 2},
        {1, 1, 0},
        {3, 3, 6},
        {9, 9, 18},
        {9, 9, 0},
        {1, 9, -8},
        {1, 9, 10}
    };

    for(int i = 0; i < 11; i++) {
       if(array[i][0] > array[i][2]) {
            printf("-\n");
       } else {
            printf("+\n");
       }
    }

    return 0;
}