#include <stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        int diff;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        for(int i=0; i<n-1; i++){
            diff=a[i]-a[i+1];
            if(diff!=0) break;
        }
        if(diff==0) printf("%d",n);
        else printf("1");
        printf("\n");
    }
    return 0;
}