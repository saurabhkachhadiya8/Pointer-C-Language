#include<stdio.h>
main(){
	
	int a,i,*p;

	printf("Enter array size : ");
	scanf("%d",&a);

	int arr[a];
	for(i=0;i<a;i++){
		printf("array[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	p = &arr;
	for(i=0;i<a;i++){
		printf("\nAddress of array by u : %d => %u",*(p+i),p+i);
		printf("\nAddress of array by p : %d => %p",*(p+i),p+i);
		printf("\nAddress of array by x : %d => %x",*(p+i),p+i);
		printf("\n");
	}
	
	printf("\nSquare of each element : ");
	for(i=0;i<a;i++){
		printf("%d  ",(*(p+i))*(*(p+i)));
	}
	
}
