#include<iostream>
using namespace std;

int main(){
    int num[4]= {11, 22, 33, 44};
    int sum = 0;
    for(int i=0; i<4; i++){
        sum+=num[i];         
    }
    cout<<"The sum of elements is "<<sum;
    return 0;
}
