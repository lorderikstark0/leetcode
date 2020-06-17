#include <bits/stdc++.h>
using namespace std;

int largestsum(vector<int> &arr)
{
    int max_so_far=INT_MIN,max_ending_here=0;
    for(size_t i=0;i<arr.size();i++)
    {
        max_ending_here =max_ending_here+arr[i];
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0;
    }
    return max_so_far;

   
}


int main()
{
    int n ;
    cin >> n;
    vector<int> arr;
    while(n-- >0)
    {
        int p;
        cin >> p;
        arr.push_back(p);
    }
    cout << largestsum(arr)<<endl;
return 0;
}