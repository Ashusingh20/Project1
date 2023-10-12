#include<stdio.h>
int main(){
 int arr[100]; 
int n,mm=1,count=0;
int i,j;
printf("enter n :");

scanf("%d,&n");
  
for(int i=0;i<n;i++){
    printf("elements- %d",i);
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            break;
        }
/*if(arr[j]!=arr[i]&&j!=i){
    count++;
}*/

    }
}
printf("%d",count);











    return 0;
}