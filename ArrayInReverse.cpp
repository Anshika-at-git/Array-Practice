// Printing a given array in reverse

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int n=5;
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;

}
