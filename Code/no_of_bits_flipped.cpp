#include<bits/stdc++.h>
using namespace std;
int countsetbits(int n){//brian kernighan's algo
	int count=0;
	while(n>0){
		n &= (n-1);
		count++;
	}
	return count;
}
int flippedcount(int a, int b){
	return countsetbits(a^b);
}
int main(){
	int a = 10;
	int b = 20;
	cout<<flippedcount(a,b)<<endl;
	return 0; 
}
