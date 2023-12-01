#include "node.h"
//def not close to done, just kinda wanted to write some c this morning.
int main(int argc, char const *argv[])
{
    nNode someNode = malloc(sizeof(nNode) * 1);
    someNode.value = 7;
    nNode nextNode = malloc(sizeof(nNode) * 1);
    nextNode.value = 9;

    AddToBTree(someNode, nextNode);
    
    
    printAllConnectedNodes(someNode);
    return 0;
}
