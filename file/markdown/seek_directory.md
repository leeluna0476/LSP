# Seek directory
디렉터리를 열고 내용을 읽으면 디렉터리 스트림에서 현재 내용을 읽고 있는 위치를 나타내는 오프셋 값이 이동한다. 이 오프셋의 현재 위치를 읽고 이동시키는 함수로 `telldir()`, `seekdir()`, `rewinddir()` 등이 있다.

```c
#include <sys/types.h>
#include <dirent.h>

long    telldir(DIR* dirp);
void    seekdir(DIR* dirp, long loc);
void    rewinddir(DIR* dirp);
```
