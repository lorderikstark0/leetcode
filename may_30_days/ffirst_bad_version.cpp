#include <bits/stdc++.h>
using namespace std;
#define pb push_back

/**bool isBadVersion(int version) -->
 * returns whether a version is bad or not.
 * impleent to find the first bad version
*/
int firstBadVersion(int n)
{
    
   //basicially an binary search problem and each time we check if mid is the bad version
   //bw 0 and n keep updating the start and end values

   int i=0,j=n,mid=0;
   while(i<=j)
   {
       mid=i+(j-i)/2;
       if(!isBadVersion(mid)) i=mid+1;
       else j=mid-1;
   }
   if(!isBadVersion(mid))
   return mid+1;
   return mid;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    while(n-->0)
    {
        int p;
        cin >> p;
        arr.pb(p);
    }
}