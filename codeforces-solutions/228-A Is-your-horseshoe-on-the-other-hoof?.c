#include <stdio.h>
int main(){
    int a[4],count,set[] = {0,0,0,0};
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    for(int i=0; i<4; i++){
        count=0;
        for(int j=0; j<4; j++){
            if(a[i]==set[j]) count++;
        }
        if(!count>0) set[i]=a[i];
    }
    count=0;
    for(int i=0; i<4; i++){
        if(set[i]==0) count++;
    }
    printf("%d",count);
    return 0;
}