#include<bits/stdc++.h>
using namespace std;

int quicksort(int ar[], int left, int right){
    int i = left - 1;
    int j = left;
    int pivot = ar[right];

    while(j < right){
        if(ar[j] <= pivot){
            swap(ar[j],ar[++i]);
        }
        j++;
    }
     swap(ar[++i],pivot);
     return i;
}

void divide(int arr[], int left, int right){
    if(left < right){
        int pivot = quicksort(arr, left, right);

        divide(arr, left, pivot-1);
        divide(arr, pivot+1, right);
    }
}


int main(){
    int ar[] = {18, 16, 2, 15, 32, 24};
    
    for(auto x : ar)
        cout << x << " ";
    
    cout << endl;

    divide(ar, 0, 5);
    cout << "sorted array"<<endl;
    for(auto x : ar)
        cout << x << " ";
    return 0;
}