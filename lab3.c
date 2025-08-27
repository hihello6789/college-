#include<stdio.h>
int main(){
	int i;
	int arr[5];
	printf("Enter 5 elements: ");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("output: \n");
	for(i=0;i<5;i++){
        printf("%d",arr[i]);
        printf("\n");
	}
	return 0;
}


