#include<iostream>
using namespace std;

void insertionsort(int arr[],int j){

          if(j<1)
          return;

          insertionsort(arr, j-1);

        while(j>0&& arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }

int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;
    int arr[n];
    cout << "enter the element of array";
    for(int i=0;i<n;i++) cin >> arr[i];
    insertionsort(arr,n-1);
    for(int i=0;i<n;i++) cout << arr[i] << " ";

}