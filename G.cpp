
#include <iostream>
#include <vector>
using namespace std;

struct node {
  node* left, * right, * parent;
  long long x;

  node(long long x, node* par) : x(x), left(nullptr), right(nullptr), parent(par) {};
};
struct bst {
  node* root = nullptr;

  bool check(node* t, long long tmin, long long tmax) {
    if (t == nullptr)
      return true;
    if (t->x <= tmin || tmax <= t->x)
      return false;
    return check(t->left, tmin, t->x) and check(t->right, t->x, tmax);
  }

  void pre_order(node* t, vector<node*>& array) {
    if (t == nullptr) {
      return;
    }

    if (check(t, LONG_MIN, LONG_MAX) && t->x >= 0) //&& t->left != nullptr && t->right != nullptr
      array.push_back(t);
    else{
      pre_order(t->right, array);
      pre_order(t->left, array);
    }
    return;
  }
  void sum_count(node* t, long long& sum) {
      sum += t->x;
      if (t->left != nullptr)
        sum_count(t->left, sum);
      if (t->right != nullptr)
        sum_count(t->right, sum);
      return;
  }
};

int main() {
  string s0 = "", s1;
  bst tree;
  node* tmp = new node(1, nullptr);

  while (tmp != nullptr) {
    cin >> s1;
    if (s1 != "u" && s1 != "l" && s1 != "r") {
      if (tree.root == nullptr) {
        tree.root = new node(stoi(s1), nullptr);
        tmp = tree.root;
      } else {
        if (s0 == "l") {
          tmp->left = new node(stoi(s1), tmp);
          tmp = tmp->left;
        } else if (s0 == "r") {
          tmp->right = new node(stoi(s1), tmp);
          tmp = tmp->right;
        }
      }
    }
    if (s1 == "u")
      tmp = tmp->parent;
    s0 = s1;
  }
  vector<node*> bambi;
  tree.pre_order(tree.root, bambi);
  long long ans = 0;
  long long tmp_ans;
  for (long long i = 0; i < bambi.size(); i++) {
    tmp_ans = 0;
    tree.sum_count(bambi[i], tmp_ans);
    ans = max(ans, tmp_ans);
  }
  cout << ans;
}