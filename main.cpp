#include<iostream>
using namespace std;    
int main()    
{    
    int n, i, j,k = 0;    
    cout<<"Enter the number of rows: ";    
    cin>>n;    
    for(i=1; i<=n; i++)    
    {    
        for(j=1; j<=i; j++)    
        {    
            cout<<j<<" "++k<<"  -  ";    
        }    
        cout<<"\n";    
    }    
    return 0;  
}
