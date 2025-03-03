#include<iostream>
using namespace std;
class MyAPP
{
    
    public : void inline Accept(string email,string password)
    {
        cout<<"\n email = asd" << email <<"\n password = asd "<<password;
        
    }
};
int main(){
    string email , password;
    MyAPP obj;
    cin>>email;
    cout<<"enter the value of email";
    cin>>password;
    cout<<"enter the value of pssword";
    obj.Accept(email, password);
    return 0; 
}