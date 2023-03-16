#include<iostream>
using namespace std;

 void select ( int arr[], int n){
    
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++)
        {  if(arr[mini]>arr[j])
            mini =j;

        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
 }

int main(){
    int n;
    cout << "enter the size of array";
    cin >> n;
    cout << "enter the element of array";
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    select (arr,n);
    for (int i=0;i<n;i++) cout << arr[i] << " ";
}