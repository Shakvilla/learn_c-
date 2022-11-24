#include <iostream>

using namespace std;

int main(){

    int passes{0};
    int failures{0};
    int studentCounter{1};

    // process 10 students using counter-controlled loop

    while(studentCounter <= 10){
        // prompt user for input and obtain value from user

        cout << "Enter result(1 = pass, 2 = fail): ";
        int result;
        cin >> result;

        // if...else if nested in the while statement
        if(result == 1){
            passes = passes + 1;
        } else{
            failures = failures + 1;
        }

        // increment studentCounter so loop eventually terminates
        studentCounter = studentCounter + 1;
    }

    cout << "Passed: " << passes << "\n Failed: " << failures  << "\n ";

    // determine whether more than 8 students passed

    if(passes > 8) {
        cout << "Bonus to instuctor! \n";
    }

}