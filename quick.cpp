//quick sort
#include<iostream>
using namespace std;
void quicksort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int pivot=arr[start];
    int left=start;
    int right=end;
    while(left<right){
        while(arr[right]>=pivot && left<right){
            right--;
        }
        while(arr[left]<=pivot && left<right){
            left++;
        }
        if(left<right){
            swap(arr[left],arr[right]);
        }
    }
    swap(arr[start],arr[left]);
    quicksort(arr,start,left-1);//left-1 because we have already swapped the pivot element
    quicksort(arr,left+1,end);
}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}