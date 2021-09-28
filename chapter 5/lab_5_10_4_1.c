


#include <stdio.h>
#include <stdlib.h>

struct element {
    int *value;
    struct element *next;
};

int main(void) {

int values[10] = {2,4,5,6,7,8,9,1,3,0};

struct element e1;
struct element e2;
struct element e3;
struct element e4;
struct element e5;
struct element e6;
struct element e7;
struct element e8;
struct element e9;
struct element e10;

e1.next = &e2;
e2.next = &e3;
e3.next = &e4;
e4.next = &e5;
e5.next = &e6;
e6.next = &e7;
e7.next = &e8;
e8.next = &e9;
e9.next = &e10;
e10.next = NULL;

struct element *head, *current;
head=&e1;
current=head;

int i;

for(i=0; current!=NULL; i++) {
    current -> value = (int *)malloc(sizeof(int));
    if((current -> value)==NULL) {
        printf("Error: can not allocate memory");
    } else {
    (current -> value) = &values[i];
    current = (current -> next);
    }
}

current=head;
printf("First five values: \n");
for(i=0; i<5; i++) {
    int temp = *(current -> value);
    printf("%d\n", temp);
    free(current -> value);
    current = (current -> next);
}

current=head;
printf("First seven values: \n");
for(i=0; i<7; i++) {
    int temp = *(current -> value);
    printf("%d\n", temp);
    free(current -> value);
    current = (current -> next);
}


printf("Memory is freed\n");

return 0;
}
