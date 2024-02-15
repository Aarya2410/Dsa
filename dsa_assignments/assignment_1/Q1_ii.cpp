/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description:computes and returns the smallest positive integer n 
for which 1+2+3+...+n equals or exceeds the value of "goal".

Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;

    int func(int goal)
{
    int i,sum = 0;
    for (i = 1; i<=goal; i++){
        sum +=i;
        if (sum >= goal){
            break;
        }
    }
    return i;
    }
    int main(){
    int goal;
    cout<<"what is the goal"<<endl;
    cin>>goal;
    int n = func(goal);
    cout<<"the value of n is "<<n<<endl;
    return 0;
}