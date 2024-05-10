// Problem Statement: Given an array, find the second smallest and second largest element in the array. 
// Print ‘-1’ in the event that either of them doesn’t exist.
// Example 1:
// Input:
//  [1,2,4,7,7,5]
// Output:
//  Second Smallest : 2
// 	Second Largest : 5
// Explanation:
//  The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

// Example 2:
// Input:
//  [1]
// Output:
//  Second Smallest : -1
// 	Second Largest : -1
// Explanation:
//  Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.
#include<iostream>
using namespace std;

int secondLargest(int arr[],int n){
    int largest=INT_MIN,second_largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];

        }
    }
    return second_largest;
}
int secondSmallest(int arr[],int n){
    int smallest=INT_MAX,second_smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            second_smallest=smallest;
            smallest=arr[i];
        }else if(arr[i]<second_smallest && arr[i]!=smallest){
            second_smallest=arr[i];
        }
    }
    return second_smallest;
}

int main()
{
     int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
    // return 0;
}