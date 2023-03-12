#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        cout << a[i]<< endl;

    }
    cout << "enter the element you want to search";
    int x,y=-1;
    cin >> x;
    for(int i=0;i<5;i++)
    { if(x==a[i])
      {
            cout << "element is in "<< i+1 <<  "index";
            y=0;


        }
        
 
    }
   
       if(y==-1)
        
        cout << "element not found";
}