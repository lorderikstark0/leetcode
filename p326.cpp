#include <cmath>
#include <iostream>

using namespace std;

bool funcofthree(int n)
{
    for(int i=0;i<n;i++)
    {
        if(pow(3,i)==n)
        {
            return true;
        }
    
    }
    return false;

}

//for large number funcofthree doestn work 
//has to store using some vector 


int main()
{
    int n;
    cin >> n;
    if(funcofthree(n))
    {
        cout << "true"<<endl;
    }
    else {
        cout << "false"<<endl;
    }
    return 0;
}