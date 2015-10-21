CC = g++

default: verbose

verbose: network.o node.o packet.o
	$(CC) -o verbose network.o node.o packet.o

network.o: Network.cpp Node.hpp Packet.hpp
	$(CC) -c Network.cpp

node.o: Node.cpp Packet.hpp
	$(CC) -c Node.cpp

packet.o: Packet.cpp
	$(CC) -c Packet.cpp

clean:
	rm verbose network.o node.o packet.o
