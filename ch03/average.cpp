// Solving the class-average problem using counter-controlled iteration.
#include <iostream>

using namespace std;

int main(){

    int total = 0;
    int gradeCounter = 1;
   

    while(gradeCounter <= 10){
        int grade;
        cout << "Enter grade: \n";
        cin >> grade;
        total = total + grade;

        gradeCounter = gradeCounter + 1;
        
    }

    int average{ total / 10 };
    cout << "\n Total of all test scores is: " << total;
    cout << "\n the average of the class scores is: " << average << "\n"; 

    return 0;
}