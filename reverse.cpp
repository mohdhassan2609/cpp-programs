//you will be given an array of N integers and you have to print the integers inreverse order.....input format:the first line of thr input contains N,where N is the number of integers .the next line contains N integers seperated by space..constraints:1<=N<=1000,1<=Ai<=10000,where Ai is ith integer in the array..output format:ptint the N integers of an array in the reverse order in a single line sperarated by a space..









#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N;
	int arr[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	for(int j=N-1;j>0;j--)
	{
		cout<<arr[j]<<" ";
	}
	return 0;
}
