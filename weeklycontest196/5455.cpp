#include <bits/stdc++.h>
using namespace std;

string minSwaps(long long num1 ,int k){
  vector<int> arr;
  while(num1!=0){
    int h = num1%10;
    arr.push_back(h);
    num1=num1/10;
  }
   
  vector<int> arr1=arr;
  sort(arr1.begin(),arr1.end());//now arranging this into a numbe becomes the largest integer

  
  //now compare the digits in both of them and also see if it is less than k 
  int count1=0;
  for(size_t i=0;i<arr.size();i++){
    if(arr[i]!=arr1[i]){
      count1++;
    }
  }
  stringstream  result;
  copy(arr1.begin(),arr1.end()),ostream_iterator<int>(result, " ");
  string str1 = result.str();
  str1 =str1.substr(0,str1.length()-1);

  return str1;
  

}


int main(){
    string num;
    cin >> num;

    long long num1 = stoi(num);

    int k;
    cin >> k;

    cout << minSwaps(num1, k)<<"\n";

    return 0;
}
