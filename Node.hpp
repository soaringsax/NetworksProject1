//  Node.hpp
//
//  Created by Kyle Jones on 10/9/15.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <vector>
#include <queue>
#include <iostream>
#include "Packet.hpp"

class Node{
public:
    int nodeID;
    
    struct neighbor{
        int neighborID;
        double time;
    };
    
    std::vector<neighbor> neighborList;
    
    struct routingInfo{
        int destination;
        int cost;
        int nextNode;
    };
    
    std::vector<routingInfo> routingTable;
    
    
    Node(int newNodeID);
    
    void recievePacket(Packet incomingPacket);
    int getCase(std::string type);
    void addNeighbor(int newNeighborID,int newCost,double newTime);
    bool updateRoutingTable(routingInfo newInfo);
    void print();

};

#endif /* Node_hpp */
