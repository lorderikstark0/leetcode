#include <iostream>
#include <vector>
using namespace std;

int noofmb(vector<int>& vec1,int x)
{
    int saved=0;
    for(auto i=vec1.cbegin();i!=vec1.cend();i++)
    {
        saved=saved+(*i-x);
    }
    return saved;
}


int main()
{
int x ;
scanf("%d\n",&x);
vector<int> vec1;
int n ;
while(n-- >0)
{
    int p;
    vec1.push_back(p);
}
    int ans =noofmb(vec1,x);
    cout << ans << endl;
return 0;
}
