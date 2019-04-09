// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book {
 protected:
  string title;
  string author;

 public:
  Book(string t, string a) {
    title = t;
    author = a;
  }
  virtual void display() = 0;
};

class MyBook : public Book {
 private:
  int price;

 public:
  MyBook(string t, string a, int p) : Book(t, a), price(p) {}
  void display() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price;
  }
};
int main() {
  string title, author;
  int price;
  getline(cin, title);
  getline(cin, author);
  cin >> price;
  MyBook novel(title, author, price);
  novel.display();
  return 0;
}
