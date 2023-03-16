#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int x){
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high)
    {
        mid = low +(high-low)/2;
        if(arr[mid]==x)
        return mid;
        else if(x>arr[mid])
        low =mid+1;
        else 
        high = mid-1;
    }
    return -1;

}
int main(){
    int arr[6]={3,4,5,6,8,9};
    for(int i=0;i<6;i++) cout << arr[i] << " ";
    cout << "\nenter the element which you want to search";
    int x;
    cin >> x;
    int y= binarysearch(arr,6,x);
    if(y==-1)
    cout << "element not found";
    else 
    cout << "element index is "<< y+1;
}