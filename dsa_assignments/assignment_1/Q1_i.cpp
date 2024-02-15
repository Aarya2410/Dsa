/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: sum of all the integers between "first" and "last" inclusive.
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;

int sum_of_integers(int first, int last) {
int sum = 0;
    if (first > last) {
    for (int i = last+1; i <first; ++i) {
        sum += i;    }
    }
if (first < last) {    
    for (int i = first+1; i < last; ++i) {
    sum += i;
    }
}
    return sum;
}
int main() {
    int first_number = 1;
    int last_number = 10;
    int result = sum_of_integers(first_number, last_number);
    cout << "The sum of integers between " << first_number << " and " << last_number << " is: " << result <<endl;
    return 0;
}
