#include<stdio.h>
#include<string.h>
int main(){
  int n;
  scanf("%d",&n);
  int sum[2*n+2];
  memset(sum,0,(2*n+2)*sizeof(sum[0]));
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      int tmp;
      scanf("%d",&tmp);
      //diagonal l to r
      if(i==j) sum[2*n] += tmp;
      //diagonal r to l
      if(i==n-j-1) sum[2*n+1] += tmp;
      //row
      sum[i] += tmp;
      //col
      sum[n+j] += tmp;
    }
  }
  int lsum = sum[0];
  for(int i=1;i<2*n+2;++i){
    if(sum[i]!=lsum){
      printf("No");
      return 0;
    }
  }
  printf("Yes");
  return 0;
}