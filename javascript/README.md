#  📌 JavaScript
## html 코드 내부, 외부에서 작동
- 내부 : script 코드 /script
- 외부 : .js 파일 + html 문서와 연결 script src=".js" /script

---
## 변수
- 문자, 숫자, $, _ / 첫글자는 숫자 X 
- let : 재정의 가능, 변하는 값
- const : 재정의 불가능, 절대로 바뀌지 않는 상수, 대문자

```javascript
    const name = '재홍';
    const message = `My name is ${name}`
    --> My name is 재홍
```
---
## 자료형
```javascript
    const x = 1/0;
    x => Inf
    const x = '재홍';
    const y = x/2;
    y => NaN (Not a number)
    -----------------------
    let age;
    age = undefined
    -----------------------
    typeof 변수
    typeof null; -> object(객체)
    numm != 객체
``` 
---

## alert, prompt, confirm
- 알려줌, 입력받음, 확인

```javascript
    # prompt(질문, 디폴트) -> 문자형
    const name = prompt('이름을 입력하세요.');
    디폴트 값 -> const day = prompt('날짜를 입력하세요', '2020-12')
    alert('환영합니다, ' + name + "님");
    alert(`환영합니다. ${name} 님`);

    # confirm -> 취소, 확인
```
---

## 형변환
- 명시적 형변환 : String(문자형 변환), Number(숫자형), Boolean(불린형)
- 다른 자료형간의 연산을 가능하게 해줌.
- 자동 형변환 : "6" / "2" = 3
```javascript

```
---

## 비교, 논리 연산자, 조건문
- == : 숫자형, 문자형 비교 -> True , === : False
- || (OR), &&(AND), ! (not) : True-> False

---

## 반복
- while
```javascript
    let i = 0;
    while(i<10){
        console.log(i);
        i++;
    }
```
- do..while
```javascript
    let i =0
    do{
        //코드 실행
        i ++;
    }while(i<10)
```