
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
	int main()
	{
		std::ios::sync_with_stdio(false);
		ll n;
		cin>>n;
		ll arr[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		ll curr =0;
		long ans =0;
		while(curr<(n-1)) {
		    ll next = curr+1;
		    while(next<(n-1)) {
		        if (abs(arr[curr])>abs(arr[next])|| ((abs(arr[curr])== abs(arr[next])&&(arr[curr]>0))))
		        {
		        	break;
		        }else{
		        	next++;
		        }
		    }
		    ans += (next-curr)*arr[curr]+ (next*next - curr*curr)*arr[curr]*arr[curr];
		    curr = next;
		}
		cout<<ans<<endl;
		return 0;
	}
