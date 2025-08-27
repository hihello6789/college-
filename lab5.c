#include<stdio.h>
int main(){
	int i,arr[20],n,sum=0;
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
	for(i=0;i<n;i++){
        sum=sum+arr[i];
	}
	printf("The sum of the elements is :" ,sum);
	return 0;
}


