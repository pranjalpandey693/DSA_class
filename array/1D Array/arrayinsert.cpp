#include<iostream>
using namespace std;
int main()
{
    cout << "enter the size of array you want to create";
    int x;
    cin >> x;
    int a[x];
    cout << "enter the " << x << "element in array";
    for(int i=0;i<x;i++)
    {
        cin >> a[i];

    }
    cout << "array is " << endl;
    for(int i=0;i<x;i++)
    {
        cout <<  a[i] << endl;

    }
}
