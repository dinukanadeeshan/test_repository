#include<stdio.h>

void add(int a, int b);
void sub(int a, int b);

int main(){
	sub(30, 20);
	return 0;
}

void add(int a, int b){
	int c = a + b;
	printf("addition of %d and %d is %d\n", a, b, c);
}

void sub(int a, int b){
	int c = a - b;
	printf("subtraction of %d and %d is %d\n", a, b, c);
}
