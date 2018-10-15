#include<stdio.h>

void add(int a, int b);

int main(){
	printf("Hello World\n");
	add(10, 20);
	return 0;
}

void add(int a, int b){
	int c = a + b;
	printf("addition of %d and %d is %d\n", a, b, c);
}
