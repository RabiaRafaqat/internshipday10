 //Write a program that reads a string input representing a number from the user,  
//converts it to an integer, subtracts 10 from it, and prints the result.  

#include <iostream>
using namespace std;
int main() {
    string str;
    int num;
    cout << "Enter a number: ";
    cin >> str;
    num = stoi(str);  // Convert string to integer
    cout << "Result after subtracting 10: " << num - 10 << endl;
    return 0;
}
