program: program.o mylib.o
        g++ -o program program.o mylib.o

program.o: program.cpp mylib.hpp
        g++ -c program.cpp

mylib.o: mylib.cpp mylib.hpp
        g++ -c hylib.cpp