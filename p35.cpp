#include <bits/stdc++.h>
#define pb push_back 

using namespace std;

typedef long long ll;

int binarySearch(vector<int>& arr ,int left ,int right ,int target){
	if(right>=left){
		int mid=left+(right-left)/2;

		if(arr[mid]==target){
			return mid;
		}

		if(arr[mid]>target){
			return binarySearch(arr,left,mid-1,target);

		}
		return binarySearch(arr,mid+1,right,target);			
	}
	//if not found return -1
	return -1;
}


int searchInsert(vector<int>& nums ,int target){
	//simply do an binary search and see
	int val=binarySearch(nums,0,nums.size()-1,target);
	int pos=0;
	if(val!=-1){
		return val;
	}
	
	else{
		for(size_t i=0;i<nums.size()-1;i++){
			pos=nums[i];
			if(target>nums[i] && target <nums[i+1]){
				pos=target;
				break;
			}
		}
  	return pos;	
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
   	vector<int>arr;
	int t;
	cin >>t;
	while(t-->0){
	int p;
	cin >> p;
	arr.pb(p);
	}
	int target;
	cin >> target;
	cout <<searchInsert(arr,target)<<"\n";


	return 0;
}


