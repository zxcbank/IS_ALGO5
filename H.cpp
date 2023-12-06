//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct node {
//  node *left, *right;
//  long long x;
//
//  node(long long x): x(x), left(nullptr), right(nullptr){};
//};
//struct bst{
//  node* root = nullptr;
//
//  void insert(long long x){
//    root = push(x, root);
//  }
//  node* push(long long x, node* t){
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
//  node* del(node* t, long long n){
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
//
//  void in_order(node *t, vector<node*>& array){
//    if (t == nullptr){
//      return;
//    }
//    in_order(t->left, array);
//    array.push_back(t);
//    in_order(t->right, array);
//  }
//
//  void in_order_print(node* t, vector<long long>& values){
//    if (t == nullptr){
//      return;
//    }
//    in_order_print(t->left, values);
//    values.push_back(t->x);
//    in_order_print(t->right, values);
//  }
//};
//
//int main (){
//  long long n, id, k;
//  cin >> n;
//  string oper;
//  bst account1, account2;
//
//
//
//  for (long long i = 0; i < n; i++){
//    cin >> oper;
//    if (oper != "merge"){
//      cin >> id;
//      cin >> k;
//      if (id == 1){
//        if (oper == "buy"){
//          account1.insert(k);
//        } else if (oper == "sell") {
//          account1.root = account1.del(account1.root, k);
//        }
//      } else if (id == 2) {
//        if (oper == "buy"){
//          account2.insert(k);
//        } else if (oper == "sell") {
//          account2.root = account2.del(account2.root, k);
//        }
//      }
//    } else {
//      vector<node*> ac2;
//      vector<long long>values;
//
//      account2.in_order(account2.root, ac2);
//      account2.root = nullptr;
//
//      for (long long j = 0; j < ac2.size(); j++){
//        account1.insert(ac2[j]->x);
//      }
//      account1.in_order_print(account1.root, values);
//      if (!values.empty()){
//        for (long long j = 0; j < values.size(); j++){
//          cout << values[j];
//          if (j != values.size()-1)
//            cout << " ";
//        }
//      }
//      if (i != n-1 && values.size() != 0)
//        cout << "\n";
//    }
//  }
//}