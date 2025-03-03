#include<iostream>
using namespace std;

class app
{
public:
    bool login(string pin)
    {

        if (pin == "123")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void Display_Info(string name, string Regno, float marks, float percentage, char grade)
    {
        cout << "\n name: " << name << "\n Regno: " << Regno << "\n marks: " << marks << "\n percentage: " << percentage << "\n grade: " << grade << endl;
    }
};

int main()
{
    app obj;
    string name = "Raghav", Regno = "1123h3j", pin;
    float marks = 550, percentage = 95;
    char grade = 'A';
    
    cout << "Enter your pin: ";
    cin >> pin;

    if (obj.login(pin))
    {
        obj.Display_Info(name, Regno, marks, percentage, grade);
    }
    else
    {
        cout << "Invalid pin!" << endl;
    }

    return 0;
}