////
//// Created by Святослав on 05.12.2023.
////
//
////
//// Created by Святослав on 05.12.2023.
////
////
//// Created by Святослав on 04.12.2023.
////
//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//struct node {
//  node *left, *right, *parent;
//  int x;
//  int cnt;
//
//  node(int x, int lvl, node* par): x(x), left(nullptr), right(nullptr), cnt(lvl), parent(par){};
//};
//
//struct bst{
//  node* root = nullptr;
//  int mx = 0;
//
//
//  void insert(int x){
//    root = push(x, root, 1, nullptr);
//  }
//  node* push(int x, node* t, int lvl, node* par){
//    if (t == nullptr) {
//      t = new node(x, lvl, par);
//    }else if (x < t->x) {
//      mx = max(lvl+1, mx);
//      t->left = push(x, t->left, lvl+1, t);
//    } else if (x > t->x) {
//      mx = max(lvl+1, mx);
//      t->right = push(x, t->right, lvl+1, t);
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
//      t->cnt--;
//      t->right = del(t->right, n);
//    } else if (t->left != nullptr && t->right != nullptr){
//      t->x = mini(t->right)->x;
//      t->cnt--;
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
//
//  node* find_k_max(node* tmp, int k){
//    queue<node*> l;
//    node* t = tmp;
//    while (t->cnt < k) {
//      if (t->right)
//        l.push(t->right);
//      if (t->left)
//        l.push(t->left);
//      t = l.front();
//      l.pop();
//    }
//    return t;
//  }
//
//};
//
//int main(){
////  ios::sync_with_stdio(0);
////  cin.tie(0);
//  bst tree;
//  int s, k, n;
//  cin >> n;
//  for (int i = 0; i < n; i++){
//    cin >> k;
//    tree.insert(k);
//  }
//  int i = 1;
//  node* r = tree.root;
//  r = tree.find_k_max(tree.root, i);
//  cout << r->x << " ";
//  while (i < tree.mx){
//
//    i++;
//    r = tree.find_k_max(tree.root, i);
//    cout << r->x << " ";
//  }
//}