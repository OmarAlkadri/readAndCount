hepsi: derle calistir
derle:
	g++ -I ./include/ -o ./lib/OkuVeSay.o -c ./src/OkuVeSay.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/OkuVeSay.o ./src/Test.cpp
calistir:
	./bin/Test