#include <stdio.h>

void subFunc()
{
	printf("Hello from sub function\n");
}

int main()
{
	subFunc();
	printf("Hello from main function");
	return 0;
}
