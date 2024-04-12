
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE

  int indice = 0;
  for(int i = 0; i < s1.size(); i++) {
    if(s1[i] == ' '){
      cout<< i << endl;
    }
  }
  cout<< s1.size() << endl;
}

void exercise_2(string s1) {
  if (s1[0] == '\0') {
  return; 
  }
string palabra;
for (int i = 0; i < s1.size(); i++) {
  if (s1[i] != ' ') {
    palabra += s1[i];
  } else {
      cout << "[" << palabra << "]" << endl;
      palabra = "";
    }
  }
  if (!palabra.empty()) {
    cout << "[" << palabra << "]" << endl;
  }
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
int visitas = 0;

for (int i = 0; i < s1.size() && visitas < 10; i++) {
  if (s1[i] == '1') {
    cout << "Om-nom-nom :P" << endl;
    visitas++;
} else if (s1[i] == '0') {
    cout << "No cake :(" << endl;
    break;
    }
  }
}

void exercise_4(int n) {
    // TODO: YOUR CODE HERE
if (n < 0) {
  cout << "El numero es negativo. Intentelo de nuevo" << endl;
  return;
}

if (n > 12) {
  cout << "El numero es muy grande. Intentelo de nuevo" << endl;
  return;
}

int factorial = 1;

for (int i = 1; i <= n; i++) {
  factorial *= i;
  }
  cout << factorial << endl;
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
int day = 1;

for (int i = 1; i < n; ++i) {
  cout << "   ";
}

for (int i = 1; i <= k; ++i) {
  if (day < 10)
    cout << " ";
    cout << day;

if (day < 10) {
  cout << "  ";
} else {
  cout << "  ";
}

if ((day + n - 1) % 7 == 0 || i == k)
  cout << endl;
  day++;
  }
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE

int suma = 0;
while (n > 0) {
  int digito = n % 10;
  suma += digito;
  n /= 10;
}
  return suma;

  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
   double suma = 0.0;

for (int i = 1; i <= n; ++i) {
double termino = 1.0 / i;

if (i % 2 == 0) {
  suma -= termino;
} else { 
  suma += termino;
    }
  }
    cout << suma << endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
  string no_space;

  for(int 1=0; s[i] != '\o'; ++i){
    char c = s[1];
    if(c != ' '){
      if(c >= 'A' && c <= 'Z'){
        c +=('a' - 'z')
      }
      no_space += c;
    } 
  }

  int inicio = 0;
  int fin = no_space.length() - 1;
  while(inicio < fin){
    if(no_space[inicio] != no_space[fin]){
      cout<<"No"<<endl;
    }
    inicio++;
    fin--;
  }
  cout<<"Yes"<<endl;
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}