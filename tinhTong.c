#include <stdio.h>
#define max 100
int nhapmang (int a[], int n){
    for(int i=0;i<n;i++){
    printf("a[%d]=",i);
    scanf("%d", &a[i]);
    }

}

int xuatmang (int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);

    }

}
        //// tinh tong mang
int sum (int a[], int n){
    int Tong;
    for (int i=0;i<n;i++){
        Tong+=a[i];

    }
    return Tong;

}
        ////tim gia tri lon nhat trong mang
int max_value (int a[], int n){
    int value=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>value){
            value=a[i];
        }

    }
    return value;

}
             /// tim gia tri nho nhat trong mang
int min_value (int a[], int n){
    int valuemin=a[0];
    for(int i=0;i<n;i++){        
        if(a[i]<valuemin){
            valuemin=a[i];
        }
    }  return valuemin;
}
  //// vi tri gia tri lon nhat
int vi_tri (int a[], int n){
    int vitri;
    int maa =max_value(a,n);
    for(int i=0; i<n;i++){
       if(a[i]==maa){
           vitri=i;
           break;  ///// chu y, break day rat quan trong, khong co no thi gia tri vitri luon =0, break nham thoat khoi vong lap trong c khi dieu kien thoa man
       }
    } return vitri;
    

}
int main (){
    int a[max];
    int n;
    do{
        printf("nhap n =");
        scanf("%d",&n);
    } while (n<0||n>max);

    nhapmang(a, n);

    xuatmang(a,n);

    printf("\n tong la: %d", sum(a,n));
    printf("\n gia tri lon nhat torng mang:%d",max_value(a,n) );
    printf("\n gia tri nho nhat trong mang:%d",min_value(a,n) );
    printf("\n vi tri lon nhat cua mang la:%d",vi_tri(a,n));
    
}