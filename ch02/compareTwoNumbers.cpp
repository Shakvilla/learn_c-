#include <iostream>
  using std::cout;
  using std::cin;


int main(){

  int num1{0};
  int num2{0};

  cout << "Enter two integers to compare: "; // prompt the user for data
  cin >> num1 >> num2;

  if(num1 == num2){
    cout << num1 << "==" << num2 << "\n";
  }

  if(num1 != num2){
    cout << num1 << " != " << num2 << "\n";
  }
  if(num1 < num2){
    cout << num1 << " < " << num2 << "\n";
  }
  if(num1 > num2) {
    cout << num1 << " > " << num2 << "\n";
  }

  if(num1 <= num2){
    cout << num1 << " <= " << num2 << "\n";
  }

  if(num1 >= num2){
    cout << num1 << " >= " << num2 << "\n";
  }
}