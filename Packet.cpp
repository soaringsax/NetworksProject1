//
//  Packet.cpp
//  
//
//  Created by Kyle Jones on 10/9/15.
//
//

#include "Packet.hpp"
using namespace std;


Packet::Packet(double newTime, string newType, int newDestination, void *newData){
    time=newTime;
    type=newType;
    destination=newDestination;
    data=newData;
    
}// Packet(double newTime, string newType, int newDestination);

void Packet::print(){
    cout<<"\ntime:" << time;
    cout<<"\ntype:" << type;
    cout<<"\ndest:" << destination;
    cout<<"\n";
    
}// print()

//int main(){
//    
//    Packet tester(0,"test",1,(void*)"bzzzz");
//    tester.print();
//    
//}