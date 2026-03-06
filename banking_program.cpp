// This project uses similar concept of Bro Code YT Channel's tutorial mini project but differs in some area specially in case of difficulty as mine's difficulty is easy unlike intermediate of that
#include<iostream>

void show_balance(double);
double deposite();
double withdraw(double);

int main(){

    double balance;
    int choice;


    do{
        std::cout<<"1.Check Balance\n";
        std::cout<<"2.Deposite\n";
        std::cout<<"3.Withdraw\n";
        std::cout<<"4.EXIT\n";
        std::cout<<"Chose one of the options: \n";
        std::cin>>choice;
        switch (choice) {
            case 1:
                show_balance(balance);
                break;
            case 2:
                balance+=deposite();
                show_balance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                show_balance(balance);
                break;
        }
    }while(choice != 4);

    return 0;
}

void show_balance(double balance){
    std::cout<<"Your Balance: "<<balance<<"\n";
}

double deposite(){
    double temp;
    std::cout<<"The ammount you want to deposite: ";
    std::cin>>temp;
    if (temp >= 0){
     return temp;
    }else{
     std::cout<<"TRY AGAIN\n";
     return 0;
    }
}

double withdraw(double balance){
    double temp;
    std::cout<<"The ammount you want to withdra: ";
    std::cin>>temp;
    if(temp<=balance){
        return temp;
    }else{
        std::cout<<"INVALID!\n";
        return 0;
    }
}
