# git [분산 버전관리 시스템]

- **깃 버전확인**

  `git --version`

- **위치 이동, 폴더 목록**

  `cd <path> ` , `cd..`, `ls 파일 목록보기`

- **폴더생성 , 삭제**

  `mkdir <폴더명>`

  `rm <삭제파일명>`  폴더를 지우고 싶으면 `rm -r <폴더명>`

- **텍스트 파일 생성**

  `touch <텍스트파일명>`

- **Commit 과정**

  ***git init (저장소 생성)>  untracked 상태 > git add > staging Area에 올리고 > git commit > committed 수정하면 다시 untracked > git add > staging Area > ...***

- **저장소 생성**

  `git init`

### git add - git commit - git log

- ***git init (저장소 생성)>  untracked 상태 > git add > staging Area에 올리고 > git commit > committed***
- ***수정하면 다시 untracked > git add > staging Area > ...***

## 명령어

- **저장소 생성 - git init**
- **커밋 히스토리  - git log**
- **깃 상태 - git status**  *현재 git으로 관리되고 있는 파일들의 상태를 알 수 있다.*
- **커밋 - git commit -m "Init fils"** *-m :메세지  "커밋메세지 "*
- **git remote add origin(으로) remote_repo**
- **git push -u origin(어디로) master(무엇을)** - *git hub 에 코드 업로드, local > remote*
- **git clone{remote_repo(깃주소)) - git repository에 있는 저장소를 local로 복사 **
- 빈 레포지터리 생성  - 클론 - 



