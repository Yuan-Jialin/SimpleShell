mybash:main.o
	g++ main.o -o yjl
main.o:main.cpp
	g++ -c main.cpp -o main.o
.PHONY:clean
clean:
	rm *.o
