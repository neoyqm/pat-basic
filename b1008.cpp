#include<iostream>
using  namespace std;
int main()
{
int n,b;
int cnt=0;
cin>>n>>b;
int m[100];
b=b%n;
for(int r=0;r<n;++r)
{
	cin>>m[r];
}
	for(int i=n-b;i<=n-1;++i){
	
	cout<<m[i];cnt++;
	if(cnt<n)
	cout<<" ";
	}
	for(int i=0;i<=n-1-b;++i)
	{
	cout<<m[i];cnt++;
		if(cnt<n)
	cout<<" ";
}
	

}
