//Write a program that takes a string and a substring as input from the user,  
//searches for the substring in the string, and prints the starting index of the first  
//occurrence of the substring. If the substring is not found, print a message  
//indicating that. 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, substr;
    
    cout << "Enter the main string: ";
    cin >> str;
    
    cout << "Enter the substring: ";
    cin >> substr;
    
    size_t index = str.find(substr);
    
    if (index != string::npos) {
        cout << index << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    return 0;
}
