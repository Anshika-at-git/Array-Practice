#include<iostream>
using namespace std;

int main(){
    int num[5]= {37, 109, 78, 46, 21};
    int max = num[0];
    for(int i=0; i<5; i++){
        if(max<num[i]){
            max = num[i];
        }
    }
    cout<<"The maximum element is "<<max;

    return 0;
}