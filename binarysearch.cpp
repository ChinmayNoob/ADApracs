// Binary Search Algorithm 

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr,int target,int n){
	int low=0;
	int high = n-1;
	while(low<=high){
		int mid = low+(high-low)/2;

		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]<target){
			low=mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return -1;
}

int main(){
	int n,target;
	cin>>n>>target;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	//Sort the array if it is not sorted first 
	sort(arr.begin(),arr.end());

	cout<<"Sorted Array : "<<endl;
	for(auto it:arr){
		cout<<it<<" ";
	}
	cout<<endl;
	
	int ans=binarySearch(arr,target,n);

	cout<<"The position of"<<" "<<target<<" "<<"is"<<" "<<ans<<endl;

}