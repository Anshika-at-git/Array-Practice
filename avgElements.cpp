#include<iostream>
using namespace std;

int main(){
    int num[5]={18, 76, 54, 90, 23};
    double sum = 0;
    int n=5;
    for(int i=0; i<5; i++){
        sum+=num[i];
    }
    double avg = sum/n;
    cout<<"The average of the elements is "<<avg;
    return 0;
}