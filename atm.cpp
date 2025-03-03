#include<iostream>
using namespace std;
class ATM_App{
    public: void welcome()
    {
        cout<<"Welcome To ATM";
    }

private: int pin;
public: bool Validate()
{
    cout<<"\nenter your pin : 123";
    cin>>pin;
if(pin == 123)
{
    return 1;
}
else{
    return 0;
}
}
private: float wamt;
public:float Withdraw(float Bamt)
{
    cout<<"\n enter amount u want to withdraw : ";
    cin>>wamt;
    if(wamt>Bamt)
    {
        cout<<"insufficent amt";
    }
    else{
        return Bamt-wamt;
    }
}
public: void Display_Balance(float amt1)
{
    cout<<"\n Your Balance is "<<amt1;
}
};
int main()
{
    ATM_App obj;
    bool res;
    float res1;
    float amt1 =100000.90;

    obj.welcome();
    res = obj.Validate();
    if (res == 1)
    {
        cout<<"\nLogin Successful:";
    }
    else{
        cout<<"\nLogin Failed";
    }
    res1 = obj.Withdraw(amt1);
    obj.Display_Balance(res1);
    return 0;
}