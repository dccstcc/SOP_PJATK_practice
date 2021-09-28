#include <stdio.h>

int main(void) {

	char ip[16];

	scanf("%s", &ip);

    char *p = ip;

    int flag = 1, validate=1, control=0;

    do {

        control = 0;

        while(isdigit(*p) && control < 3) {
            p++;
            control++;
        }
        if(*p=='.') {
            p++;
        }else if(*p=='\0') {
            flag = 0;
        }
        else {
            puts("Error: not a valid address");
            flag = 0;
            validate = 0;
        }


    } while(flag);

    if(validate) {

    flag = 1;
    int i;
    int count=0;

    for(i=3 ; i>0; i--) {

    printf("Last %d parts: ", i);


    switch(i) {

        case 3: {
             p=ip;
             while(1) { if(isdigit(*p)) {
                         p++;
                         count++;
                        } else break; }

        p++;
        break;
        }

        case 2: {
            p=ip+count+1;
             while(1) { if(isdigit(*p)) {
                         p++;
                         count++;
                      } else break; }
        p++;
        break;
        }

        case 1: {
            p=ip+count+3;
             while(1) { if(isdigit(*p)) {
                        p++;
                      } else break; }
        p++;
        break;
    }
    }

    flag=1;

    do {


        if(isdigit(*p)) {
            printf("%c", *p);
            p++;
        } else if(*p!='\0'){
            p++;
            printf(".");
        } else flag=0;

    }while(flag);

    puts("");
    }

    }


	return 0;
}

