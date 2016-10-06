# NetworksProject1
Project 1 for Computer Networks

My code can be compiled through the use of the included c++ makefile, with the command ‘make’. I have included the ability to ‘make clean’ in the event any issues occur which require deleting all temporary object files. Through the use of the makefile, the executable file will be ‘DV_Simulation’. To run this program, the topology file and the time limit are to be passed to the executable as command line arguments separated with a space, like so:

./DV_Simulation topology1.txt 15

The events of a data packet and a connection loss are inserted into the simulation via function calls in the main function, found at the bottom of the Network.cpp file. The listed events in the project handout can be simulated by uncommenting the respective command and recompiling the code with the command ‘make’. Comments in the source code further the use of each function.
