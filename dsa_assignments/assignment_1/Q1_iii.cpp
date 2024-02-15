/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: gcd
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;

int gcd(int a,int b){
if (a>b){
for(int i = b; i>0; i--)
if(a%i==0 && b%i==0)
return i;
}

else {
   for(int i = a; i>0; i--)
    if(a%i==0 && b%i==0)
    return i; 
}
return -1;
}

int main(){
int a,b;
cout<<"enter the numbers:"<<endl;
cin>>a;
cin>>b;
int hcf = gcd(a,b);
cout<<"the gcd of given numbers is: "<<hcf<<endl;
return 0;
}