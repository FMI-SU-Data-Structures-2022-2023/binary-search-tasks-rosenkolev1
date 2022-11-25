#include "solution.h"

bool isContains(Node* node, int key) {
    if (!node) {
        return false;
    }
    if (node->key == key)
        return true;

    if (key < node->key)
        return isContains(node->left, key);

    return isContains(node->right, key);
}

Node* insert(Node* node, int value) {

    if(node == nullptr)
        return new Node(value);

    if(node->key > value) {
        node->left = insert(node->left, value);
    }
    else {
        node->right = insert(node->right, value);
    }

    return node;
}

Node* getMax(Node* node) {

    if(!node)
        return nullptr;

    if(!node->right)
        return node;

    return getMax(node->right);
}

Node* getMin(Node* node) {
    if(!node)
        return nullptr;

    if(!node->left)
        return node;

    return getMin(node->left);
}

Node* remove(Node* node, int key) {
    return node;
}

Node* section(const Node* l, const Node* r) {
    return nullptr;
}

bool areCousins(const Node*, int key1, int key2) {
    return false;
}

int LCA(const Node*, int key1, int key2) {
    return -1;
}