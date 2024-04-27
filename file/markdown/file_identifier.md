# File identifier
|Identifier|File type|
|---|---|
|-|일반 파일|
|d|디렉터리|
|b|블록 장치 특수 파일|
|c|문자 장치 특수 파일|
|l|심벌릭 링크|

***Example:***
```sh
$ ls -l /dev
total 1
crw-rw-rw-  1 root       wheel     0x1d000000 Apr 26 23:57 aes_0
crw-------  1 root       wheel     0x15000001 Apr 26 23:57 afsc_type5
brw-------  1 root       operator   0x2000000 Apr 26 23:58 apfs-raw-device.2.0
crw-------  1 root       wheel      0xb000000 Apr 26 23:57 auditpipe
...
dr-xr-xr-x  1 root       wheel              0 Apr 26 23:57 fd
crw-r--r--  1 root       wheel      0xe000000 Apr 26 23:57 fsevents
crw-------  1 root       wheel      0x6000000 Apr 26 23:57 klog
crw-rw-rw-  1 root       wheel              0 Apr 26 23:57 lockstat
dr-xr-xr-x  2 root       wheel             14 Apr 26 23:57 monotonic
...
brw-r-----  1 root       operator   0x1000001 Apr 26 23:57 disk0s1
brw-r-----  1 root       operator   0x1000003 Apr 26 23:57 disk0s2
brw-r-----  1 root       operator   0x1000002 Apr 26 23:57 disk0s3
brw-r-----  1 root       operator   0x1000004 Apr 26 23:57 disk1
brw-r-----  1 root       operator   0x1000007 Apr 26 23:57 disk1s1
```
