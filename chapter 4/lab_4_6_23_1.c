#include <stdio.h>

int main(void) {

	char ch = 'a';
	short sh = 2;
	int in = 30;
	long lo = 35;
	long long lolo = 60;
	float fl = 3.4;
	double db = 23.34;
	void *p;
	char *pch = &ch;


	printf("This computing enviroments uses:\n");
	printf("%d byte for chars\n",sizeof(char));
	printf("%d byte for char variables\n",sizeof ch);
	printf("%d bytes for shorts\n",sizeof(short int));
	printf("%d bytes for short variables\n",sizeof sh);
	printf("%d bytes for ints\n",sizeof(int));
	printf("%d bytes for int variables\n",sizeof in);
	printf("%d bytes for longs\n",sizeof(long int));
	printf("%d bytes for long variables\n",sizeof lo);
	printf("%d bytes for long longs\n",sizeof(long long int));
    printf("%d bytes for long long variables\n",sizeof lolo);
	printf("%d bytes for floats\n",sizeof(float));
	printf("%d bytes for float variables\n",sizeof fl);
	printf("%d bytes for doubles\n",sizeof(double));
	printf("%d bytes for double variables\n",sizeof db);
	printf("%d bytes for pointers\n",sizeof(p));
	printf("%d bytes for pointer variables\n",sizeof(p));
    printf("%d bytes for address of char variables\n",sizeof pch);
    printf("%d bytes for pointer to char variables\n",sizeof pch);
	printf("%d byte for value stored by pointer to char variable\n",sizeof *pch);
	return 0;
}
