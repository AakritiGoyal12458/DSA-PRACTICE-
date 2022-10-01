#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> a; 
     a.push(2);
     a.push(3);
     
     cout<<"top element in stack is "<<a.top();
     a.pop();
     cout<<"\ntop element in stack after 1st pop is "<<a.top();
     
     //check idf stack is empty or not
     
     if(a.empty()){
         cout<<"\n stack is empty";
     }
     else{
         cout<<"\nstack is not empty";
     }
     
     cout<<"\nsize of stack is "<<a.size();
    
}

/* o/p :    top element in stack is 3
            top element in stack after 1st pop is 2
            stack is not empty 
            size of stack is 1*/ 
