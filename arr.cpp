#include<iostream>
using namespace std;
class program
{
 private:int adv[5] = {1,2,3,4,5,};
 int weak[5]= {44,33,22,11,55} ;
 int i;
 public: void display()
 {
     cout<<"List of advance learners \t";
     cout<<"List of weak learners \t";
     
    for(i=0;i<5;i++){
        cout<<adv[i]<<"\t";
    }
    for(i=0;i<5;i++){
        cout<<weak[i]<<"\t";
    }
 }  
};
int main()
{
    program obj;
    obj.display();
    return 0;
}