exe: main.o comment_removal.o macro_handler.o file_inclusion.o other.o
	cc $^ -o exe
main.o:main.c
	cc -c $^
comment_removal.o:comment_removal.c
	cc -c $^
macro_handler.o:macro_handler.c
	cc -c $^
file_inclusion.o:file_inclusion.c
	cc -c $^
other.o:other.c
	cc -c $^
clear:
	@echo "cleaning up..."
	@ rm -r *.o
