## SQL 함수

- `NVL2("값", "지정값1","지정값2")`  *> null이 아닌 경우 지정1 출력, null 지정2 출력*

## SQL 

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

