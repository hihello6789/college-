#include<stdio.h>
int main(){
	int i;
	int arr[20];
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter %d elements: \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("output: \n");
	for(i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
	}
	return 0;
}


