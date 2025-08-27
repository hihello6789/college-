// Assignment 3:
// Write a program to find an integer input by the user in a sorted sequence of integer (1-3 lakhs) using both binary search and linear search.
// Compare the answers given and time taken by each search method.
#include<stdio.h>
#include<time.h>
int main(){


    // clock t1,t2,t3;
    // This logic will go through the array one by one
    int linearSearch(int arr[], int number);
        for(b=0;b<target;b++){
            if (arr[b]== number)
                return b;
    }
    int binarySearch(int arr[], int size);
    int low=0, high=target-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)
            return mid;
    }

}


