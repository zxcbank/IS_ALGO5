#include <iostream>
#include <vector>

using namespace std;

struct node {
  node *left, *right;
  string lab;
  int cnt;

  node(string name): lab(name), left(nullptr), right(nullptr), cnt(1){};
};

struct bst{
  node* root = nullptr;
  int mx = 0;


  void insert(string x){
    root = push(x, root);
  }
  node* push(string x, node* t){
    if (t != nullptr && t->lab == x){
      t->cnt++;
    }
    if (t == nullptr) {
      t = new node(x);
    } else if (x < t->lab) {
      t->left = push(x, t->left);
    } else if (x > t->lab) {
      t->right = push(x, t->right);
    }

    return t;
  }




  node* find (node* t, string s){
    if (s == t->lab){
      return t;
    } else if (s < t->lab) {
      return find(t->left, s);
    } else {
      return find(t->right, s);
    }
  }
};

int main(){
  bst tree;
  int n;
  cin >> n;
  vector <vector <string>> data(3);
  for (int i = 0; i < 3; i++){
    data[i] = vector<string>(n);
    for (int j = 0; j < n; j++){
      cin >> data[i][j];
      tree.insert(data[i][j]);
    }
  }

  for (int i = 0; i < 3; i++){
    int ans = 0;
    for (int j = 0; j < n; j++){
      int count = tree.find(tree.root, data[i][j])->cnt;
      if (count == 2)
        ans++;
      else if (count == 1)
        ans+=3;
    }
    cout << ans << " ";
  }
}