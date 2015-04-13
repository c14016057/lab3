qa:qa.o
	g++ -o qa qa.o
qa.o:qa.cpp
	g++ -c qa.cpp
clean:
	rm *.o
	rm qa
