#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int end  = sizeof(arr)/sizeof(arr[0]),start = 0;

    while (end > start){
        cout<<arr[start];
        arr[start] = arr[start]+arr[end] - (arr[start]=arr[end]); 
        start++;
        end--;
    }
    for(int i=0;i<end;i++){
        cout<<arr[i]<<" ";
    }
        

}