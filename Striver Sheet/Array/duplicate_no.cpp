#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        
        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};


//Method 1 (Basic)

#include<bits/stdc++.h> 
using namespace std;

void printRepeating(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size;j++)
        {
            if(arr[i] == arr[j])
            {
                cout<<arr[i]<<" ";
            }
        }
    }

}
// Driver Code 
int main() 
{ 
    //int arr[] = {4, 2, 4, 5, 2, 3, 1}; 
    int n;
    cin>>n;
    int arr[n];
    int arr_size = sizeof(arr)/sizeof(arr[0]);  
    for(int k=0; k<n; k++)
    {
        cin>>arr[k];
    }
    printRepeating(arr, arr_size); 
} 
// Time Complexity: O(n*n)
// Auxiliary Space: O(1)


//Method 2
#include<bits/stdc++.h> 
using namespace std;
void printRepeating(int arr[], int size)
{
    int *count = new int[sizeof(int)*(size-2)];
    for(int i=0; i<size; i++)
    {
        if(count[arr[i]] == 1)
        {
            cout<<arr[i]<<" ";
        }
        else
        {
            count[arr[i]]++;
        }
        
    }
}
// Driver Code 
int main() 
{ 
    //int arr[] = {4, 2, 4, 5, 2, 3, 1}; 
    int n;
    cin>>n;
    int arr[n];
    int arr_size = sizeof(arr)/sizeof(arr[0]);  
    for(int k=0; k<n; k++)
    {
        cin>>arr[k];
    }
    printRepeating(arr, arr_size); 
} 
// Time Complexity: O(n)
// Auxiliary Space: O(n)