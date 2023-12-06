////
//// Created by Святослав on 04.12.2023.
////
//#include <iostream>
//
//using namespace std;
//
//struct node {
//  node *left, *right;
//  int x;
//
//  node(int x): x(x), left(nullptr), right(nullptr){};
//};
//
//struct bst{
//  node* root = nullptr;
//
//  void insert(int x){
//    root = push(x, root);
//  }
//  node* push(int x, node* t){
//    if (t == nullptr) {
//      t = new node(x);
//    }else if (x < t->x) {
//      t->left = push(x, t->left);
//    } else if (x > t->x) {
//      t->right = push(x, t->right);
//    }
//    return t;
//  }
//
//  bool exists(int n){
//    node* tmp = root;
//    while (tmp != nullptr){
//      if (tmp->x == n) {
//        return true;
//      } else if (tmp->x > n){
//        tmp = tmp->left;
//      } else {
//        tmp = tmp->right;
//      }
//    }
//    return false;
//  }
//
//  node* next(int n){
//    node* tmp = root;
//    node* parent = nullptr;
//
//    while (tmp != nullptr){
//      if (tmp->x > n){
//        parent = tmp;
//        tmp = tmp->left;
//      } else {
//        tmp = tmp->right;
//      }
//    }
//    return parent;
//  }
//
//  node* prev(int n){
//    node* tmp = root;
//    node* parent = nullptr;
//
//    while (tmp != nullptr){
//      if (tmp->x >= n){
//        tmp = tmp->left;
//      } else {
//        parent = tmp;
//        tmp = tmp->right;
//      }
//    }
//    return parent;
//  }
//
//  node* del(node* t, int n){
//    if (t == nullptr)
//      return t;
//    if (n < t->x){
//      t->left = del(t->left, n);
//    } else if (n > t->x) {
//      t->right = del(t->right, n);
//    } else if (t->left != nullptr && t->right != nullptr){
//      t->x = mini(t->right)->x;
//      t->right = del(t->right, t->x);
//    } else {
//      if (t->left){
//        t = t->left;
//      } else if (t->right){
//        t = t->right;
//      } else {
//        t = nullptr;
//      }
//    }
//    return t;
//  }
//
//  node* mini(node* t){
//    if (t->left == nullptr)
//      return t;
//    return mini(t->left);
//  }
//
//  node* maxi(node* t){
//    if (t->right == nullptr)
//      return t;
//    return maxi(t->right);
//  }
//};
//
//int main(){
////  ios::sync_with_stdio(0);
//  cin.tie(0);
//  bst tree;
//  int n;
//  string s;
//  while (cin >> s){
//
//    if (s == "insert"){
//      cin >> n;
//      tree.insert(n);
//    } else if (s == "exists") {
//      cin >> n;
//      if (tree.root == nullptr)
//        cout << "false\n";
//      else {
//        if (tree.exists(n))
//          cout << "true\n";
//        else
//          cout << "false\n";
//      }
//
//    } else if (s == "next"){
//      cin >> n;
//      node* ans = tree.next(n);
//      if (ans){
//        cout << ans->x << "\n";
//      } else {
//        cout << "none\n";
//      }
//    } else if (s == "prev"){
//      cin >> n;
//      node* ans = tree.prev(n);
//      if (ans != nullptr){
//        cout << ans->x << "\n";
//      } else {
//        cout << "none\n";
//      }
//    } else if (s == "delete"){
//      cin >> n;
//      tree.root = tree.del(tree.root, n);
//    }
//  }
//}