// Write a program that takes a string and two integer indices as input from the  
//user, and prints the substring of the input string starting from the first index up to  
//(but not including) the second index. Handle cases where indices are out of  
//bounds.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int start, end;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << "Enter the starting index: ";
    cin >> start;
    
    cout << "Enter the ending index: ";
    cin >> end;
    
    if (start < 0) start = 0;
    if (end > str.size()) end = str.size();
    if (start > end) {
        cout << "Invalid indices. Starting index is greater than ending index." << endl;
    } else {
        cout << "Substring: " << str.substr(start, end - start) << endl;
    }
    
    return 0;
}
