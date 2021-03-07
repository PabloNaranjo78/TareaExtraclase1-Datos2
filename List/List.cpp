//
// Created by pablo on 3/3/21.
//

#include "List.h"
#include "../Node/Node.h"
#include <iostream>
using namespace std;

List::List() {
}

void List::printList() {
    Node* pointer = node;
    cout<<"\nElements: "<<counter<<endl;
    for (int i = counter;i>0;i--){
        cout<<pointer<<" ->> "<< "Data:"<<(*pointer).getData()<<" -> "<<endl;
        pointer = (*pointer).nextData;
    }
    cout<<"\n"<<endl;
}


void List::addData(int data) {
  counter+=1;
  if (node == NULL){
      node = new(collector) Node(data);
    }
  else{
        Node* temp = node;
        node = new(collector) Node(data);
        (*node).nextData = temp;
    }
}

void List::deleteLastData() {
    if (node!= NULL){
        counter-=1;
        Node* temp = (*node).nextData;
        node->collector= collector;
        delete node;
        node = temp;
    }
}

void List::printPointers() {
    collector->printCollectorPointers();
}

