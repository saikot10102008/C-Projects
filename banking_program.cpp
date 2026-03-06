// This project uses similar concept of Bro Code YT Channel's tutorial mini project but differs in some area specially in case of difficulty as mine's difficulty is easy unlike intermediate of that
#include<iostream>

void show_balance(double);

int main(){

    double balance;
    int choice;
    std::cout<<"Chose one of the options: \n";
    std::cout<<"1.Check Balance\n";
    std::cout<<"2.Deposite\n";
    std::cout<<"3.Withdraw\n";
    std::cout<<"EXIT\n";
    std::cin>>choice;

    do{
        switch (choice) {
            case 1:
                show_balance(balance);
                break;
        }
    }while(choice != 4);

    return 0;
}
