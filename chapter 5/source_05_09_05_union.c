#include <stdio.h>

int main(void) {
	struct {
		int a;
		int b;
	} Data1 = { 0, 0 };

	union {
		int a;
		int b;
	} Data2 = { 0 };
	
	Data1.a++;
	Data2.a++;
	printf("%d %d\n", Data1.b, Data2.b);
	return 0;
}
