#include<bits/stdc++.h>
using namespace std;

void pivot(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(mid < end  && arr[mid] > arr[mid+1]){
            cout<<arr[mid];
            return ;
        }
        if(mid > start && arr[mid-1] > arr[mid]){
            cout<<arr[mid-1];
            return ;
        }


        if(arr[mid] >arr[start]){
            start = mid+1;
            return;
        }
        else{
            end  = mid-1;
        }
    }
}

int main(){
    vector<int> arr = {11, 15, 26, 38, 9, 10};
}