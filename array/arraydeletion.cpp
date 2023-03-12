#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        cout << a[i] << " ";

    }
    int i;
    cout << "\nenter the element you want to delete ";
    int x; 
    cin >> x;
    for( i=0;i<6;i++)
    {
        if(x==a[i])
        break;
    }
    if(i<6)
    {   
        for(int j=i;j<6;j++)
        {
            a[j]=a[j+1];
        }
    }
    cout << "new array is \n ";
    for(int j=0;j<5;j++)
    {
        cout << a[j] << " ";
    }
}