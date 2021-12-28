#include <stdio.h>
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int count=0;
	int M,N;
	scanf("%d%d",&M,&N);
	count+=(M%2)*(N/2);
	count+=(M/2)*N;
	printf("%d",count);
	return 0;
}