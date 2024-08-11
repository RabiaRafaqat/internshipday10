//• Write a program that takes a string input from the user and uses a while loop to  
//print each character in the string along with its index. 

#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int index = 0;
   cout << "Enter a string: ";
    cin >> str;
   while (index < str.length()) {
        cout << "Character at index " << index << ": " << str[index] << endl;
        index++;
    }
   return 0;
}
