#include<stdio.h>

void cube(int a ) {

	
	a=a*a*a;
	printf("%d",a);
	
}

void main() {
	
	int x;

printf("Enter the first value : ");
scanf("%d",&x);  

	cube(x);

}

