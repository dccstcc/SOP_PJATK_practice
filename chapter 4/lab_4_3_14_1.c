#include <stdio.h>

int main(void) {

    float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
    int i,j,k;
    float temp;

    for(k=0; k<10; k++) {

    for(i=0; i<10; i++) {
        if(numbers[i]<numbers[i+1]) {
            temp = numbers[i];
            numbers[i] = numbers[i+1];
            numbers[i+1] = temp;
        }
    }
    for(j=0; j<10; j++) printf("%.2f ", numbers[j]);
        printf("\n");

    }

    return 0;
}
