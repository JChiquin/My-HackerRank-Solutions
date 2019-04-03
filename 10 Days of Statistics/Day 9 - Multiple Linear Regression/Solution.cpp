// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

class Matriz {
 private:
  int n, m;
  vector<vector<double>> M;

 public:
  Matriz();
  Matriz(int n, int m);
  Matriz(const Matriz& copy);
  Matriz(const vector<vector<double>>& copy);
  Matriz(const vector<double>& copy, bool fila = true);

  double determinante();
  double determinanteSarrus();
  Matriz Transpuesta();
  Matriz Inversa();
  Matriz Adjunta();
  void LlenarRandom(int inferior, int superior);
  void LlenarFila(double num, int i);
  void LlenarFila(const vector<double>& numero, int i);
  void LlenarColumna(double num, int i);
  void LlenarColumna(const vector<double>& numero, int i);
  Matriz EliminarFila(int n);
  Matriz EliminarColumna(int m);

  Matriz operator+(const Matriz& B);
  Matriz operator-(const Matriz& B);
  Matriz operator*(const Matriz& B);
  Matriz operator*(const double& escalar);
  vector<double>& operator[](int row) { return M[row]; }

  /*ostream& operator << (ostream &o){
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++)
              o<<M[i][j]<<' ';
          o<<endl;
      }
      return o;
  }*/

  void print();
  void printFormateado();
  void printTamanio();
};

//----------------------------------

Matriz::Matriz() {
  n = m = 0;
  M.resize(0);
}

Matriz::Matriz(int n, int m) {
  this->n = n;
  this->m = m;
  M.resize(n, vector<double>(m));
}

Matriz::Matriz(const Matriz& copy) {
  n = copy.n;
  m = copy.m;
  M = copy.M;
}

Matriz::Matriz(const vector<vector<double>>& copy) {
  n = copy.size();
  m = copy[0].size();
  M = copy;
}

Matriz::Matriz(const vector<double>& copy, bool fila) {
  if (fila) {
    n = 1;
    m = copy.size();
    M.push_back(copy);
  } else {
    m = 1;
    n = copy.size();
    for (int i = 0; i < n; i++)
      M.push_back(vector<double>(1, copy[i]));
  }
}

Matriz Matriz::operator+(const Matriz& B) {
  Matriz temp(*this);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      temp[i][j] += B.M[i][j];
  return temp;
}

Matriz Matriz::operator-(const Matriz& B) {
  Matriz temp(*this);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      temp[i][j] -= B.M[i][j];
  return temp;
}

Matriz Matriz::operator*(const double& escalar) {
  Matriz temp(*this);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      temp[i][j] *= escalar;
  return temp;
}

Matriz Matriz::operator*(const Matriz& B) {
  Matriz temp(n, B.m);
  for (int i = 0; i < temp.n; i++)
    for (int j = 0; j < temp.m; j++) {
      double acum = 0.00;
      for (int r = 0; r < m; r++)
        acum += M[i][r] * B.M[r][j];
      temp[i][j] = acum;
    }
  return temp;
}

void Matriz::printFormateado() {
  cout << endl << '{';
  for (int i = 0; i < n; i++) {
    cout << '{';
    for (int j = 0; j < m; j++)
      cout << M[i][j] << (j == m - 1 ? "}" : ",");
    cout << (i == n - 1 ? "" : ",\n");
  }
  cout << '}' << endl;
}

void Matriz::print() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      cout << M[i][j] << (j == m - 1 ? "" : "\t");
    cout << endl;
  }
}

void Matriz::printTamanio() {
  cout << endl << n << 'x' << m << endl;
}

Matriz Matriz::Adjunta() {
  Matriz temp(n, m);
  for (int i = 0; i < n; i++) {
    Matriz aux(*this);
    aux = aux.EliminarFila(i);
    for (int j = 0; j < m; j++)
      temp[i][j] =
          ((i + j) % 2 ? -1 : 1) * aux.EliminarColumna(j).determinante();
  }
  return temp;
}

Matriz Matriz::Inversa() {
  double deter = determinante();
  if (deter)
    return Adjunta().Transpuesta() * (1.0 / deter);
  else
    return Matriz();
}

Matriz Matriz::Transpuesta() {
  Matriz temp(m, n);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      temp[j][i] = M[i][j];
  return temp;
}

void Matriz::LlenarRandom(int inferior, int superior) {
  srand(time(0));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      (*this)[i][j] = inferior + rand() % (superior + 1 - inferior);
}

void Matriz::LlenarFila(double num, int i) {
  vector<double> aux(m, num);
  LlenarFila(aux, i);
}

void Matriz::LlenarFila(const vector<double>& numeros, int i) {
  M[i] = numeros;
}

void Matriz::LlenarColumna(double num, int i) {
  vector<double> aux(n, num);
  LlenarColumna(aux, i);
}

void Matriz::LlenarColumna(const vector<double>& numero, int i) {
  for (int j = 0; j < n; j++)
    M[j][i] = numero[j];
}

Matriz Matriz::EliminarFila(int n) {
  Matriz temp(*this);
  temp.M.erase(temp.M.begin() + n);
  temp.n--;
  return temp;
}

Matriz Matriz::EliminarColumna(int m) {
  Matriz temp(*this);
  for (int i = 0; i < temp.n; i++) {
    temp[i].erase(temp[i].begin() + m);
  }
  temp.m--;
  return temp;
}

double Matriz::determinante() {
  if (n == 1 and m == 1)
    return M[0][0];
  else if (n == 3 and m == 3)
    return determinanteSarrus();
  else {
    vector<double> filaEliminada = M[0];
    Matriz temp = EliminarFila(0);
    double acum = 0.00;
    for (int i = 0; i < m; i++)
      if (filaEliminada[i])
        acum += (i % 2 ? -1 : 1) * filaEliminada[i] *
                temp.EliminarColumna(i).determinante();
    return acum;
  }
}

double Matriz::determinanteSarrus() {
  return M[0][0] * M[1][1] * M[2][2] + M[1][0] * M[2][1] * M[0][2] +
         M[0][1] * M[1][2] * M[2][0] -
         (M[0][2] * M[1][1] * M[2][0] + M[1][2] * M[2][1] * M[0][0] +
          M[2][2] * M[0][1] * M[1][0]);
}

//----------------------------------

int main() {
  int n, m;
  cin >> m >> n;
  Matriz Y(n, 1), X(n, m + 1);
  X.LlenarColumna(1, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= m; j++)
      cin >> X[i][j];
    cin >> Y[i][0];
  }
  Matriz Xt = X.Transpuesta();
  Matriz B = (Xt * X).Inversa() * Xt * Y;
  int q;
  cin >> q;
  Matriz x(q, m + 1);
  x.LlenarColumna(1, 0);
  for (int i = 0; i < q; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> x[i][j];
    }
    cout << fixed << (Matriz(x[i]) * B)[0][0] << endl;
  }

  return 0;
}