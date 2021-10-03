#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
	long nTest,n,res,x,k;
	scanf("%ld",&nTest);
	while (nTest--)
	{
		scanf("%ld%ld%ld",&n,&k,&res);
		for (long i=1; i<n; ++i) scanf("%ld",&x),res^=x;
		puts((!res)?"Second":"First");
	}
}