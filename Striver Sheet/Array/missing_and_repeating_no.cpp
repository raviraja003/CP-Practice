/*
#include <bits/stdc++.h>
using namespace std;
void printTwoElements(int arr[], int size)
{
    int i;
    cout << " The repeating element is ";
 
    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << "\n";
    }
 
    cout << "and the missing element is ";
    for (i = 0; i < size; i++) {
        if (arr[i] > 0)
            cout << (i + 1);
    }
}
 
// Driver code
int main()
{
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printTwoElements(arr, n);
}
*/

// Another Method

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    // test case
    while(t--)
    {
        // Input all elements
        int n;
        cin>>n;
        int arr[n];
        int repeating, missing;

        bool present[n+1] = {false}; // check which numbers are present
        // finding repeating numbers
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(present[arr[i]] == true)
                repeating = arr[i];
            present[arr[i]] = true;
        }
        // finding missing number
        for(int i=1; i<=n; i++)
        {
            if(present[i] == false)
            {
                missing = i;
                break;
            }
        }
        cout<<repeating<<" "<<missing<<endl;
    }
    return 0;
}