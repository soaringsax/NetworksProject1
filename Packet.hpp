//
//  Packet.hpp
//  
//
//  Created by Kyle Jones on 10/9/15.
//
//

#ifndef Packet_hpp
#define Packet_hpp

#include <stdio.h>
#include <iostream>

class Packet{
public:
    double time;
    std::string type;
    int destination;
    void *data;
  
    Packet(double newTime, std::string newType, int newDestination, void *newData);
    void print();
    
};

#endif /* Packet_hpp */
