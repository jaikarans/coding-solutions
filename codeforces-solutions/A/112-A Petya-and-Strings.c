#include <stdio.h>
#include <stdlib.h>
int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	char a[100], b[100];
	int count=0,ans;
	char capA,smalA, capB,smalB, ca,cb;
	for(int i=0; a[i-1]!='\n'; i++){
		scanf("%c",&a[i]);
		count++;
	}
	for(int j=0; j<count-1 ; j++){
		scanf("%c",&b[j]);
	}
	
	for(int i=0; i<count-1; i++){
		if(a[i]>64 && a[i] < 91) capA=a[i];
		else capA=a[i]-32;
		if(a[i]>96 && a[i]<123) smalA=a[i];
		else smalA=a[i]+32;
		if(b[i]>64 && b[i] < 91) capB=b[i];
		else capB=b[i]-32;
		if(b[i]>96 && b[i]<123) smalB=b[i];
		else smalB=b[i]+32;
		
	//	smalA=a[i]+32;
	//	capA=a[i]-32;
	//	smalB=b[i]+32;
	//	capB=b[i]-32;

	//	ca=a[i];
	//	cb=b[i];
		if(smalB==smalA || capB==capA){
		    ans=0;
		    continue;
		}
		else if(smalB<smalA || capB<capA){
		    ans=1;
		    break;
		}
		else if(smalA<smalB || capA<capB) {
		    ans=-1;
		    break;
		}

	}
	printf("%d",ans);
	return 0;
}