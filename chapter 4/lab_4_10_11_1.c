#include <stdio.h>
#include <string.h>

int main(void) {

	char string[101];

	fgets(string, 100, stdin);

    char palindrom[101];

    int size = strlen(string);
    size--;
    char *p = string;
    p+=size;

    int i;

    for(i=0; i<=size; i++) {
        palindrom[i] = *p;
        p--;
    }
    palindrom[++size]='\0';

    printf("%s", palindrom);

	return 0;
}
