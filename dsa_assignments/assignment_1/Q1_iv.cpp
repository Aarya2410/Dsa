/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: prime number
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;
bool prime(int a){
    for(int i=2;i<a;i++){
    if(a%i==0) return 0;
    }
return 1;
}

int main(){
cout<<"enter the number:"<<endl;
int a;
cin>>a;
int b = prime(a);
if(b== 0) cout<<"number is not prime"<<endl;
if(b== 1) cout<<"number is prime"<<endl;
}
