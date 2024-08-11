// Write a program that takes a string input from the user and prints a new string  
//where all the characters are converted to uppercase.


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    
    cout << "Uppercase string: " << str << endl;
    
    return 0;
}

