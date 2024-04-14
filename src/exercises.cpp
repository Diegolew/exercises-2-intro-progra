
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
int current_day = 1;
for (int week_day = 1; week_day <= 7; ++week_day) {
  if (week_day < n) {
    cout << "     ";
  } else {
      cout << current_day++;
      if (current_day <= k) {
        cout << (current_day < 10 ? "   " : "  ");
    }
  }
}
cout << endl;
while (current_day <= k) {
  for (int week_day = 1; week_day <= 7; ++week_day) {
    cout << current_day++;
    if (current_day <= k) {
      cout << (current_day < 10 ? "   " : "  ");
      }
    }
    cout << endl;
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
string no_space;
 for (int i = 0; s[i]; ++i) {
  char c = s[i];
   if (c != ' ') {
    no_space += c;
    }
  }

int inicio = 0;
int fin = no_space.length() - 1;
while (inicio < fin) {
 if (no_space[inicio] != no_space[fin]) {
  cout << "NO" << endl;
  return;
  }
  inicio++;
  fin--;
 }
 cout << "YES" << endl;
}

void exercise_9(string s) {
  int first_f_index = -1;
  int count_f = 0;

for (int i = 0; i < s.length(); ++i) {
  if (s[i] == 'f') {
   if (count_f == 0) {
      first_f_index = i;
    } count_f++;
  }
}

if (count_f == 0) {
  cout << "-2" << endl;
} else if (count_f == 1) {
  cout << "-1" << endl;
} else {
  cout << "3" << endl;
  }
}

int exercise_10(int a, int b) {
while (b != 0) {
  int temp = b;
  b = a % b;
  a = temp;
  }
return a;
}

void exercise_11() {
}

void exercise_12() {
double En = 1;
double Un = En;
for(int i=1; 10>=i; ++i){
  int Vn = Un;
  double result = En/(i +1);
  cout << "U" << i << " = " << En << " " << "V" << i << " = " << Vn << endl;
  En = result;
    }
}

long exercise_13(int n, int k) {
long suma = 0;

for (int i = 1; i <= n; ++i) {
  long termino = pow(i, k);
  suma += termino;
  }
  return suma;
}

string exercise_14(int n) {
string result;
int original = n;
int reversed = 0;

while (n != 0) {
  int remainder = n % 10;
  reversed = reversed * 10 + remainder;
  n /= 10;
}

if (original == reversed) {
  result = "Es palindrome";
} else {
  result = "No es palindrome";
  }
  return result;
}

void exercise_15(int decimal) {
string result;
    
if (decimal == 0) {
  result = "0";
} else {
  while (decimal > 0) {
    result = to_string(decimal % 2) + result;
    decimal /= 2;
    }
  }
  cout << result << endl;
}

void exercise_16(int dividendo, int divisor) {
int cociente = 0;
int residuo = 0;
while (dividendo >= divisor) {
  dividendo -= divisor;
  cociente++;
  } 
residuo = dividendo;
cout << cociente << " " << residuo << endl;
}


void exercise_17(int n) {
int count = 0;
int number = 2;
while (count < n) {
  bool isPrime = true;

  for (int i = 2; i <= number / 2; ++i) {
    if (number % i == 0) {
      isPrime = false;
      break;
    }
  }

  if (isPrime) {
    cout << number << " ";
    ++count;
    }

  ++number;
  }
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}