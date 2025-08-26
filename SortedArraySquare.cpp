#include<iostream>
using namespace std;

int main(){
    int num[5] = {-7, -3, 2, 3, 11};
    int sor;
    int n = 5;
    for(int i=0; i<5; i++){
        num[i] = num[i]*num[i];
    }
    for(int pass=0; pass<n-1; pass++){
        for(int i=0; i<n-pass-1; i++){
            if(num[i]>num[i+1]){
                int temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
            }
        }
    }
    for(int i=0; i<5; i++){
        cout<<num[i]<<" ";
    }
    return 0;
}