#include <stdio.h>

int main(void) {

    int a=0;
    int counter=0;
    int sum=0;

    scanf("%d", &a);

    while(a){

        sum+=a;
        counter++;
        scanf("%d", &a);


    }

    if(counter==1)
    printf("Finish");
    else printf("Sum: %d\n", sum);


    return 0;
}
