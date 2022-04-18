# 📌 JAVA 기술면접 대비

### 자바 애플리케이션 실행 과정

- Java언어로 프로그래밍된 파일을 java컴파일러가 java바이트 코드로 번역한다.<br>이후 java바이트 코드를 JVM이 읽고 실행하게 된다.
    1. 컴파일러 > Java Source파일을 JVM이 해석할 수 있는 자바 바이트 코드로 변경
    2. 클래스 로더 > JVM내로 class파일 로드
    3. Execution Engine > 바이트코드 해석 > 바이너리 코드로 변경
    4. Runtime Data Area > JVM 수행을 위해 할당받는 java 메모리 영역
        - Method Area : 클래스, 변수, 메소드, static변수, 상수 저장
        - Heap Area : new 명령어로 생성된 인스턴스와 객체 저장,Garbage Collection 실행
        - Stack Area : 매개변수, 지역변수, 리턴 값 등이 저장
        - PC Register : 현재 수행 중인 JVM명령의 주소 값 저장
        - Native Method Stack : 다른 언어등의 메서드 호출을 위해 할당 구역 언어에 맞게 Stack 형성
- JVM ?
    - OS마다 따로 코드를 작성하는 번거로움 없이 Java가 플랫폼에 독립적일 수 있게 만들어준다.
- 가비지 컬렉션 GC > JVM에서 메모리 관리해주는 모듈
    - 프로세스가 꽉 차면 멈추고 참조되지 않는 객체를 메모리에서 지움
    - Mark and Sweep > 개발 속도 향상, 찾는 과정에서 스레드 중단-> 성능저하
    - 스레드? 프로세스 내에서 실제로 작업을 수행하는 주체<br> 클래스 상속 혹은 Runnable 인터페이스 구현으로 생성 된다.
---

### 접근제어자 - 변수나 메소드의 사용 권한 설장
- private : 해당 클래스에서만 접근 가능
- default : 해당 패지키 내에서만 접근 가능
- protected : 동일 패키지의 클래스 또는 해당 클래스를 상속받은 다른 패키지의 클래스에서 접근 가능
- public : 어떤 클래스에서라도 접근이 가능하다.
---
### 제네릭 - 데이터 형식에 의존하지 않고, <br>하나의 값이 여러 데이터 타입을 가질 수 있도록 하는 방법<br>클래스 외부에서 타입 지정
- 
```java
//제네릭 x
ArrayList list = new ArrayList();
list.add("test");
String temp = (String) list.get(0) // 타입변환 필요
//제네릭 o
ArrayList<String> list2 = new ArrayList();
list.add("test")
temp = list2.get(0) // 타입변환 필요 없음

==============================================
class ExClassGeneric <T>{
        private T t;
        public void setT(T t){
            this.t = t;
        }

        public T getT(){
            return t;
        }
}
ExClassGeneric<String> ex = new ExClassGeneric<>(); 

```