#include <iostream>

using namespace std;

int main(){

    int studentGrade{0};

    cout << "Enter exams score: \n";
    cin >> studentGrade;

    if(studentGrade >= 95){
        cout << "Your Grade is: A+ \n";
    } else if(studentGrade >= 90){
        cout << "Your Grade is: A \n";
    } else if (studentGrade >= 85){
        cout << "Your Grade is: B+ \n";
    } else if(studentGrade >= 80){
        cout << "Your Grade is: B \n";
    } else if(studentGrade >= 75){
        cout << "Your Grade is: C+ \n";
    } else if (studentGrade >= 70){
        cout << "Your Grade is: C \n";
    } else if(studentGrade >= 65){
        cout << "Your Grade is: D+ \n";
    } else if(studentGrade >= 60){
        cout << "Your Grade is: D \n";
    } else if(studentGrade >= 50) {
        cout << "Your Grade is: E \n";
    } else {
        cout << "Your Grade is F \n";
    }

    return 0;
}