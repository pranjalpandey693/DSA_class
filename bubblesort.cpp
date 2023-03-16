#include<iostream>
using namespace std;
void bubblesort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}
int main()
{
    int x;
    cout << "enter the size of array";
    cin >> x;
    cout << "enter the element of array";
    int arr[x];
    for(int i=0;i<x;i++) cin >> arr[i];
     bubblesort(arr,x);
    for(int i=0;i<x;i++) cout << arr[i] << " ";
}