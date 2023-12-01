#include <cstddef>
#include <cstdio>
typedef struct {
    nNode **edges;
    int value;
} nNode;

void addToBTree(nNode root, nNode node){
    //for this btree, the first nNode in edges
    //is left, and the second is right
    // that is, 0=left 1=right

    if(node.value < root.value){
        if(root.edges[0] == NULL){
            root.edges[0] = &node;
        } else{
            addToBTree( *root.edges[0], node);
        }
    }
    if(node.value >= root.value){
        if(root.edges[1] == NULL){
            root.edges[1] = &node;
        } else{
            addToBTree( *root.edges[1], node);
        }
    }
};

void printAllConnectedNodes(nNode root){
    printf("%i", root.value);
    size_t len= sizeof(root.edges) / sizeof(nNode);
    for(int i=0; i<len;i++){
       printAllConnectedNodes(*root.edges[i]);
    }
}