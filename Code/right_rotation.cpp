#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int start,int end){
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void rightrotate(int arr[], int d,int n){
	if(d==0);
		return;
	reversearray(arr,0,n-1);
	reversearray(arr,0,d-1);
	reversearray(arr,d,n-1);
}
void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"enter the no of ratations"<<endl;
	int d;
	cin>>d;
	d=d%n;//in case no of ratation greater than array length
	rightrotate(arr,d,n);
	printarray(arr,n);
	return 0;
}
