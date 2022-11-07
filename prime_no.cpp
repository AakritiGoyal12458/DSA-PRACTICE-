#include <iostream>
using namespace std;

int main() {
    cout<<"enter a number";
    int number;
    cin>>number;
   
    
    for(int i = 2 ; i<number;i++){
        if(number%i==0){
        cout<<"not prime";
        }
    }
    
    return 0;
}
