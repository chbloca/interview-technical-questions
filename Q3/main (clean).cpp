/*
 * A tree is an abstract data structure consisting of nodes.
 * Each node has only one parent node and zero or more child
 * nodes. Each tree has one special node, called a root, which
 * has no parent node. A node is called a leaf if it has no
 * child nodes. The height of a tree is the largest distance
 * (number of parent-child connections) from the root to a leaf.
 *
 * Write a function that calculates the height of a given tree.
 * For example, the tree below has a height of 2 since the longest
 * distance (number of parent-child connections) from the root to
 * a leaf is 2 (connections are the root to a node and then the
 * node to leaf1)
 */

#include <iostream>

class Node{
public:
    Node(Node* leftChild, Node* rightChild){
        this->leftChild = leftChild;
        this->rightChild = rightChild;
    }

    Node* getLeftChild() const{
        return this->leftChild;
    }

    Node* getRightChild() const{
        return this->rightChild;
    }

    int height(){
        throw std::logic_error("Waiting to be implemented");
    }
private:
    Node* leftChild;
    Node* rightChild;
};


int main()
{
    Node* leaf1 = new Node(NULL, NULL);
    Node* leaf2 = new Node(NULL, NULL);
    Node* node = new Node(leaf1, NULL);
    Node* root = new Node(node, leaf2);

    std::cout << root->height() << std::endl;
    return 0;
}
