#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    if(n<=1)
    return;
  for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
          }
 }
   bubblesort(arr,n-1);
}
int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;
    int arr[n];
    cout << "enter the element of array";
    for(int i=0;i<n;i++) cin >> arr[i];
    bubblesort(arr,n);
    for(int i=0;i<n;i++) cout << arr[i] << " ";

}