#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    srand(time(NULL));
    std::cout<<"A random number from 1 to 6: "<<((rand() % 6)+1);

    return 0;
}
