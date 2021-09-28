#include <stdio.h>

int main(void) {
    float startValue = 100.;
    float interestRate = 0.015;
    float firstYearValue;
    float secondYearValue;
    float thirdYearValue;

    firstYearValue = startValue;
    firstYearValue  += (startValue * interestRate);
    secondYearValue = firstYearValue;
    secondYearValue += (firstYearValue * interestRate);
    thirdYearValue = secondYearValue;
    thirdYearValue  += (secondYearValue * interestRate);

     printf("After first year: %f\n", firstYearValue);
        printf("After second year: %f\n", secondYearValue);
            printf("After third year: %f\n", thirdYearValue);
    return 0;
}
