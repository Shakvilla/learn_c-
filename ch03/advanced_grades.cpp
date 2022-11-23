#include <iostream>
#include <iomanip>


using namespace std;

int main (){

    // intialization phase
    int total{0}; // initialize sum of grades
    int gradeCounter{0};


    cout << "Enter grade or -1 to quit: ";
    int grade;
    cin >> grade;

    // loop until sentinel value is read from user

    while(grade != -1){
        total = total + grade; // add grade to total
        gradeCounter = gradeCounter + 1; // increment counter

        // prompt for input and read next grade from user
        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }

    // termination phase
    // if user entered at least one grade...
    if(gradeCounter != 0){
        // use number with decimal point to calculate average of grades

        double average{static_cast<double>(total) / gradeCounter};

        // display total and average (with two digits of precision)

        cout << "\n Total of the "<< gradeCounter << " grades entered is " << total;
        cout << setprecision(2) << fixed;
        cout << "\n Class average is " << average << "\n";
    } else {
        // no grades were entered, so output appropriate message

        cout << "No grades were entered\n";
    }
}