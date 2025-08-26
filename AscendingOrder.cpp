#include<iostream>
using namespace std;

int main(){
    int num[5]= {23, 67, 43, 28, 91};
    int n=5;
    for(int pass=0; pass<n-1; pass++){
        for(int i=0; i<n-pass-1; i++){
            if(num[i]>num[i+1]){
                int temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
            }
        }
    }
    cout<<"Sorted array is \n";
    for(int i=0; i<n-1; i++){
        cout<<num[i]<<" ";
    }
    return 0;
}