/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: Finds the index of the largest number in an array
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;

int func(int arr[],int n){
    int temp;
    temp=0;
    int flag=0;
    for(int i = 0;i<n;i++){
    
if(arr[i]>temp) {temp = arr[i];
flag=i;
}
    }
    cout<<temp;
    cout<<" index is "<<flag<<endl;
    return 0;
}

int main(){
int arr[] = {1,2,3,4,5,9,7,6};
int n = 8;
func(arr,n);

}