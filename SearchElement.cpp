#include<iostream>
using namespace std;

int main(){
    int n, index = -1;
    cout<<"Enter element to search: \n";
    cin>>n;
    int num[5]= {25, 36, 49, 64, 81};
    for(int i=0; i<5; i++){
        if(num[i]==n){
            index = i;
            break;
        }
    }
    if(index!= -1){
        cout<<"Element found at index "<<index<<".\n";
    }
    else{
        cout<<"Element not found.";
    }
    return 0;
}