#include<iostream>
int main(){
    int number1 {43};
    int number2 {26};
    bool result = (number1>number2);
    std::cout<<std::boolalpha<<"result:"<<std::endl;
    if(result == true){
        std::cout<< number1 << "is greater than " << number2 <<std::endl;
    } 
    if(!result == true){
        std::cout<< number1 << "is not greater than " << number2 <<std::endl;

}
return 0;
}