/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: Prints the English name of an integer from 1 to 9.
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
#include <string>
using namespace std;

string english(int num) {
    string names[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    return names[num - 1];
}

int main() {
    int num;
    cout << "Enter a number from 1 to 9: ";
    cin >> num;
    if (num >= 1 && num <= 9) cout << "The English name of " << num << " is " << english(num) <<endl;
     else  cout << "Invalid input" <<endl;
    
}
