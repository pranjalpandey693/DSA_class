#include<bits/stdc++.h>
using namespace std;

int part(int arr[], int low ,int high)
{       
    int pivot = arr[low];
    int i=low;
    int j=high;
    while (i<j)
    {
       while(arr[i]<=pivot&& i<=high-1)
       {
        i++;
       }
       while(arr[j]>pivot && j>=low+1)
       {
        j--;
       }
       if(i<j)
       {
        swap(arr[i],arr[j]);

       }
    }
       swap(arr[low],arr[j]);
       return j;
    
   
}

void qs(int arr[],int low, int high)
{      if(low<high){
    int pindex = part(arr,low,high);
    qs(arr,low,pindex-1);
    qs(arr,pindex+1,high);
}

}

void print(int arr[] ,int n){
        cout << "the modified array is \n";
    for(int i=0;i<n;i++)
    {    cout << arr[i] << " ";

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
   qs(arr,0,n-1);
   print (arr,n);
}