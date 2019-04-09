// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;
class Node {
 public:
  int data;
  Node *left, *right;
  Node(int d) {
    data = d;
    left = right = NULL;
  }
};
class Solution {
 public:
  Node* insert(Node* root, int data) {
    if (root == NULL) {
      return new Node(data);
    } else {
      Node* cur;
      if (data <= root->data) {
        cur = insert(root->left, data);
        root->left = cur;
      } else {
        cur = insert(root->right, data);
        root->right = cur;
      }
      return root;
    }
  }

  void levelOrder(Node* root) {
    queue<Node*> cola;
    if (root) {
      cola.push(root);
      while (!cola.empty()) {
        Node* p = cola.front();
        printf("%i ", p->data);
        cola.pop();
        if (p->left)
          cola.push(p->left);
        if (p->right)
          cola.push(p->right);
      }
    }
  }
};  // End of Solution
int main() {
  Solution myTree;
  Node* root = NULL;
  int T, data;
  cin >> T;
  while (T-- > 0) {
    cin >> data;
    root = myTree.insert(root, data);
  }
  myTree.levelOrder(root);
  return 0;
}