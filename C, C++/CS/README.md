# π <span style="color:blue"> C / C++ κΈ°μ λ©΄μ </span>
- <u>C vs C++</u>
    - CμΈμ΄λ μ μ°¨μ§ν₯,μμ°¨μ μΌλ‘ μ²λ¦¬
    - C++μ κ°μ²΄μ§ν₯, κ°μ²΄ μ€μ¬μΌλ‘ λ°μ΄ν°μ λ©μλλ₯Ό λ§λ€μ΄ μ²λ¦¬ > μΊ‘μν, μμμ±κ³Ό κ°μ νΉμ§
---
- <u>C++ [***μμ & λ€νμ±***]</u>
    - **μμ** : λ©€λ² λ³μμ λ©€λ² ν¨μλ₯Ό μμ ν΄λμ€μ λ¬Όλ €μ€ <br> λΆλͺ¨ ν΄λμ€μ λͺ¨λ  λ©€λ²λ€μ μμ ν΄λμ€κ° λ¬Όλ €λ°λλ€. μ¬μ¬μ©
    - **λ€νμ±** : κ°μ²΄λ€μ νμμ΄ λ€λ₯΄λ©΄ λκ°μ ν¨μλ₯Ό νΈμΆν΄λ μλ‘ λ€λ₯Έ λμμ νκ² λλ€. νλμ μ½λλ‘ λ€μν νμμ κ°μ²΄ μ²λ¦¬
---
- <u>constructor(μμ±μ), destructor(μλ©Έμ) ?</u>
    - **μμ±μ**, κ°μ²΄ μμ±λ  λ μλ μμ±<br>μμ±μλ₯Ό λ°λ‘ κ΅¬ννμ§ μλλ€λ©΄ κ°μ²΄λ₯Ό μμ±ν  λ λ©€λ² λ³μκ° NULLλ‘ μ΄κΈ°ν λλ€.<br> λ§€κ° λ³μλ₯Ό λ€λ₯΄κ² ν¨μΌλ‘μ¨ μ€λ³΅ μ μ κ°λ₯ 
    - **μλ©Έμ**, κ°μ²΄ μλ©Έλ  λ μλ μλ©Έ<bR> κ°μ²΄μ λ©λͺ¨λ¦¬ λ°νμ μν΄ μ¬μ©, ν΄λμ€ μ΄λ¦ μμ '~'κ° λΆμ νν
---
- <u>default constructor</u>
    - ***κΈ°λ³Έ μμ±μ*** <br> μμ±μκ° μλ κ²½μ° μ»΄νμΌλ¬μ μν΄ μλ μμ±λλ μμ±μ
---
- <u>Virtual, ν¨μ μμ virtualμ λΆμ΄λ©΄ κ°μ ν¨μκ° λλ€.</u>
    - μμμμ μ€λ²λΌμ΄λ© ν  λ μ¬μ©<br>λΆλͺ¨ ν΄λμ€μμ μ μΈν ν¨μκ° μμ ν΄λμ€μμ μ¬μ μν  κ²μ μλ €μ€λ€.
---
- <u>μ€λ²λ‘λ©κ³Ό μ€λ²λΌμ΄λ©</u>
    - μ€λ²λ‘λ© : ν¨μ μ€λ³΅ μ μ, ν¨μλͺμ΄ κ°μ ν¨μλ₯Ό μ€λ³΅ μ μ<br>νλΌλ―Έν° κ°μ, νλΌλ―Έν°μ μλ£νμ λ°λΌ μ¬λ¬κ°μ κ°μ μ΄λ¦μ ν¨μλ₯Ό λ§λ€ μ μλ€.
    - μ€λ²λΌμ΄λ© : μμ κ΄κ³μμ ν¨μ μ¬μ μ<br>μμλ°μμ λ ν΄λμ€μ ν¨μλ₯Ό μ¬μ©νμ§ μκ³  λ€λ₯Έ κΈ°λ₯ μ€ν μ<br>ν¨μλ₯Ό μμν΄λμ€μ λ€λ₯Έ μ΄λ¦, κ°μ μλ£νμΌλ‘ μ¬μ μν΄μ μ¬μ©
---
- <u>mallocκ³Ό newμ μ°¨μ΄?</u>
    - malloc CμΈμ΄, new C++
    - malloc ν¨μ, heap μμ­μμ ν λΉ, μ΄κΈ°κ° μ§μ  λΆκ°λ₯
    - new μ°μ°μ, dynamic memoryμμ ν λΉ, μ΄κΈ°κ° μ§μ  κ°λ₯
---
- <u>structμ classμ μ°¨μ΄λ?</u>
    - structμμλ κΈ°λ³Έ νμ μκ° public, classλ private
---
- <u>μμ λ³΅μ¬μ κΉμ λ³΅μ¬</u><br>κ°μ²΄ μμ±νκ³  μ΄κΈ°ν μ λ©€λ²λ³μλ₯Ό μ΄λ»κ² μ΄κΈ°ννλλμ λ°λΌ κ΅¬λΆ
    -**μμ λ³΅μ¬**λ μ€μ  λ°μ΄ν°κ° μλ λ¨μ§ λ©λͺ¨λ¦¬ μ£Όμλ§μ λ³΅μ¬
    -**κΉμ λ³΅μ¬**λ λ³μκ° κ΄λ¦¬νλ λ¦¬μμ€ μμ²΄λ₯Ό λ³΅μ¬νμ¬ μλ‘­κ² λ©€λ² λ³μμ λ³΅μ¬νλ€. <br>μμ λ³΅μ¬μ λΉν΄ μμ μκ°κ³Ό λ¦¬μμ€μ μλͺ¨κ° λ°λ₯Έλ€.
---
- <u>**C++ νλ‘κ·Έλ¨ λΉλ(μ»΄ν¨ν°κ° μ΄ν΄ν  μ μλλ‘ λ§λλ) κ³Όμ **</u>
    - μ μ²λ¦¬ -> μ»΄νμΌλ¬ -> μ΄μλΈλ¬ -> λ§μ»€ 
    1. μ μ²λ¦¬ : μ½λμ μ£Όμμ μ κ±°, defineμ μΉννλ κΈ°λ₯
    2. μ»΄νμΌλ¬ : μ΄μλΈλ¦¬ νμΌλ‘ λ³ν
    3. μ΄μλΈλ¬ : μ€λΈμ νΈ νμΌλ‘ λ³ν, μ€λΈμ νΈ μ½λλ 0κ³Ό1λ‘ μ΄λ£¨μ΄μ§ μ½λ
    4. λ§μ»€ : μ€λΈμ νΈ νμΌλ€μ λ¬Άμ΄ μ€ν μ½λνμΌλ‘ λ³ννλ€.<br>μ΄μμ²΄μ κ° λ‘λ©ν  μ μλλ‘ μ£Όμ μ λ³΄λ₯Ό ν λΉν νμΌμ λ§λ€μ΄ λΈλ€.<br>

---
- **ν¬μΈν° : λ©λͺ¨λ¦¬λ₯Ό μ§μ μ μΌλ‘ μ κ·Ό, μ μ΄ν  μ μλ€.**
    - **λ©λͺ¨λ¦¬ μ£Όμ κ°μ μ μ₯ν  μ μλ μλ£ν νμ**
    - ν¬μΈν° μ μΈ -> νμ *ptr_λ³μλͺ
    - ν¬μΈν° λ³μμ ν¬κΈ° > 4λ°μ΄νΈλ‘ μΌμ 
        
    - &a = b > aλ bμ λ νΌλ°μ€λ‘ μλ
```c
#include <stdio.h>
int main(){
    int a =20;
    int *ptr_a;
    ptr_a = &a;
    
    printf("aμ κ° : %d\n", a);
    printf("aμ μ£Όμκ° : %d\n", &a);
    printf("ptr_aμ μ μ₯λ κ° : %d\n", ptr_a);
    printf("ptr_aκ° κ°λ¦¬ν€λ λ³μμ κ° : %d\n", *ptr_a);
    ==========================================
    aμ κ° : 20
    aμ μ£Όμκ° : 1870312188
    ptr_aμ μ μ₯λ κ° : 1870312188
    ptr_aκ° κ°λ¦¬ν€λ λ³μμ κ° : 20
}
    ==========================================
# include<stdio.h>

int main(){
    int a = 10;

    int *ptr;
    printf("ptrμ κ°:: %d\n", ptr);
    printf("aμ κ° %d\n", a);
    ptr = &a;
    printf("aμ κ°:: %d\n", a);

    *ptr = 20;
     //ptrμ΄ κ°λ₯΄ν€λ λ³μ aμ κ°μ 20μΌλ‘ λ°κΏλΌ
    printf("aμ κ°:::: %d\n", a);
}
    ==========================================
    ptrμ κ°:: 39173780
    aμ κ° 10
    aμ κ°:: 10
    aμ κ°:::: 20
    ==================
    #include <stdio.h>

    int main(){
        int a = 10;
        // &a -> aμ μ£Όμκ° μ μ₯
        int *ptr;
        ptr = &a;

        int **ptr_ptr;
        ptr_ptr = &ptr;

        printf("a = %d\n", a);
        printf("&a = %d\n", &a);
        printf("ptr = %d\n", ptr);
        printf("&ptr = %d\n", &ptr);
        printf("ptr_ptr = %d\n", ptr_ptr);
        //*ptr_ptr > ptr_ptr μ΄ κ°λ¦¬ν€λ λ©λͺ¨λ¦¬ μ£Όμ
    }
```
