#include <iostream>

using namespace std;

int n,m;
int a[1000000];

int main(){
	
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=m;i<n+m;i++)
		cout<<a[i%n]<<" ";
	cout<<endl;
	
	return 0;
}
