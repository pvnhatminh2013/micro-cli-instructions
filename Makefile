cc := gcc
copy: copy.c
	$(cc) copy.c -o copy
cp: copy.c
	$(cc) copy.c -o cp
delete: delete.c
	$(cc) delete.c -o delete
del: delete.c
	./copy delete del
directory: directory.c
	$(cc) directory.c -o directory
dir: directory.c
	./copy directory dir
ls: directory.c
	./copy dir ls
echo: echo.c
	$(cc) echo.c -o echo
rename: rename.c
	$(cc) rename.c -o rename
ren: rename.c
	./copy rename ren
type: type.c
	$(cc) type.c -o type
cat: type.c
	./copy type cat
clear: clear.c
	$(cc) clear.c -o clear
cls: clear.c
	./copy clear cls
