//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//struct node {
//  node *left, *right;
//  long long x;
//
//  node(long long name): x(name), left(nullptr), right(nullptr){};
//};
//
//struct bst{
//  node* root = nullptr;
//
//  void in_order(node *t, vector<long long>& array){
//    if (t == nullptr){
//      return;
//    }
//    in_order(t->left, array);
//    array.push_back(t->x);
//    in_order(t->right, array);
//  }
//
//  void post_order(node *t, vector<long long>& array){
//    if (t == nullptr){
//      return;
//    }
//    post_order(t->left, array);
//    post_order(t->right, array);
//    array.push_back(t->x);
//  }
//};
//
//int main(){
//  bst tree;
//  long long n, k;
//  cin >> n;
//  stack <node*> bambi;
//  for (long long i = 0; i < n; i++) {
//    cin >> k;
//
//    if (i == 0){
//      tree.root = new node (k);
//      bambi.push(tree.root);
//    } else {
//      node* now = nullptr;
//      while (!bambi.empty() && k >= bambi.top()->x) {
//        now = bambi.top();
//        bambi.pop();
//      }
//      if (now == nullptr) {
//        now = bambi.top();
//        now->left = new node(k);
//        bambi.push(now->left);
//      } else {
//        now->right = new node(k);
//        bambi.push(now->right);
//      }
//    }
//
//  }
//  // pre построили
//  vector<long long> array2;
//  vector<long long> array3;
//  tree.in_order(tree.root, array2);
//  tree.post_order(tree.root, array3);
//  long long t;
//  for (long long i = 0; i < n; i++) {
//    cin >> t;
//    if (t != array2[i]) {
//      cout << "NO";
//      exit(0);
//    }
//  }
//  for (long long i = 0; i < n; i++) {
//    cin >> t;
//    if (t != array3[i]) {
//      cout << "NO";
//      exit(0);
//    }
//  }
//  cout << "YES";
//}