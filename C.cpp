////
//// Created by Святослав on 05.12.2023.
////
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
//  int cnt;
//
//  node(int x): x(x), left(nullptr), right(nullptr), cnt(0){};
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
//      t->cnt++;
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
//  int find_k_max(int k){
//    node* tmp = root;
//    while (tmp->cnt != k){
//      if (tmp->cnt < k){
//        k -= (tmp->cnt+1);
//        tmp = tmp->left;
//      } else {
//        tmp = tmp->right;
//      }
//    }
//    return tmp->x;
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
//
//  for (int i = 0; i < n; i++){
//    cin >> s;
//    if (s == 1){
//      cin >> k;
//      tree.insert(k);
//    } else if (s == -1) {
//      cin >> k;
//      tree.root = tree.del(tree.root, k);
//    } else if (s == 0) {
//      cin >> k;
//      int ans  = tree.find_k_max(k-1);
//      cout << ans << "\n";
//    }
//  }
//
//}