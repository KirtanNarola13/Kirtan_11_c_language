#include<stdio.h>

void main(){
	int x,y;
	printf("Enter value of x : ");
	scanf("%d",&x);
	printf("Enter value of y : ");
	scanf("%d",&y);
	printf("\n");
	
	printf("Befor swaping :- \n");
	printf("X = %d\n",x);
	printf("Y = %d\n",y);
	printf("\n");
	
	int *ptr;
	int *ptr2;
	int *ptr3=0;
	
	ptr=&x;
	ptr2=&y;
	
//	ptr3=ptr;
//	ptr=ptr2;
//	ptr2=ptr;

ptr3=ptr;
ptr=ptr2;
	
	printf("After swaping :-\n");
	printf("X = %d\n",*ptr);
	printf("Y = %d\n",*ptr3);
	
}
