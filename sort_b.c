#include<stdio.h>

int main(){
  int cnt=0;//入力した回数を数える。
  int i =0,j=0;/*iはループのカウントを格納した回数をカウント。*/
  int no1=-1;/*配列の数を決める。*/
  puts("数字を昇順に並べ替えます。");
  while(no1<=0){
    printf("格納する整数の数を入力してください：");
    if( scanf("%d",&no1)!=1 ){
      scanf("%*s");
      printf("ゼロ以上の整数で入力してください。\a\n");
    }else{

      if(no1<=0){
        printf("ゼロ以上の整数で入力してください。\a\n");
      }

    }
  }

  int sort[no1];

  for(i=0;no1>i;i++){
    printf("sort[%d]に格納する数字を入力してください。：",i);
    scanf("%d" ,& sort[i]);
  }/*iは格納した値の数を表す。*/

  puts("");
  int t=0;/*tをカウンタとして利用*/

  for(t=0;i>t;t++){
    printf("Bfore_sort[%d]=%d\n", t,sort[t]);
  }

  puts("");

int tmp;
j=0, t=0;/*jを外カウンタとして、tを打ちカウンタとして利用。*/
  for(j=0;i>j;j++){

    for(t=0;i-1>t;t++){
      if(sort[t]>sort[t+1]){
        tmp = sort[t];
        sort[t]=sort[t+1];
        sort[t+1]=tmp;
      }
    }
  }
  t=0;
  for(t=0;i>t;t++){
    printf("After_sort[%d]=%d\n",t,sort[t]);/*ソートした配列を表示。*/
  }

  int sum=0;/*合計の計算と表示*/
  for(t=0;i>t;t++){
    sum=sum+sort[t];
  }
  puts("");
  printf("合計は%dです。\n",sum);
  puts("");
  printf("平均は%3.1fです。\n",(double)sum/(double)i);
  puts("");


  return(0);
}
