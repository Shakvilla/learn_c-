#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int total{0};
    int gradeCounter{0};


    cout << "Enter grade or -1 to quit: ";
    int grade;
    cin >> grade;

    while(grade != -1){
        total = total + grade;
        gradeCounter = gradeCounter + 1;

        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }



    // termination phase

    if(gradeCounter != 0){
        double average{static_cast<double>(total)/gradeCounter};

        cout << "\n Total of the " << gradeCounter << " grades entered is " << total;

        cout << "\n Class average is " << average << "\n";
    } else {
        cout << "No grades were entered\n";
    }

}

