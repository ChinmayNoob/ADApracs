// Merge Sort

#include<bits/stdc++.h>
using namespace std;



void mergeArray(vector<int> &arr,int &low,int &mid,int &high){

	vector<int> tempArr;
	int left=low;
	int right=mid+1;
	while(left<=mid and right<=high){
		if(arr[left]<=arr[right]){
			tempArr.push_back(arr[left]);
			left++;
		}
		else{
			tempArr.push_back(arr[right]);
			right++;
		}
	}
	while(left<=mid){
		tempArr.push_back(arr[left]);
		left++;
	}
	while(right<=high){
		tempArr.push_back(arr[right]);
		right++;
	}

	for(int i=low;i<=high;i++){
		arr[i]=tempArr[i-low];
	}


}
void mergeSort(vector<int> &arr,int low,int high){
	if(low>=high){
		return;
	}
	int mid = low + (high-low)/2;
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);
	mergeArray(arr,low,mid,high);
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<"Before Swapping : "<<endl;
	for(auto it:arr){
		cout<<it<<" ";
	}
	cout<<endl;

    mergeSort(arr,0,n-1);
	cout<<"After Swapping using Merge Sort : "<<endl;

	for(auto it:arr){
		cout<<it<<" ";
	}
	cout<<endl;

}
