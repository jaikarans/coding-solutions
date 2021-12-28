#include <stdio.h>

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif 

	int n;
	int i=0, no=0;
	int count=0;
	scanf("%d",&n);
	int a,b,c;
	label: ;
	for( ; no<n; i++)
	{
        no++;
		scanf("%d%d%d",&a,&b,&c);
		{
			if(a==1&&b==1 || a==1&&c==1)
			{
				count++;
				goto label;
			}
			else if(b==1&&a==1 || b==1&&c==1)
			{
				count++;
				goto label;
			}
			else if(c==1&&a==1 || c==1&&b==1)
			{
				count++;
				goto label;
			}
		}
	}
	printf("%d",count);
	return 0;

}