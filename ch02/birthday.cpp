#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1{"Happy"};
    string s2{" birthday"};
    string s3; // creates an empty string


    // display the strings and show thier lengths
    cout << "s1: \"" << s1 << "\"; length: " << s1.length()
         << "\ns2: \"" << s2 << "\"; length:  " << s2.length()
         << "\ns3: \"" << s3 << "\"; length: " << s3.length();


         // compare strings with == and !=

    cout << "\n\nThe results of comparing s2 and s1:" << boolalpha 
        << "\ns2 == s1: " << (s2 == s1)
        << "\ns2 != s1: " << (s2 != s1);

    // test string member function empty

    cout << "\n\nTesting s3.empty(): \n";

    if(s3.empty()){
        cout << "s3 is empty; assigning to s3; \n";
        s3 = s1 + s2; // assign s3 the result of concatenating s1 and s2

        cout << "s3: \"" << s3 << "\"";
    }

    // testing new c++20 string member functions
    cout << "\n\ns1 starts with \"ha\": " << s1.starts_with("ha") << "\n";
    cout << "s2 ends with \"ay\": " << s1.ends_with("ay") << "\n";
    cout << "s2 ends with \"ay\": " << s2.ends_with("ay") << "\n";
}