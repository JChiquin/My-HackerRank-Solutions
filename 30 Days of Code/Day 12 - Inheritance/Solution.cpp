// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <iostream>
#include <vector>

using namespace std;

class Person {
 protected:
  string firstName;
  string lastName;
  int id;

 public:
  Person(string firstName, string lastName, int identification) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = identification;
  }
  void printPerson() {
    cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
  }
};

class Student : public Person {
 private:
  vector<int> testScores;

 public:
  Student(string firstName,
          string lastName,
          int identification,
          vector<int> scores)
      : Person(firstName, lastName, identification), testScores(scores) {}
  char calculate() {
    float avg = average();
    if (avg < 40)
      return 'T';
    else if (avg < 55)
      return 'D';
    else if (avg < 70)
      return 'P';
    else if (avg < 80)
      return 'A';
    else if (avg < 90)
      return 'E';
    else
      return 'O';
  }
  float average() {
    int total = totalScores();
    return total ? total / testScores.size() : 0;
  }
  int totalScores() {
    int sum = 0;
    for (int i : testScores)
      sum += i;
    return sum;
  }
};
int main() {
  string firstName;
  string lastName;
  int id;
  int numScores;
  cin >> firstName >> lastName >> id >> numScores;
  vector<int> scores;
  for (int i = 0; i < numScores; i++) {
    int tmpScore;
    cin >> tmpScore;
    scores.push_back(tmpScore);
  }
  Student* s = new Student(firstName, lastName, id, scores);
  s->printPerson();
  cout << "Grade: " << s->calculate() << "\n";
  return 0;
}