#include<iostream>
using namespace std;

int main(){
    int num[3] = {1, 2, 3};
    int num2[3];
    for(int i=0; i<3; i++){
        num2[i] = num[i];
    }
    cout<<"Copied elements are: \n";
    for(int i=0; i<3; i++){
        cout<<num2[i]<<" ";
    }
    return 0;
}