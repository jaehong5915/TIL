#  π JavaScript
## html μ½λ λ΄λΆ, μΈλΆμμ μλ
- λ΄λΆ : script μ½λ /script
- μΈλΆ : .js νμΌ + html λ¬Έμμ μ°κ²° script src=".js" /script

---
## λ³μ
- λ³μμ μμ±κ³Όμ  : μ μΈ - μ΄κΈ°ν - ν λΉ
 - var : μ μΈ & μ΄κΈ°ν λμ, ν¨μ μ€ν¬ν¬
 - let : λ°λ‘, λΈλ‘ μ€μ½ν
 - const : μ μΈ&μ΄κΈ°ν&ν λΉ λμ, λΈλ‘ μ€μ½ν(λΈλ‘μμμλ§ μ¬μ© κ°λ₯)
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
- λ¬Έμ, μ«μ, $, _ / μ²«κΈμλ μ«μ X 
- let : μ¬μ μ κ°λ₯, λ³νλ κ°
- const : μ¬μ μ λΆκ°λ₯, μ λλ‘ λ°λμ§ μλ μμ, λλ¬Έμ

```javascript
    const name = 'μ¬ν';
    const message = `My name is ${name}`
    --> My name is μ¬ν
```
---
## μλ£ν
```javascript
    const x = 1/0;
    x => Inf
    const x = 'μ¬ν';
    const y = x/2;
    y => NaN (Not a number)
    -----------------------
    let age;
    age = undefined
    -----------------------
    typeof λ³μ
    typeof null; -> object(κ°μ²΄)
    numm != κ°μ²΄
``` 
---

## alert, prompt, confirm
- μλ €μ€, μλ ₯λ°μ, νμΈ

```javascript
    # prompt(μ§λ¬Έ, λν΄νΈ) -> λ¬Έμν
    const name = prompt('μ΄λ¦μ μλ ₯νμΈμ.');
    λν΄νΈ κ° -> const day = prompt('λ μ§λ₯Ό μλ ₯νμΈμ', '2020-12')
    alert('νμν©λλ€, ' + name + "λ");
    alert(`νμν©λλ€. ${name} λ`);

    # confirm -> μ·¨μ, νμΈ
```
---

## νλ³ν
- λͺμμ  νλ³ν : String(λ¬Έμν λ³ν), Number(μ«μν), Boolean(λΆλ¦°ν)
- λ€λ₯Έ μλ£νκ°μ μ°μ°μ κ°λ₯νκ² ν΄μ€.
- μλ νλ³ν : "6" / "2" = 3
```javascript

```
---

## λΉκ΅, λΌλ¦¬ μ°μ°μ, μ‘°κ±΄λ¬Έ
- == : μ«μν, λ¬Έμν λΉκ΅ -> True , === : False
- || (OR), &&(AND), ! (not) : True-> False

---

## λ°λ³΅λ¬Έ
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
        //μ½λ μ€ν
        i ++;
    }while(i<10)
```
- switch
```javascript
    switch(νκ°){
        case A :
            // μ½λ
        case B :
            // μ½λ
    }
```

---

## ν¨μ
- νμ΄ν ν¨μλ μμ λ§μ ***this***λ₯Ό κ°μ§μ§ μμ, 
- λ΄λΆμμ ***this***λ₯Ό μ¬μ©νλ©΄, μΈλΆ(μ μ­ κ°μ²΄, global)μμ κ°μ κ°μ Έ μ΄
```javascript
    function sayHello(name){
        console.log(`hello, ${name}`);
    }
    sayHello('Mike')
    # μ μ­ λ³μμ μ§μ­ λ³μ
    let name = 'Mike';

    function sayHello(name){
        console.log(name);
        # λ§€κ° λ³μλ‘ λ°μ κ°μ λ³΅μ¬ λ ν ν¨μμ μ§μ­ λ³μκ° λλ€.
    }
    sayHello();  --> undefined
    sayHello('jane'); --> jane
    -------------------------------------------------
    function say(name ='friend'){
        // λν΄νΈ κ°
    }
    ==
    function say(name){
        let msg = name || 'friend'; // λν΄νΈ κ°
    }
```
---

## κ°μ²΄
- μ κ·Ό: κ°μ²΄.name, κ°μ²΄['name']
- μΆκ°: κ°μ²΄.name = , κ°μ²΄['name'] = 
- μ­μ  delete νλ‘νΌν° / delete κ°μ²΄.name;
```javascript
    # λ¨μΆ νλ‘νΌν°
    const name = 'clark';
    const age = 33
    const student ={
        name,
        age,
        gender: 'male'
    }
    # μ‘΄μ νμ§ μλ νλ‘νΌν° μ κ·Ό -> undefined
    'birthDay' in student -> false
    'age' in student -> true
    -------------------------------------------
    # for.. in λ°λ³΅λ¬Έ
    ## for x in κ°μ²΄ ==> X - name, age , ...
    for(let key in student){
        console.log(key);
        console.log(student[key])
    }

    # κ°μ²΄λ₯Ό νμ©νμ¬ 20μΈ μ΄μ μ κ·Ό
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
# λ©μλ
- λ©μλμ ***this***λ ν΄λΉ κ°μ²΄λ₯Ό κ°λ₯΄ν΄
- κ°μ²΄ λ©μλ μμ±μ νμ΄ν ν¨μ μ§μ
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
# λ°°μ΄
- let stu = ['a','b','c',...,'z']
```javascript
# λ°°μ΄ λ©μλ
# push() 
let day = ['μ','ν'];
day.push('μ')
# pop() 
# shift, unshift λ°°μ΄ μμ μ κ±°/ μΆκ°
let day = ['μ','ν'];
day.unshift('μΌ','μ')
day = [μΌ,μ,μ,ν]
day.shift();
day = [μ,μ,ν]

# for..of
let days = [μ,μ,ν]
for(let day of days){
    console.log(day) -> μ, μ, ν
}
```
- stu.length / stu.push

---

# μμ±μ ν¨μ
- μν ν, μν - > μ²« κΈμ λλ¬Έμ κ΄λ‘ 
```javascript
    function User(name, age){
        // this = {}
        this.name = name;
        this.age = age;
        // return this;
    }
    let user1 = new User('mike', 30);
```