# Read directory

```c
#include <sys/types.h>
#include <dirent.h>

DIR*    opendir(const char* name);
int     closedir(DIR* dirp);
```

`opendir()` 함수는 인자로 지정된 디렉터리를 열고 해당 디렉터리에 대한 디렉터리 스트림을 생성, 이 스트림의 포인터를 리턴한다. 실패하면 `NULL`을 리턴한다.

`DIR` 객체에는 열린 디렉터리의 정보가 있으며 `dirent.h` 파일에 정의되어 있다.

`closedir()` 함수는 인자로 지정된 디렉터리를 닫는다. 성공하면 0, 실패하면 -1을 리턴한다.

> DIR 객체의 세부 내용은 시스템 내부적으로 관리하고 사용자에게는 알려주지 않는다.

---

```c
#include <dirent.h>

// declared in sys/dirent.h
struct dirent
{
    ino_t             d_ino;        // inode 번호
    off_t             d_off;        // 디렉터리 오프셋의 위치
    unsigned short    d_reclen;     // 해당 항목의 레코드 길이
    unsigned char     d_type;       // 파일의 종류
    char              d_name[256];  // 항목의 이름
};

struct dirent*    readdir(DIR* dirp);
```

`readdir()` 함수는 인자로 지정한 `DIR` 객체가 가리키는 디렉터리의 내용을 한 번에 하나씩 읽는다. 더 이상 읽을 것이 없으면 `NULL`을 리턴한다.

`readdir()` 함수는 디렉터리의 있는 항목의 정보를 가리키는 `dirent` 구조체의 포인터를 리턴한다. `dirent` 구조체는 `sys/dirent.h` 파일에 정의되어 있다.
