#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isAnagram(string &s ,string &t)
{
   int x =s.compare(t);
   if(x==0)
   {
       return true;
   }
   else {
       return false;
   }

}


int main()
{
    
    string s ,t ;
    cin >> s >> t;
    if(isAnagram(s,t)){
        cout << "true"<<endl;
    }
    else {
        cout <<"false"<<endl;
    }
return 0;
}