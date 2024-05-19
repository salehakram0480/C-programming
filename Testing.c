#include <stdio.h>

int main(){
    int ages[]={20, 34, 73, 23, 21, 38, 91};
   int lenght = sizeof(ages)/sizeof(ages[0]);
  float avrg, sum = 0;
  for(int i=0; i < lenght; i++){
    sum += ages[i];
  }
  avrg = sum/lenght;
  printf("%.2f", avrg);
  return 0;
}
