#include <cstdlib>
#include <iostream>
using namespace std;

class Node {
   public:
    int key;
    Node* left;
    Node* right;
    Node(int d) {
        key = d;
        left = NULL;
        right = NULL;
    }
};

class Tree {
   public:
    Node* Root = NULL;
    Node* insert(Node* root, int key) {
        if (root == NULL) {
            return new Node(key);
        } else {
            Node* cur;
            if (key <= root->key) {
                cur = insert(root->left, key);
                root->left = cur;
            } else {
                cur = insert(root->right, key);
                root->right = cur;
            }
            return root;
        }
    }
    void preOrder(Node* root) {
        if (root == NULL) return;
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
    void inOrder(Node* root) {
        if (root == NULL) return;
        inOrder(root->left);
        cout << root->key << " ";
        inOrder(root->right);
    }
    void postOrder(Node* root) {
        if (root == NULL) return;
        postOrder(root->left);
        postOrder(root->right);
        cout << root->key << " ";
    }
    Node* search(Node* root, int key) {
        if (root == NULL) return NULL;
        if (root->key == key) return root;
        if (root->key > key) return search(root->left, key);
        return search(root->right, key);
    }
    Node* del(Node* root, int key) {
        if (root == NULL) return root;
        if (key < root->key)
            root->left = del(root->left, key);
        else if (key > root->key)
            root->right = del(root->right, key);
        else {
            if (root->left == NULL) {
                Node* temp = root->right;
                free(root);
                return temp;
            } else if (root->right == NULL) {
                Node* temp = root->left;
                free(root);
                return temp;
            }
            Node* temp = root->right;
            while (temp->left != NULL)
                temp = temp->left;
            root->key = temp->key;
            root->right = del(root->right, temp->key);
        }
        return root;
    }
};

Node* search(Tree t, int x) {
    return t.search(t.Root, x);
}

void printTree(Tree t) {
    cout << "\nPreorder ";
    t.preOrder(t.Root);
    cout << "\nInorder ";
    t.inOrder(t.Root);
    cout << "\nPostorder ";
    t.postOrder(t.Root);
    cout << endl;
}

void insert(Tree& t, int x) {
    t.Root = t.insert(t.Root, x);
}

void del(Tree& t, int x) {
    t.Root = t.del(t.Root, x);
}

int main() {
    Tree tree;
    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        insert(tree, tmp);
    }
    printTree(tree);
    cout << "\nDelete Node ";
    cin >> tmp;
    del(tree, tmp);
    printTree(tree);
}
