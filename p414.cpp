//accepted
#include <bits/stdc++.h>
using namespace std;

int thirdmax(vector<int>& arr)
{
    sort(arr.begin(),arr.end(),greater<int>());
    //for why using distinct see the third case number 
vector<int>::iterator ip;

ip= unique(arr.begin(),arr.end());
arr.resize(distance(arr.begin(),ip));
    if(arr.size() < 3)
    {
        return arr[0];
    }
    else return arr[2];
}


int main()
{
    int n ;
    cin >> n;
    vector<int> arr;
    while(n-- >0)
    {
        int i;
        cin >> i;
        arr.push_back(i);
    }
    cout << thirdmax(arr)<<endl;
    return 0; 
}