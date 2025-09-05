#include<iostream>
using namespace std;

int main(){
    int num1[3] = {1, 2, 3};
    int num2[3] = {4, 5, 6};
    int num3[3];
    for(int i=0; i<3; i++){
        num3[i] = num1[i]+num2[i];
    }
    cout<<"Added elements are: \n";
    for(int i=0; i<3; i++){
        cout<<num3[i]<<" ";
    }
    return 0;
}