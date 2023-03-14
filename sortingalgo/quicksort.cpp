#include<bits/stdc++.h>
using namespace std;


void print(int arr[] ,int n){
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << endl;

    }
}
int main(){
    cout << "enter the size of array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "enter the elements of arrray \n" ;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    print(arr, arr.size());
}