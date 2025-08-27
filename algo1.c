//Write a program that inputs an integer and evaluates it's factorial in to different methods and outputs the times taken to run each method.
#include <stdio.h>
#include <time.h>
int fac(int n);
 int main(){
     int n,a;
     printf("Enter a number: ");
     scanf("%d",&n);


     a= fac(n);
     printf("The factorial %d is: %d\n",n,a);
     return 0;

     int fac(int n){
        int i,f;
        f=1;
        for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
}
