#include<iostream>
using namespace std;
class Product_Info
{
    public: void Welcome_Message()
    {
        cout<<"Welcome to MyStore";
        
    }
};
int main()
{
    Product_Info obj;
    obj.Welcome_Message();
    return 0;
}