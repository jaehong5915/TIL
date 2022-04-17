# include<stdio.h>

int main(){
    int a = 10;

    int *ptr;
    printf("ptr의 값:: %d\n", ptr);
    printf("a의 값 %d\n", a);
    ptr = &a;
    printf("a의 값:: %d\n", a);

    *ptr = 20;
     //ptr이 가르키는 변수 a의 값을 20으로 바꿔라
    printf("a의 값:::: %d\n", a);
}