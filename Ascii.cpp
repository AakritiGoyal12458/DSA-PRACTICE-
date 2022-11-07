    
    #include <iostream>
    
    using namespace std;
    
    int main()
    {
        cout<<"enter a character";
        int a; 
        a=cin.get();
        if(a>=65 and a<=90){
            cout<<" capital";
        }
        else if (a>=97 and a<=122){
            cout<<"small";
            
        }
        else if(a>=48 and a<=57){
            cout<<"number";
        }
        return 0;
    }
