//This file is for Step 2.
//You should do 
//  Step 2 (A): write seq2
#include<stdlib.h>
#include<stdio.h>
int seq2(int x){
  int r=1;
  if(x==0){
    return r;
  }
  else if(x>0){
    for(int i=1;i<=x;i++){
      r=r+2*(i-1)+4;
    }
    return r;
  }
  else {
    for(int i=-1;i>=x;i--){
      r=r-2*(i+2);
    }
    return r;
  }
}
int sumSeq2(int low,int high){
  int sum=0;
  if(low>=high){
    return sum;
  }
  else{
    for(int i=low;i<high;i++){
      sum+=seq2(i);
    }
    return sum;
  }
}
//  Step 2 (B): write main to test seq2
int main(){
  int a=3;
  int b=-5;
  int r;
  for(int i=b;i<=a;i++){
    r=seq2(i);
    printf("seq2(%d)=%d\n",i,r);
  }
  int c=-2;
  int d=4;
  int sum;
  sum=sumSeq2(c,d);
  printf("sumSeq2(%d,%d)=%d\n",c,d,sum);
  c=-5;
  d=10;
  sum=sumSeq2(c,d);
  printf("sumSeq2(%d,%d)=%d\n",c,d,sum);
  c=0;
  d=0;
  sum=sumSeq2(c,d);
  printf("sumSeq2(%d,%d)=%d\n",c,d,sum);
  c=5;
  d=4;
  sum=sumSeq2(c,d);
  printf("sumseq2(%d,%d)=%d\n",c,d,sum);
  return 1;
}
//  Step 2 (C): write sumSeq2
//  Step 2 (D): add test cases to main to test sumSeq2
// 
// Be sure to #include any header files you need!
