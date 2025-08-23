// Count even and odd numbers in an array

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {23, 88, 37, 109, 42};
    int even = 0, odd = 0;
    for(int i=0; i<5; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even Numbers: "<<even<<" \n";
    cout<<"Odd Numbers: "<<odd;
    return 0;
}