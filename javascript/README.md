#  📌 JavaScript
## html 코드 내부, 외부에서 작동
- 내부 : script 코드 /script
- 외부 : .js 파일 + html 문서와 연결 script src=".js" /script

---
## 변수
- 변수의 생성과정 : 선언 - 초기화 - 할당
 - var : 선언 & 초기화 동시, 함수 스포크
 - let : 따로, 블록 스코프
 - const : 선언&초기화&할당 동시, 블록 스코프(블록안에서만 사용 가능)
```javascript
    if(true){
        var a = '12345';
    }
    a -> 12345
    if (true){
        let a = '123';
        const a = 10;
    }
    let, const => undefined
```
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

## 반복문
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
- switch
```javascript
    switch(평가){
        case A :
            // 코드
        case B :
            // 코드
    }
```

---

## 함수
- 화살표 함수는 자신만의 ***this***를 가지지 않음, 
- 내부에서 ***this***를 사용하면, 외부(전역 객체, global)에서 값을 가져 옴
```javascript
    function sayHello(name){
        console.log(`hello, ${name}`);
    }
    sayHello('Mike')
    # 전역 변수와 지역 변수
    let name = 'Mike';

    function sayHello(name){
        console.log(name);
        # 매개 변수로 받은 값은 복사 된 후 함수의 지역 변수가 된다.
    }
    sayHello();  --> undefined
    sayHello('jane'); --> jane
    -------------------------------------------------
    function say(name ='friend'){
        // 디폴트 값
    }
    ==
    function say(name){
        let msg = name || 'friend'; // 디폴트 값
    }
```
---

## 객체
- 접근: 객체.name, 객체['name']
- 추가: 객체.name = , 객체['name'] = 
- 삭제 delete 프로퍼티 / delete 객체.name;
```javascript
    # 단축 프로퍼티
    const name = 'clark';
    const age = 33
    const student ={
        name,
        age,
        gender: 'male'
    }
    # 존저하지 않는 프로퍼티 접근 -> undefined
    'birthDay' in student -> false
    'age' in student -> true
    -------------------------------------------
    # for.. in 반복문
    ## for x in 객체 ==> X - name, age , ...
    for(let key in student){
        console.log(key);
        console.log(student[key])
    }

    # 객체를 활용하여 20세 이상 접근
    function isAdult(name){
        if (name.age >= 20){
            return true
        }
        return false
    }
    const Mike ={
        age: 30,
        name: 'Mike'
    }
```
---
# 메소드
- 메소드의 ***this***는 해당 객체를 가르킴
- 객체 메소드 작성시 화살표 함수 지양
```javascript
let boy = {
    name : 'Mike',
    showName:function(){
        console.log(boy.name)
    }
};

let man = boy;
```

---
# 배열
- let stu = ['a','b','c',...,'z']
```javascript
# 배열 메소드
# push() 
let day = ['월','화'];
day.push('수')
# pop() 
# shift, unshift 배열 앞에 제거/ 추가
let day = ['월','화'];
day.unshift('일','수')
day = [일,수,월,화]
day.shift();
day = [수,월,화]

# for..of
let days = [수,월,화]
for(let day of days){
    console.log(day) -> 수, 월, 화
}
```
- stu.length / stu.push

---

# 생성자 함수
- 와플 틀, 와플 - > 첫 글자 대문자 관례 
```javascript
    function User(name, age){
        // this = {}
        this.name = name;
        this.age = age;
        // return this;
    }
    let user1 = new User('mike', 30);
```