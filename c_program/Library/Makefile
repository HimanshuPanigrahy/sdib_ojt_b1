app:app.c add.o sub.o pro.o div.o myarith.h
	gcc app.c add.o sub.o pro.o div.o -o app libmyarith.a

add.o:add.c
	gcc -c add.c
sub.o:sub.c
	gcc -c sub.c
pro.o:pro.c
	gcc -c pro.c
div.o:div.c
	gcc -c div.c

clean:
	rm *.o app