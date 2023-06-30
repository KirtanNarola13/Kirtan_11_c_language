#include<stdio.h>

int main (){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0;i<n;i++){
		printf("a[%d] => ",i);
		scanf("%d",&a[i]);
	}
	
    int *om;
    int k;
    
	for(i=0;i<n;i++){
//		om = &j;
		*om=a[i]*a[i];
		printf("The square of a[%d] => %d\n",i,*om);
	}	
	
	return 0;
}
