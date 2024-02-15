/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: program for Linear Search using Functions
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;
int linearsearch(int arr[],int s,int e){
for(int i=0;i<s;i++){
    if(arr[i]== e){
        return 1;
    }
    return  -1;
}
}
int main(){
    int arr[50];
    int s;
    cout<<"enter size of an array"<<endl;
    cin>>s;
    cout<<"enter the array"<<endl;
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
cout<<"enter the element to search for:"<<endl;
int e;
cin>>e;
if(linearsearch(arr,s,e) == 1)
{
cout<<"element is present"<<endl;
}
else cout<<"element not present"<<endl;
}
