
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

int* getLps(string pattern){
	int len = pattern.length();
	int*lps = new int [len];

	lps[0] = 0;
	int i = 1;
	int j = 0;
	while(i<len) {
	    if (pattern[i] == pattern[j])
	    {
	    	lps[i] = j+1;
	    	j++;
	    	i++;
	    }else
	    {
	    	if ( j != 0)
	    	{
	    		j = lps[j-1];
	    	}else{
	    		lps[i] = 0;
	    		i++;
	    	}
	    }
	}
	return lps;
}