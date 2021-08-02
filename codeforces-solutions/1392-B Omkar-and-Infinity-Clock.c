#include <stdio.h>
int main(){
    int t, n;
    long int k;
    scanf("%d",&t);
    while(t--){
        scanf("%d %ld",&n,&k);
        int a[n],b[n];
        int min= 1000000000;
        int d=-1000000000;
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
            if(d < a[i]) d=a[i]; 
            if(min>a[i]) min=a[i];
        }
        
        for(int i=0; i<n; i++){
                b[i] = d - a[i];
            }
        
        if (min>=0){
            if(k%2!=0){
                for(int i=0; i<n; i++){
                    printf("%d ",b[i]);
                }
                printf("\n");
            }
            else{
                for(int i=n-1; i>=0; i--){
                    printf("%d ",b[i]);
                }
                printf("\n");
            }
        }
        else{
            d=d-min;
            for(int i=0; i<n; i++){
                b[i]=d-b[i];
            }
            if(k%2!=0){
                for(int i=0; i<n; i++){
                    printf("%d ",d-b[i]);
                }
            }
            else{
                for(int i=0; i<n; i++){
                    printf("%d ",b[i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}