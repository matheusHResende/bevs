obj = ./obj/Vertex.o ./obj/Graph.o ./obj/bevs.o
cppflags = -Wall -Wconversion

BEVSoft: $(obj)
	g++ $(cppflags) $(obj) -o BEVSoft.o

./obj/bevs.o: bevs.cpp
	g++ -c $(cppflags) bevs.cpp -o ./obj/bevs.o

./obj/Vertex.o: ./src/Vertex.cpp
	g++ -c $(cppflags) ./src/Vertex.cpp -o ./obj/Vertex.o

./obj/Graph.o: ./src/Graph.cpp
	g++ -c $(cppflags) ./src/Graph.cpp -o ./obj/Graph.o

clean:
	rm ./obj/*.o
	rm BEVSoft.o