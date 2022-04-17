#include <stdio.h>

int main(){
    int a = 10;
    // &a -> a의 주소값 저장
    int *ptr;
    ptr = &a;

    int **ptr_ptr;
    ptr_ptr = &ptr;

    printf("a = %d\n", a);
    printf("&a = %d\n", &a);
    printf("ptr = %d\n", ptr);
    printf("&ptr = %d\n", &ptr);
    printf("ptr_ptr = %d\n", ptr_ptr);
    //*ptr_ptr > ptr_ptr 이 가리키는 메모리 주소
}
// #include <stdio.h>
// int main(){
//     int a =20;
//     int *ptr_a;
//     ptr_a = &a;
    
//     printf("a의 값 : %d\n", a);
//     printf("a의 주소값 : %d\n", &a);
//     printf("ptr_a에 저장된 값 : %d\n", ptr_a);
//     printf("ptr_a가 가리키는 변수의 값 : %d\n", *ptr_a);

// }

/* 포인터를 가르키는 포인터 */