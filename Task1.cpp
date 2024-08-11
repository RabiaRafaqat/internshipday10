//. String Concatenation and Output:  
//Write a program that takes two strings as input from the user, concatenates  
//them, and prints the resulting string. 

#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    cout << "The concatenated string is: " << str1 + str2 << endl;
    return 0;
}
