# 📌 JAVA 기술면접 대비

### <span style="color:green">객체지향프로그래밍</span>
- 프로그래밍에서 필요한 데이터를 추상화시켜 객체를 만들고<br>그 객체들간의 유기적 상호작용을 통해 로직을 구성하는 프로그래밍<br> ***사물같은 객체를 만들고 필요한 특징을 뽑아 프로그래밍 수행***
---
### <span style="color:green">객체지향 특징(추상화, 캡슐화, 다형성, 상속성)</span>
- 추상화:객체들의 공통 속성과 기능을 묶어 명명한 것
- 캡슐화:객체에 필요한 데이터나 기능으로 그룹화 시킨 것
- 다형성:하나의 객체에 여러가지 타입을 대입할 수 있는 것
    - ***오버로딩 : 매개 변수가 다른 메소드를 다시 선언***
    - ***오버라이딩 : 상위 클래스의 메소드를 재정의***
- 상속성: 상위 클래스의 기능을 하위 클래스가 사용> 재사용성
---
### <span style="color:green">클래스, 객체, 인스턴스</span>
- 클래스 : 객체를 만들기 위한 변수(필드)와 메소드의 집합
- 객체 : 설계도를 기반으로 선언된 대상, 클래스의 인스턴스
- 인스턴스 : 객체가 메모리에 할당되어 실제 프로그램에 활용되는 데이터
- 메소드 : 클래스 내부에 구현된 함수
---
### <span style="color:green">추상클래스, 인터페이스</span>
- 
### <span style="color:green">자바 애플리케이션 실행 과정</span>

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

### <span style="color:green">접근제어자 - 변수나 메소드의 사용 권한 설장</span>
- private : 해당 클래스에서만 접근 가능
- default : 해당 패지키 내에서만 접근 가능
- protected : 동일 패키지의 클래스 또는 해당 클래스를 상속받은 다른 패키지의 클래스에서 접근 가능
- public : 어떤 클래스에서라도 접근이 가능하다.
---
### <span style="color:green">제네릭 - 데이터 형식에 의존하지 않고, 하나의 값이 여러 데이터 타입을 가질 수 있도록 하는 방법</span><br>클래스 외부에서 타입 지정

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
### <span style="color:green">Springboot</span>
    - mybatis
        - JDBC 복잡성 해결하며 개발자가 작성한 SQL 명령어와 객체 매핑
        - SQL문을 xml 파일에 작성하여 변환이 자유롭고 가독성이 좋음
        - 특정 DB에 종속, 많은 설계와 로직이 필요함
    - JPA
        - 객체와 RDB를 별개로 설계하고 중간에서 매핑
        - SQL 직접 작성할 필요 없음 -> RDB에 종속되지 않음 - 직관적
        - 코드 재활용이나 DB 변경에 용이함 