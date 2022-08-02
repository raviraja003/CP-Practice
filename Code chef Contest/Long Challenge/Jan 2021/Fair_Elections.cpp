#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        int total1=0, total2=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            total1 = total1+a[i];
        }
        
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
            total2 = total2+b[i];
        }

        sort(a, a+n);
        sort(b, b+n, greater<int>());

         if(total1 > total2)
         cout<<0<<"\n";
         else
        {
            int count = 0;
            int i;
            for(int i=0; i<m; i++)
            {
                if(total1 <= total2)
                {
                    total1 = total1 - a[i];
                    total1 = total1 + b[i];

                    total2 = total2 + a[i];
                    total2 = total2 - b[i];
                    count++;
                }
                else if(total1 > total2)
                {
                    break;
                }
            }
                if(i==n && total1 <= total2)
                {
                    cout<<-1<<endl;
                } else if(total1 > total2)
                {
                    cout<<count<<endl;
                }
        } 
    }
    return 0;
} 

/*
//Second Solution

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        int total1=0, total2=0;

        

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            total1 = total1+a[i];
        }
        
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
            total2 = total2 + b[i];
        }
        
        int test = min(m,n);
        int count = 0;
        
        while (test--)
        {
            if(total1 < total2)
            {
               
               
            }
            else {
                break;
            }
        }
        if(total1 < total2)
        {
            cout<<-1<<endl;
        }
        else 
        {
            cout<<count<<endl;
        }
    } 
} */