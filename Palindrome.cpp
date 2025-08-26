#include<iostream>
using namespace std;

int main(){
    int arr[5] = {4, 5, 6, 8, 4};
    bool pan = false;
    for(int i=0, j=4; i<j; i++, j--){
        if(arr[i]!=arr[j]){
            pan = false;
            break;
        }
        else{
            pan = true;
        }
    }
    if(pan == true){
        cout<<"Given array is a palindrome.";
    }
    else
    cout<<"Given array is not a palindrome.";
    return 0;
}