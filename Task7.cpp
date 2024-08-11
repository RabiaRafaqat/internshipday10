//• Write a program that takes a string and a character as input from the user and  
//counts the number of times the character appears in the string. 



#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a character to count: ";
    cin >> ch;
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    cout << "The character '" << ch << "' appears " << count << " times in the string." << endl;
    return 0;
}
