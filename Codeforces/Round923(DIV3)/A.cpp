
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> oneD(int n)
{
	vector<int> v;
	int ele;
	for(int i = 0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	return v;
}

bool isSorted(vector<int> v)
{
	vector<int> sv = v;
	sort(sv.begin(),sv.end());
	return v==sv;
}

int solve(int n,string s)
{
	int i = 0;
	int j = n-1;
	while(i<j)
	{
		if(s[i]=='B' && s[j]=='B')
			break;
		else if(s[i]=='W')
			i++;
		else if(s[j]=='W')
			j--;
	}

	return j-i+1;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	ll t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		cout<<solve(n,s)<<endl;
	}
}