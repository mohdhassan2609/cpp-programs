//consider an elemental array where each index in the array contains a reference to an array of integers  input format: the first line contains two space seperated integers denoting the respective values.each line of the subsequent lines contains a space seperated sequence in the format k a[i]0 a[i]1...a[i]k-1 describing the element array.




#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithms>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	vector<vector>v;
	for(int i=0;i<n;i++)
	{
		int r;
		cin>>>r;
		for(int j=0;j<r;j++)
		{
			cin>>v[i][j];
		}
	}
	for(int t=0;t<q;t++)
	{
		int i1,j1;
		cin>>i1>>j1;
		cout<<v[i1][j1];
	}
}
