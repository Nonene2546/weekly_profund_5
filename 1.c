#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int sum = 0,lsum=0;
  int f=1;
  int arr[n][n];
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      scanf("%d",&arr[i][j]);
      sum += arr[i][j];
    }
    if(f){
      f = 0;
      lsum = sum;
    }
    else if(lsum!=sum){
      printf("No");
      return 0;
    }
    sum = 0;
  }
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      sum += arr[j][i];
    }
    if(lsum!=sum){
      printf("No");
      return 0;
    }
    sum = 0;
  }
  for(int i=0;i<n;++i){
    sum += arr[i][i];
  }
  if(lsum!=sum){
    printf("No");
    return 0;
  }
  sum = 0;
  for(int i=0;i<n;++i){
    sum += arr[i][n-i-1];
  }
  if(lsum!=sum){
    printf("No");
    return 0;
  }
  
  printf("Yes");
}