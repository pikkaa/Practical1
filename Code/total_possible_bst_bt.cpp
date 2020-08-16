#include<bits/stdc++.h>
using namespace std;
unsigned long int factorial(unsigned int n){
	unsigned long int res = 1;
	for (int i = 1; i <= n; ++i) 
    { 
        res *= i; 
    } 
  
    return res; 
}
unsigned long int binomialcoeff(unsigned int n,unsigned int k){
	unsigned long int res=1;
	if(k > n-k){
		k=n-k;
	}
	for(int i=0;i<k;++i){
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}
unsigned long int catalan(unsigned int n){
	unsigned long int c=binomialcoeff(2*n,n);
	return c/(n+1);
}
unsigned long int countBST(unsigned int n){
	unsigned long int count=catalan(n);
	return count;
}
unsigned long int countBT(unsigned int n){
	unsigned long int count=catalan(n);
	return count*factorial(5);
}
int main(){
	int count1,count2,n=5;
	count1=countBST(n);
	count2=countBT(n);
	cout<<"count of bst with"<<n<<"nodes is "<<count1<<endl;
	cout<<"count of binary tree with"<<n<<"nodes is "<<count2<<endl;
	return 0;
}
