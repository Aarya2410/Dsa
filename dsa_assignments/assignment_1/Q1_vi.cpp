/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: reverse an array
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;
int rev_arr(int arr[],int n){
for(int i = 0;i<n/2;i++){
    int temp;
    temp = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i]= temp;
}
return 0;
}

int main(){
int arr[] = {1,2,3,4,5,6,7};
int n = 7;
rev_arr(arr,n);
cout<<"the reversed array is:"<<endl;
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}