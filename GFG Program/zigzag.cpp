#include <iostream>
using namespace std;
int main() {
    int amt;
    double blnc;
    cin>>amt;
    cin>>blnc;
    if (amt%5==0)
    {
        if (amt<blnc && ((amt+0.5)<=blnc))
        {
            double rem = blnc-amt-(0.5);
            cout<<rem<<endl;
        }
        else {
            cout<<blnc<<endl;
        }

    }
    else 
    {
        cout<<blnc<<endl;
    }
}
