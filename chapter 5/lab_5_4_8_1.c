
//dzia³a niestabilnie

#include <stdio.h>
#include <stdlib.h>
int main(void) {

    int num;

    scanf("%d", &num);

    if(num<0 || num >1024*1024)
        printf("error: invalid memory size");
    else {
        int size = num*sizeof(char);
        char *signs = (char *) malloc(size);

        if(signs!=NULL) {

        int i=0;
        int j=0;
        int k=0;
        for(i=0; i<size; i++) {

            if(i%26==0 && i!=0) {
                //*signs='A';
                i=0;
                j+=26;
            }

            if(j>size) break;

            *signs = 'A'+i;
            signs++;
            k++;

        }

        signs-=k;
        k=0;
        if(size>400) size=400;
        for(i=1; i<=size; i++) {
            printf("%c", *signs);
            signs++;
            k++;
            if(i%40==0) puts("");
        }

        signs-=k;
        free(signs);

        } else puts("Error: memory was not allocated");


    }

return 0;
}
