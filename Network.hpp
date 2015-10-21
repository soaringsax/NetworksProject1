//
//  Network.hpp
//
//
//  Created by Kyle Jones on 10/9/15.
//
//

#ifndef Network_hpp
#define Network_hpp

#include "Node.hpp"
#include "Packet.hpp"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <algorithm>




class Network{
public:
    int time;
    std::list<Packet> events;
    std::vector<Node> routers;
    
    void initialize(std::string fileName);
    int locate(int);
    int createNode(int);
    void simulate();
    void report();
};



#endif /* Network_hpp */
