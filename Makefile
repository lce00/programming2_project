all: file_main.c file_createnode.c file_insert.c file_search.c file_delete.c file_display.c file_writefile.c
	gcc -c file_main.c
	gcc -c file_createnode.c
	gcc -c file_insert.c
	gcc -c file_search.c
	gcc -c file_delete.c
	gcc -c file_display.c
	gcc -c file_writefile.c
	gcc -o file *.o

clean:
	rm *.o file