#include<stdio.h>
main(){
	
	int x,y,z,*a,*b;
	
	a=x; b=y;
	
	printf("Enter array size : ");
	scanf("%d",&a);
	printf("Enter array size : ");
	scanf("%d",&b);
	
	printf("\nBefore swapping\n");
	printf("x : %d\n",a);
	printf("y : %d",b);
	
	z=b; b=a; a=z;
	
	printf("\n\nAfter swapping\n");
	printf("x : %d\n",a);
	printf("y : %d",b);
	
}
