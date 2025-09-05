#include<iostream>
using namespace std;

int main(){
    int num1[4] = {1, 2, 3, 3};
    int num2[4] = {3, 5, 6, 2};
    int num3[4];
    int common;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(num1[i]==num2[j]){
                common=num2[j];
                cout<<"Common Elements: "<<common<<"\n";
                break;
            }
        }
    }
    return 0;
}