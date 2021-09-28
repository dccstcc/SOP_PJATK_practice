


#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int size;

    scanf("%d", &size);

    size++;

    if (size>21)
        printf("Matrix too big");
    else {
        int *matrix[size][size];
        int *row = (int *) malloc(size);
        int *col = (int *) malloc(size);
        int *setRow = row;
        int *setCol = col;

            if(*col == NULL || *row==NULL) {
                printf("Error: memory not allocated");
            } else {
                int i;
                for(i=0; i<size; i++) {
                    *row = i;
                    row++;
                    *col = i;
                    col++;
                }
                row-=size;
                col-=size;

                for(i=0; i<size; i++) {
                    setRow = *row++;
                    setCol = *col++;
                    matrix[0][i] = setRow;
                    matrix[i][0] = setCol;
                }


            }
    }

return 0;
}
