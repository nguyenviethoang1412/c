#include <stdio.h>

int convert_nhiphan (int x ){


    int du, temp=1;
    int nhiphan=0;
    while(x!=0){
    du=x%2;
    x=x/2;
    nhiphan=nhiphan+du*temp;
    temp=temp*10;
    }
    return nhiphan;
    
}

void convert_hexa (int x, int KQ[]){
      int i=0;
      while(x!=0){
          int n = x%16;
          x=x/16;
            if(n<10){
                KQ[i]= n+ '0';
            } else {
                KQ[i] = n -10 +'A';                
            }
            i++;
      }

      for(int k=i-1;k>=0;k--){
          printf("%c", KQ[k]);
      }

}

void main(){
    int x, KQ[100];
    printf("nhap so tu nhien:");
    scanf("%d", &x);
    printf("ma nhi phan la:%d", convert_nhiphan(x));
    printf("\n ma thap luc phan la:");
    convert_hexa(x, KQ);

}