#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main(){

    cout << fixed << setprecision(2); // set floating-point number format

    double principal{1000.00}; // initial amount before interest
    double rate{0.05};

    cout << "Initial principal: " << principal << "\n";
    cout << " Interest rate: " << rate << "\n";

    cout << "\n Year" << setw(20) << "Amount on deposit" << "\n";

    for(int year{1}; year <= 10; ++year){
        double amount{principal * pow(1.0 + rate, year)};

        // display the year and the amount
        cout << setw(4) << year << setw(20) << amount << "\n";
    }

    
}