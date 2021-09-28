


#include <stdio.h>


int main(void) {

    char *nme;
    char *snme;

    struct PERSON {
        char name[20];
        char surname[20];
    } ;

    struct PERSON person1 = {"Mary", "Smith"};
    struct PERSON person2 = {"James", "Johnson"};
    struct PERSON person3 = {"Patricia", "Williams"};
    struct PERSON person4 = {"John", "Brown"};

    printf("%s %s\n", person1.name, person1.surname);
    printf("%s %s\n", person2.name, person2.surname);
    printf("%s %s\n", person3.name, person3.surname);
    printf("%s %s\n", person4.name, person4.surname);


return 0;
}
