#include<stdio.h>

int scan_h(){//入力されたものが文字列か数字かを判別。
  int num;
  while(1){
    if(scanf("%d",&num) != 1){
      scanf("%*s");
      printf("整数で入力してください。\a\n");
    }else break;
  }
  return(num);
}

int scan_d(){//配列を宣言するのにふさわしい値かどうかを判別。
  int num;
  while(1){
    num = scan_h();
    if( num < 0 ){
    printf("0以上の整数で入力してください。\a\n");
    }else break;
  }
  return(num);
}

void dainyuu(int num, int dt[]){//配列に各値を代入する関数
  int cnt;
  for(cnt=0; cnt < num; cnt++){
    printf("%dつ目の値を入力してください。:",(cnt+1) );
    dt[cnt] = scan_h();
  }
}

void print_s( int num, int dt[] ){//代入された配列を表示。
  int cnt;
  for( cnt=0; cnt < num; cnt++){
    printf("sort[%d]=%d\n", cnt, dt[cnt] );
  }
}

void sort_s(int num, int dt[] ){
  int cnt1, cnt2, tmp = 0;
  for(cnt1=0; cnt1 < num-1; cnt1++){
    for(cnt2=0; cnt2 < num-1; cnt2++){
      if(dt[cnt2] > dt[cnt2+1]){
        tmp = dt[cnt2];
        dt[cnt2] = dt[cnt2+1];
        dt[cnt2+1] = tmp;
      }
    }
  }
}


int sum_c(int num, int dt[]){//配列に入力された値の合計を計算する関数。
    int cnt,sum = 0;
    for(cnt=0; cnt < num; cnt++){
      sum+=dt[cnt];
    }
    printf("整数の合計は%dです。\n",sum);
    return(sum);
}

void ave(int sum, int num){//配列に入力された値の平均値を計算する関数。
  double ave;
  ave=(double)(sum)/(double)(num);
  printf("平均値は%.2fです。\n",ave);
}

int main(void){
  int sum,num =0;
  printf("整数を昇順にソートします。\n格納する整数の個数を入力してください。：");
  num = scan_d();

  int sort[num];
  dainyuu( num, sort);
  puts("代入した値を表示します。");
  print_s( num, sort);
  puts("ソートした結果を表示します。");
  sort_s(num, sort);
  print_s(num,sort);

  sum = sum_c(num, sort);
  ave(sum,num);
  return(0);
}
