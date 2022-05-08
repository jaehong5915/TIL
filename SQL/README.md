## SQL 함수

- `NVL2("값", "지정값1","지정값2")`  *> null이 아닌 경우 지정1 출력, null 지정2 출력*

## SQL 
- SQL 튜닝?
  - OR 보다 AND 사용, 그룹핑 쿼리에 WHERE절 필터링을 사용하는 등<br>SQL문을 최적화하여 데이터 산출의 효율 증대
-  `칼럼명 || ' A' as 수정 칼럼`  *> 기존 데이터에 A 단어 추가 후 수정 칼럼으로 출력*

- `Merge`  *> 새로운 행 입력, 기존 행 수정하는 작업을 한번에 할 수 있음*

  `MERGE : 입력/수정 돼야 할 테이블 `  `INTO : 갱신될 테이블`

  `USING : 입력/수정에 사용할 (비교)소스 테이블` `ON : 타겟, 소스테이블 조인 조건식 기술` 

  `WHEN MATCHED THEN 구문 수행` `WHEN NOT MATCHED THEN 아래 INSERT문 수행`

- `EXISTS ~ SELECT 1`   *WHERE 절 데이터가 있으면 ~*

- `COMMIT : 올바르게 반영된 데이터를 DB에 반영시키는 것`

- `ROLLBACK : 트랜잭션 시작 이전의 상태로 되돌리는 것`

- `SAVEPOINT : 트랜잭션의 일부만 취소할 수 있게 만드는 명령`

- 

## DML (DATA MANIPULATION LANGUAGE)

##### INSERT

- 한 번에 한 건만 입력 `INSERT INTO 테이블명 (칼럼1, 칼럼2, ...) VALUES (값1, 값2,...)`

- 칼럼명 생략 가능 

- INSERT문내의 서브쿼리 작성 가능 

  `INSERT INTO 테이블명 (칼럼1, 칼럼2, ..) VALUES [(SELECT 칼럼 FROM 테이블),칼럼]`

  

##### update

- `update 테이블명 set 수정 칼럼1  = 수정될 새로운 값 ,... WHERE 수정 대상 조건`

- update where 절에 서브쿼리 사용하기

  *** UPDATE 테이블 SET 칼럼 = (SELECT 칼럼 FROM 테이블 WHERE 조건) ...***

  ***WHERE 조건 (SELECT 칼럼 FROM 테이블 WHERE 조건)***

##### DELETE

- `DELETE [FROM] 테이블명 WHERE 조건`

  

## DDL 

- **`CREATE TABLE`** `칼럼명1 DATATYPE [DEFAULT] [NOT NULL]`

  ` 컬럼에 대한 제약조건이 있으면 CONSTRAINT 이용하여 추가`

  `제약 조건 확인 > SELECT*FROM all_constraints `

  **`제약 조건 삭제 > ALTER TABLE 테이블 DROP CONSTRAINT 제약조건 명`**

  `제약 조건 추가 > ALTER TABLE 테이블 ADD CONSTRAINT 제약조건 명 `

  *UNIQUE KEY > 고유키 테이블에 저장된 행 데이터 고유 식별*

  *CHECK > 입력 값 범위 제한*   *FOREIGN KEY 테이블 간의 관계 정의*  

  ----

- **`ALTER TABLE`**  테이블명 **`ADD`** (추가 칼럼1 데이터 유형 기본값 NOT NULL )

  **`ALTER TABLE`** 테이블명 **`DROP`** COLUMN 칼럼명

  **`ALTER TABLE` **테이블명 **`MODIFY`** (컬럼명, 데이터유형 [기본값] [NOT NULL]..)

  --ex ) ALTER TABLE TEAM MODIFY (orig_yyyy varchar(8));	

  **`ALTER TABLE`** 테이블명 **`RENAME COLUMN`** 기존 칼럼명 TO 바꿀 칼럼명;

  ----

- **`DROP TABLE`** 테이블명

- **`TRUNCATE TABLE`** 테이블 자체가 삭제되는 것이 아니고, 해당 테이블 모든 행이 제거되고

  저장 공간 재사용을 가능하게 함



## DCL

- 유저를 생성하고 권한을 제어할 수 있는 명령어
- **`CREATE USER ID IDENTIFIED BY PASSWORD`** >유저 생성

>**GRANT**
>
>`DBA TO ` , `CREATE USER TO` ,





## Self Join

- `동일 테이블`사이의 조인 , 식별을 위해 별칭 사용
- **`SELECT ALIAS1.칼럼명, ALIAS2.칼럼명.. `**
- **`FROM 테이블1 ALIAS1, 테이블2 ALIAS WHERE 조건`**



## 계층형 질의

- **`계층형 질의 START WITH : 어디서부터 계층형 질의 시작할 것인지..`**

- **`CONNECT BY  : 다음에 전개될 자식 데이터 저장, 조건 만족`**

- **`PRIOR : CONNECT 절에 사용, 현재 읽은 칼럼 저장 / `**
- **`부모 - PR(자식) > 부모~자식 순방향 / PR(부모) - 자식 > 역방향`**
- **`CYCLE : 데이터 전개시 이미 나타났던 동일 데이터 다시 나타나는 경우`**

- **`NOCYCLE : 사이클이 발생한 이후의 데이터는 전개하지 않는다.`**



## PIVOT 절

- **`행을 열로 전환, AGGREGATE_FUNCTION 집계 열 지정`**
- **`FOR 절은 PIVOT할 열을 지정, IN 절은 PIVOT할 열 값을 지정`**

- SELECT * FROM (SELECT JOB, SAL FROM EMP)

  `PIVOT` (SUM (SAL) `FOR` DEPTNO `IN` (10, 20, 30))

  ORDER BY 1;

- ***인라인 뷰에 YYYY 표현식 추가***

- > SELECT *
  >   FROM  (SELECT TO_CHAR(HIREDATE, 'YYYY') AS YYYY, JOB, DEPTNO, SAL
  >          FROM EMP)
  >   PIVOT  (SUM(SAL) FOR DEPTNO IN (10, 20, 30))
  > ORDER BY 1, 2;

  

## UNPIVOT 절

- PIVOT절과 반대로 `열이 행으로 전환`된다.

- **`INCLUDE NULLS`** > UNPIVOT INCLUDE NULLS ~ 열의 값이 NULL인 행도 결과에 포함.

-  **`FOR 절에 다수의 열, IN절에 다수의 별칭 지정할 수 있다.`**

  > SELECT   *
  >   FROM T1
  >  UNPIVOT ((SAL,CNT) 
  >         `FOR DEPTNO` `IN `((D10_SAL, D10_CNT) AS 10 , (D20_SAL, D20_CNT) AS 20))
  > ORDER BY 1, 2;

