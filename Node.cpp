//
//  Node.cpp
//
//
//  Created by Kyle Jones on 10/9/15.
//
//

#include "Node.hpp"
using namespace std;
const int DV_packet =1;
const int Data_Packet =2;


Node::Node(int newNodeID){
    nodeID=newNodeID;
}//Node(int newNodeID);

void Node::recievePacket(Packet incomingPacket){
    cout<< "recievePacket\n";
    
    switch (getCase(incomingPacket.type)) {
        case DV_packet:
            // do DV things
            break;
        case Data_Packet:
            // do Data things
            cout << "data packet";
            break;
            
        default: printf("unknown packet type\n");
            break;
    }
}//void recievePacket();

int Node::getCase(string type){
    if(type == "DV_Packet")
        return 1;
    else if(type == "Data_Packet")
        return 2;
    else return 3;
}

// TODO include newCost
void Node::addNeighbor(int newNeighborID,int newCost,double newTime){
    cout<< "addNeighbor\n";
    cout<< "NeighborID: " << newNeighborID << endl;
    cout<< "cost: " << newCost << endl;
    cout<< "time: " << newTime << endl;
    
    // add to neighborList
    neighbor tempNeighbor;
    tempNeighbor.neighborID=newNeighborID;
    tempNeighbor.time=newTime;
    neighborList.push_back(tempNeighbor);
    
    // add to routingTable
    routingInfo tempTable;
    tempTable.destination=newNeighborID;
    tempTable.cost=newCost;
    tempTable.nextNode=newNeighborID;
    routingTable.push_back(tempTable);
    
}//void addToNeighborList(int newNeighborID,double newTime);


bool Node::updateRoutingTable(routingInfo newInfo){
    cout<< "updateRoutingTable\n";
    
    
    return true;
}//bool updateRoutingTable(routingInfo newInfo);

void Node::print(){
    std::cout<< "\nprint\n";
    int maxChar=0;
    // find max width for formatting
    
    printf("---------node %d----------\n",nodeID);
    //printf("-------------------------\n");
    
    
        printf("------neighbor,time------\n");
    for(int i=0;i<neighborList.size();i++){
        printf("%d,%.10g\n",neighborList[i].neighborID,neighborList[i].time);
    }// print neighborID,time
    
    //printf("-------------------------\n");
    printf("destination,cost,nextNode\n");
    for(int i=0;i<routingTable.size();i++){
        printf("%*d,%*d,%*d\n",4,routingTable[i].destination,3,routingTable[i].cost,4,routingTable[i].nextNode);
    }// print destination,cost,nextNode
    
}//void print();

//int main(){
//    Node tester(0);
//    tester.recievePacket();
//    tester.addToNeighborList(1,2);
//    tester.addToNeighborList(2,4);
//    tester.updateRoutingTable();
//    tester.print();
//    
//}