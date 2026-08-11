cc := gcc
copy: copy.c
	$(cc) copy.c -o copy
cp: copy.c
  $(cc) copy.c -o cp
delete: delete.c
	$(cc) delete.c -o delete
del: delete.c
  $(cc) delete.c -o del
directory: directory.c
  $(cc) directory.c -o directory
dir: directory.c
  $(cc) directory.c -o dir
ls: directory.c
  $(cc) directory.c -o ls
echo: echo.c
  $(cc) echo.c -o echo
