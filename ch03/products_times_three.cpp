#include <iostream>


using namespace std;

int main(){
    int product{3};

    while(product <= 100){

        product = product * 3;

        cout << product ;
        cout << "\n";
    }

    return 0;
}