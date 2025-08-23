#include<iostream>
using namespace std;

int main(){
    int num[6]= {23, 56, 78, 90, 21, 5};
    int min = num[0];
    for(int i=0; i<6; i++){
        if(num[i]<min){
            min= num[i];
        }
    }
    cout<<"The minimum element in this array is "<<min;
    return 0;
}