/**
 *Modifying aN ARRAY to remove all instances of that value in palce 
 *and return the new length .ONly modify this array and do not allocate extra space. 
 * 
 **/

 #include <bits/stdc++.h>
 using namespace std;

vector<int>  binary_search(vector<int>&arr ,int left,int right ,int val)
{
    vector<int> arr1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]<val)
        {
            left=mid+1;
        }
        else if(arr[mid]>key)
        {
            right=mid-1;
        }
        else {
            arr1.push_back(mid);
        }
    }
    arr1.push_back(-1);
    return arr1;

}



vector<int> remove(vector<int>& arr,int val)
{
    //first sort the array 
    sort(arr.begin(),arr.end());
    //then do binary search for the element and check for the result 
    //iterate throught the array and search for element and if present then pop from arr 
        vector<int> int_ans=binary_search(arr,0,arr.size()-1,val);
        for(size_t i=0;i<.size();i++)
        {
            if()
        }


}


 int main()
 {
     int t;
     cin >> t;
     vector<int> arr;
        while(t-- >0)
        {
            int n ;
            cin >> n;
            while(n-- >0)
            {
                int p;
                cin >> p;
                arr.push_back(p);
            }
        }
        int val;
        cin >> val;
        vector<int> ans=remove(arr);
        for(size_t i=0;i<ans.size();i++)
        {
            cout <<ans[i]<<endl;
        }
        return 0;
 }