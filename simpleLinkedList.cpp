//
// Created by T10115885 on 10/23/2018.
//

#include <iostream>
using namespace std;

class IntNode {
public:
    IntNode(int dataInit = 0, IntNode* nextLoc = nullptr);
    void InsertAfter(IntNode* nodePtr);
    IntNode* GetNext();
    void PrintNodeData();
private:
    int dataVal;
    IntNode* nextNodePtr;
};

// Constructor
IntNode::IntNode(int dataInit, IntNode* nextLoc) {
    this->dataVal = dataInit;
    this->nextNodePtr = nextLoc;
}

/* Insert node after this node.
 * Before: this -- next
 * After:  this -- node -- next
 */
void IntNode::InsertAfter(IntNode* nodeLoc) {
    IntNode* tmpNext = nullptr;

    tmpNext = this->nextNodePtr;    // Remember next
    this->nextNodePtr = nodeLoc;    // this -- node -- ?
    nodeLoc->nextNodePtr = tmpNext; // this -- node -- next
}

// Print dataVal
void IntNode::PrintNodeData() {
    cout << this->dataVal << endl;
}

// Grab location pointed by nextNodePtr
IntNode* IntNode::GetNext() {
    return this->nextNodePtr;
}

int main() {
    IntNode* headObj  = nullptr; // Create intNode objects
    IntNode* nodeObj1 = nullptr;
    IntNode* nodeObj2 = nullptr;
    IntNode* nodeObj3 = nullptr;
    IntNode* currObj  = nullptr;

    // Front of nodes list
    headObj = new IntNode(-1);

    // Insert nodes
    nodeObj1 = new IntNode(555);
    headObj->InsertAfter(nodeObj1);

    nodeObj2 = new IntNode(999);
    nodeObj1->InsertAfter(nodeObj2);

    nodeObj3 = new IntNode(777);
    nodeObj1->InsertAfter(nodeObj3);

    // Print linked list
    currObj = headObj;
    while (currObj != nullptr) {
        currObj->PrintNodeData();
        currObj = currObj->GetNext();
    }

    return 0;
}