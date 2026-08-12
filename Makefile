cc := gcc
all: copy cp delete del directory dir ls echo rename ren type cat clear cls date time mkdir md rmdir rd
copy: copy.c
	$(cc) copy.c -o copy
cp: copy
	./copy copy cp
delete: delete.c
	$(cc) delete.c -o delete
del: delete copy
	./copy delete del
directory: directory.c
	$(cc) directory.c -o directory
dir: directory copy
	./copy directory dir
ls: dir copy
	./copy dir ls
echo: echo.c
	$(cc) echo.c -o echo
rename: rename.c
	$(cc) rename.c -o rename
ren: rename copy
	./copy rename ren
type: type.c
	$(cc) type.c -o type
cat: type copy
	./copy type cat
clear: clear.c
	$(cc) clear.c -o clear
cls: clear copy
	./copy clear cls
date: date.c
	$(cc) date.c -o date
time: date copy
	./copy date time
mkdir: mkdir.c
	$(cc) mkdir.c -o mkdir
md: mkdir copy
	./copy mkdir md
rmdir: rmdir.c
	$(cc) rmdir.c -o rmdir
rd: rmdir copy
	./copy rmdir rd
clean:
	rm -f copy cp delete del directory dir ls echo rename ren type cat clear cls date time mkdir md rmdir rd
.PHONY: all clean
