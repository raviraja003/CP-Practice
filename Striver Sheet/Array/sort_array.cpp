// Sort an array of 0's 1's & 2's
/*
#include<bits/stdc++.h> 
using namespace std;
class Solution {
    public: 
        void sorting(vector<int>& nums)
        {
            int low = 0;
            int high = nums.size() - 1;
            int mid = 0;

            while (mid <= high)
            {
                switch(nums[mid])
                {
                    //if the element is 0
                    case 0 : swap(nums[low++],nums[mid++]);
                    break;
                    //if the element is 1
                    case 1 : mid++;
                    break;
                    //if the element is 2
                    case 2 : swap(nums[mid], nums[high--]);
                    break;
                }
            }
        }
};
*/

#include<bits/stdc++.h> 
using namespace std;

void sorting(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    int mid = 0;    
    while (mid <= high)
    {
        switch(arr[mid])
        {
            //if the element is 0
            case 0 : swap(arr[low++],arr[mid++]);
            break;
            //if the element is 1
            case 1 : mid++;
            break;
            //if the element is 2
            case 2 : swap(arr[mid], arr[high--]);
            break;
        }
    }
}    

void printArray(int arr[], int arr_size) 
{ 
    // Iterate and print every element 
    for (int i = 0; i < arr_size; i++) 
        cout << arr[i] << " "; 
} 

int main() 
{ 
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    sorting(arr, n); 
  
    //cout << "array after segregation "; 
  
    printArray(arr, n); 
  
    return 0; 
} 
// Time Complexity: O(n)
// Space Complexity: O(1)