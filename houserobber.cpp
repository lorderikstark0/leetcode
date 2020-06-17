#include <bits/stdc++.h>
using namespace std;

int maxsolution(vector<int>&nums)
{
     vector<int> odds;
        vector<int> evens;
        for(auto i=nums.cbegin();i!=nums.cend();i++)
        {
            if(i%2==0)
            {
                evens.push_back(i);
            }
            else{
                odds.push_back(i);
            }
        }
        int sumodd=0;
        int sumeven=0;
        for(auto i=evens.cbegin();i!=evens.cend();i++)
        {
            sumeven+=*i;
        }
        for(auto i=odds.cbegin();i!=odds.cend();i++)
        {
            sumodd+=*i;
        }
    if(sumeven>sumodd)
    {
        return sumeven;
    }
    return sumodd;

}

int main()
{
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n ;i++)
    {
        cin >> arr[i];
    }
    vector<int> hno(arr+0 ,arr+n-1);
    int solution =maxsolution(hno);
    cout << solution<< endl;
    return 0;
}