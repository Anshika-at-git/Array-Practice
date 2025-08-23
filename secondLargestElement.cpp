#include<iostream>
using namespace std;

int main(){
    int num[5] = {67, 78, 89, 91, 23};
    int max = num[0];
    int slar = num[0];
    for(int i=0; i<5; i++){
        if(num[i]>max){
            slar = max;
            max = num[i];
        }
        else if(num[i]>slar && num[i]<max){
            slar = num[i];
        }
    }
    cout<<"Second largest element in array is "<<slar;
    return 0;
}