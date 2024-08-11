//Write a program that takes a string input from the user and uses a for loop to  
//print each character in the string on a new line.  


#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
    }
    return 0;
}
