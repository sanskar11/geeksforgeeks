#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

string s;
int x;

string func(string s) {
	string res = s;
	for (int i = 0; i < s.size(); ++i)
	{
		if (i - x >= 0 && s[i - x] == '1' || i + x < s.size() && s[i + x] == '1')
			res[i] = '1';
		else
			res[i] = '0';
	}
	return res;
}

void solve(){

	cin>>s>>x;
	int n= s.size();
	string ns = string(n,'1');
	for (int i = 0; i < n; ++i)
	{
		if (s[i]=='0')
		{
			if (i-x>=0) ns[i-x] = '0';
			if (i+x < n) ns[i+x] = '0';
		}
	}
	if (func(ns) == s)
		cout<<ns<<endl;
	else
		cout<<-1<<endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		solve();
	}
	return 0;
}
