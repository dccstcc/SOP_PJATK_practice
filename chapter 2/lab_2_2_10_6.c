#include <stdio.h>

int main(void) {
    int xValue = 0;
    int yValue = 8;
    int result;
    int bigResult;

    xValue+=3;
    yValue+=xValue;
    result = yValue*xValue;
    result+=result; // result*2
    result--;
    yValue = result%result; //yValue=0
    xValue+=(result+=result);
    bigResult = result*result*result; //result^3
    result+=(xValue*yValue);//result+=0

    printf("result: %d\n", result);
        printf("big result: %d\n", bigResult);
    return 0;
}
