//  Network.cpp
//
//  Created by Kyle Jones on 10/9/15.
//

#include "Node.hpp"
#include "Packet.hpp"
#include "Network.hpp"
using namespace std;


void Network::initialize(string fileName){
    
    string strNodeA,strNodeB,strCost,strTime;
    int nodeA_ID,nodeB_ID,nodeA_add,nodeB_add,tempCost;
    double tempTime;
    
    cout.precision(10);
    
    
    ifstream inputFile(fileName);
    
    if(inputFile.is_open()){
        printf("%s is open\n",fileName.c_str());
        //  For each line of file
        while (inputFile >> strNodeA){
            // find node IDs, cost, and time
            inputFile >> strNodeB;
            inputFile >> strCost;
            inputFile >> strTime;
            nodeA_ID = stoi(strNodeA);
            nodeB_ID = stoi(strNodeB);
            tempCost = stoi(strCost);
            tempTime = stold(strTime);
            //printf("Node A: %d, Node B: %d, Cost: %*d, Time:%.10g\n",nodeA_ID,nodeB_ID,3,tempCost,tempTime);
            //cout << tempTime << endl;
            
            //  locate/create node A, return address
            nodeA_add=locate(nodeA_ID);
            printf("A: %d\n",nodeA_add);
            if (nodeA_add == -1)
                nodeA_add=createNode(nodeA_ID);
            
            //  locate/create node B, return address
            nodeB_add=locate(nodeB_ID);
            printf("B: %d\n",nodeB_add);
            if (nodeB_add == -1)
                nodeB_add=createNode(nodeB_ID);
            
            //  add B to A's neighborList & routingTable
//            routers[nodeA_add].addNeighbor(nodeB_ID,tempCost,tempTime);
            
            //  add A to B's neighborList & routingTable
//            routers[nodeB_add].addNeighbor(nodeA_ID,tempCost,tempTime);
        }
        
    }
    else {
        printf("Unable to open %s",fileName.c_str());
    }
}// initialize(string);

int Network::locate(int desired){
    //std::cout<< "\nfind\n";
    
    // use binary_search
    //    if not found, then return -1
    return -1;
}

int Network::createNode(int newNodeID){
    //std::cout<< "\ncreate\n";
    Node newNode(newNodeID);
    vector<Node>::iterator loc;
    //loc = lower_bound(routers.begin(),routers.end(),newNode);
    //routers.insert(loc,newNode);
    //     insert node at location where it belongs using lower_bound
    //
    //     if empty, create first
    //
    //     if number is less than pointed to, insert
    //
    //     if pointing to end, push_back
    //    routers.emplace();
    //
    //     return address
    //cout << loc;
    return -1;
}// bool createNode(int)

void Network::simulate(){
    //std::cout<< "\nsim\n";
    // step through time
    
    //      for first item in list, pass to destination node
    events.first());
    //      if returned packet is not null, add to events
    
    
    
    
}

void Network::report(){
    std::cout<< "\nreport\n";
    
    // if there are any time events, print
    if(!events.empty()){
        cout << "Popping out remaining elements in events:";
        while (!events.empty())
        {
            (events.front()).print();
            events.pop_front();
        }
    }
    
    // print each node
    for (int i=0;i<routers.size();i++)
        routers[i].print();
}

int main(int argc, char *argv[]){
    
    if (argc != 2) {fprintf(stderr, "usage: %s executable\n", argv[0]); exit(-1);}
    
    Network system;
    system.initialize(argv[1]);
    system.simulate();
    system.report();
    
    
}