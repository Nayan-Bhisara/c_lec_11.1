/*
Q.2 Write a Program to swap two variables using Pointers.
For example,
Input:
Enter the value of x: 5
Enter the value of y: 3

Output:
Before swapping:
x: 5
y: 3

After swapping:
x: 3
y: 5
*/

#include<stdio.h>

void main(){
	
	int i;
	int a,b;
	int *ptr,*ntr;
	
	printf("Enter X :- ");
	scanf("%d",&a);
	printf("Enter Y :- ");
	scanf("%d",&b);
	
	ptr=&a;
	ntr=&b;
	
	printf("X: %d\n",*ntr);
	printf("Y: %d",*ptr);
	
}
