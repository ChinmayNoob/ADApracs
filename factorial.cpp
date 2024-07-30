// Factorial Iteration and Recursion

#include<bits/stdc++.h>
using namespace std;

long long iterativeFactorial(int n){
	if(n<0)return -1;
	long long ans = 1;
	for(int i=2;i<=n;i++){
		ans*=i;
	}
	return ans;
}

long long recursiveFactorial(int n){
	if(n<0)return -1;
	if(n==0 || n==1)return 1;
	return n*recursiveFactorial(n-1);
}

int main(){
	int n;
	cin>>n;
	long long iterativeAns = iterativeFactorial(n); 
	long long recursiveAns = recursiveFactorial(n);

	cout<<"The factorial of "<<n<<"using Iterative method is "<<iterativeAns<<endl;
	cout<<"The factorial of "<<n<<"using Recursion method is "<<recursiveAns<<endl;

}