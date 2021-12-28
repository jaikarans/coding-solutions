#include <iostream>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n, x=0;
	cin >> n;
	char a,b,c;
	for(int i=0; i<n; i++)
	{
		
			cin >> a >> b >> c;
			if(b=='+') ++x;
			else --x;
	}
	cout << x;

}