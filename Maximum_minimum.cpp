#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair getMinMax(int arr[]){
     int siz = 6;
     struct Pair minmax={INT_MAX,INT_MIN};

     for(int i=0;i<siz;i++){
        if(minmax.min < arr[i]){
            minmax.min = arr[i];
        }
        if(minmax.max > arr[i]){
            minmax.max = arr[i];
        }
     }     
     
     return minmax;
}

int main(){

    int arr[]  = { 1000, 11, 445,1, 330, 3000 };
    struct Pair minmax = getMinMax(arr);
    cout<<minmax.min<<" "<<minmax.max<<endl;

    return 0;
}