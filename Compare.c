#include <stdio.h>

int nhapmang (int a[], int n){
    int i;
    for(i=0;i<n;i++){
    printf("a[%d]=",i);
    scanf("%d", &a[i]);
    }
}

int xuatmang (int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);

    }
    

}

int nhapmang1 (int a1[], int n1){
    int i;
    for(i=0;i<n1;i++){
    printf("a1[%d]=",i);
    scanf("%d", &a1[i]);
    }
}

int xuatmang1 (int a1[], int n1){
    for(int i=0;i<n1;i++){
        printf("%d\t",a1[i]);

    }

}
void sosanh(int a[], int a1[]){
    int i, n;
    for(i=0;i<n;i++){
        if(a[i]==a1[i]){
            printf("\n hai mang trung nhau");
        } else {
            printf("\n hai mang khac nhau");
        }

    }

}

void chen (int a[], int n){
    int vitri,x, i;
    printf("\n nhap vi tri can chen:", vitri);
    scanf("%d",&vitri);
    printf("\n nhap gia tri can chen:",x);
    scanf("%d",&x);
    printf("\n mang sau khi chen la:");
   
    for(i=n-1;i>vitri;i--){
        a[i-1]=a[i];
        
    }
    a[vitri-1]=x;
    for(i=0;i<n;i++)
    printf("%d\t", a[i]);
}
int main (){
    int a[100], a1[100];
    int n,n1;
    do{
        printf("nhap n =");
        scanf("%d",&n);
    } while (n<0||n>100);
    

    nhapmang(a,n);
    printf("mang 1 la:");
    xuatmang(a,n);

   do{
        printf("\n nhap n1 =");
        scanf("%d",&n1);
    } while (n1<0||n1>100);
    
    
    nhapmang1(a1,n1);
    printf("mang 2 la:");
    xuatmang1(a1,n1); 

    sosanh(a, a1);
    chen(a,n);
}