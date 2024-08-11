// Write a program that takes a string input from the user and an integer index, then  
//prints the character at that index in the string. Handle cases where the index is  
//out of bounds.  


#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int index;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter an index: ";
    cin >> index;
    if (index >= 0 && index < str.length()) {
    cout << "Character at index " << index << ": " << str[index] << endl;
    } else {
    cout << "Index out of bounds!" << endl;
    }

    return 0;
}
