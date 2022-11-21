#include <iostream>

using namespace std;

int main(){

    int studentGrade{0};

    cout << "Enter exams score: \n";
    cin >> studentGrade;

    cout << (studentGrade >= 95 ? "Your Grade is: A+, and You have been granted the scholarship aid\n" : "You have not been selected for the scholarshipt aid. \n");
    return 0;
}