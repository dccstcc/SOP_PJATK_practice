#include <stdio.h>

int main(void) {
    int xValue = 2;
    int yValue = 7;
    int result;
    int bigResult;

    xValue+=3;
    yValue-=xValue;
    result = yValue*xValue; //10=
    result+=result; // result*2
    result--;
    yValue = result%result; //yValue=0
    xValue+=(result+=result);
    bigResult = result*result*result; //result^3
    result+=(xValue*yValue);//result+=0

    printf("result: %d\n", result); //38
        printf("big result: %d\n", bigResult); //54872
    return 0;
}
