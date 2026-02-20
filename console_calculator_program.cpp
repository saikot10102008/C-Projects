#include<iostream>

int main(){

    double a,b,ans;
    char op;

    std::cout<<"Chose one of the operations (+,-,/,*): ";
    std::cin>>op;

    std::cout<<"Enter 1st number: ";
    std::cin>>a;

    std::cout<<"Enter 2nd number: ";
    std::cin>>b;

    switch (op)
    {
    case '+':
        ans = a+b;
        break;

    case '-':
        ans = a-b;
        break;

    case '*':
        ans = a*b;
        break;

    case '/':
        ans = a/b;
        break;

    default:
        std::cout<<"Operator not valid";
        break;
    }

    std::cout<<"Your answer is: "<<ans;

    return 0;
}
