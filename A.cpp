//#include <iostream>
//#include <vector>
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
////  void insert(int x){
////    root = push(x, root);
////  }
////  node* push(int x, node* t){
////    if (t == nullptr) {
////      t = new node();
////      t->left = nullptr;
////      t->right = nullptr;
////      t->x = x;
////    }
////    else if (x < t->x) {
////      t->left = push(x, t->left);
////    } else {
////      t->right = push(x, t->right);
////    }
////
////    return t;
////  }
//
//  void preorder(node* r){
//    if (r == nullptr)
//      return;
//    cout << r->x << " ";
//    preorder(r->left);
//    preorder(r->right);
//  }
//};
//
//
////void solve(int* a, int l , int r, int n){
////  if (l >= r && r >= 0 && l < n){
////    cout << a[l] << " ";
////    return;
////  }
////  else if (r >= 0 && l < n){
////    cout << a[(l+r)/2] << " ";
////    solve(a, l, (l+r)/2-1, n);
////    solve(a, (l+r)/2+1, r, n);
////  }
////  else{
////    return ;
////  }
////}
//
//node* solve(vector<int>& a, int l, int r) {
//  if (l > r) {
//    return nullptr;
//  }
//  int mid = (l + r) / 2;
//  node* node = new struct node(a[mid]);
//  node->left = solve(a, l, mid - 1);
//  node->right = solve(a, mid + 1, r);
//  return node;
//}
//int main() {
//  int n, x;
//  cin >> n;
//  bst bst;
//  vector<int>a;
//  for (int i = 0; i < n; i++){
//    cin >> x;
//    a.push_back(x);
//  }
//  bst.root = solve(a, 0, n-1);
//  bst.preorder(bst.root);
//  return 0;
//}
