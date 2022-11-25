#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    int total{0}; // sum of grades
    int gradeCounter{0};
    int aCount{0};
    int bCount{0};
    int cCount{0};
    int dCount{0};
    int fCount{0};

    cout << "Enter the integer grades in the range 0-100. \n"
         << "Type the end-of-file indicator to determine input: \n"
         << " On UNIX/Linux/macOS type <Ctrl> d then press Enter\n"
         << " On Windows type <Ctrl> z then press Enter\n";

    int grade;

    // loop until user enters the end-of-file indicator

    while(cin >> grade){
        total += grade; // add grade to total
        ++gradeCounter; // increment number of grades



        switch(grade / 10){

        case 9: // grade was between 90
        case 10: // and 100, inclusive
            ++aCount;
            break;
        case 8: // grade was between 80 and 90
            ++bCount;
            break;
        case 7: 
            ++cCount; // grade was between 70 and 79
            break;
        case 6:
            ++dCount; // grade was between 60 and 69
            break;
        default: // grade was less than 60
            ++fCount;
            break; // optional; exits switch anyway 
    } //  end switch
    // increment appropriate letter-grade counter

 }

 // set floating-point number format
 cout << fixed << setprecision(2);

 // display grade report
 cout << "\nGrade Report: \n";

 // if user entered at least one grade
 if(gradeCounter != 0){
    // calculate average of all grades entered
    double average{static_cast<double>(total)/ gradeCounter};

    // output summary of results
    cout << "Total of the " << gradeCounter << " grades entered is "
        << total << "\nClass average is " << average 
        << "\n Number of students who received each grade:"
        << "\nA: " << aCount << "\nB: " <<bCount << "\nC: " << cCount 
        << "\nD: " <<dCount << "\nF: " << fCount << "\n";
 } else{
    cout << "No grades were entered" << "\n";
 }

    
}