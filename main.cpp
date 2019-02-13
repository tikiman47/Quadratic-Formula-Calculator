// Quadratic Function Calculator
// Originally by @tikiman47
// This project is open source and can be edited freely!

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <Windows.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

using namespace std;

class Expression {
public:
	float a, b, c;
	float h, k;
	string direction;
	Expression() {
		restart: {
			string version = "[Version 1.0.2.45]";
			system("cls");
			system("title Basic Quadratic Function Calculator");
			system("color 0F");
			cout << "Basic Quadratic Function Calculator " << version << endl;
			cout << "Copyright (c) 2019 tikiman47. GNU Public Generic License v3.\n\n";
			float _a, _b, _c;
			cout << "This program will convert the Standard Form expression into a Vertex Form expression, while calculating the Vertex\n";
			cout << " and determining the direction of the function.\n";
			cout << "Quadratic Function Formula (Standard Form) : f(x) = ax^2 + bx + c\n";
			cout << "Quadratic Function Formula (Vertex Form)   : f(x) = a(x - h)^2 + k\n";
			cout << "You must assign values to 'a', 'b', and 'c', to continue.\n\n";
			cout << "Enter values into this expression :  f(x) = ax^2 + bx + c\n";
			cout << "If variable 'a' is set to 0, it will be automatically be assigned positive 1.\n";		
			cout << "a = ";
			cin >> _a;
			if (_a == 0)
				_a = 1;
			else
				_a = _a;
			if (_a > 0)
				this->direction = "UP";
			else if (a < 0)
				this->direction = "DOWN";
			else 
				this->direction = "INVALID 'a' VALUE OF 0! MATHEMATICAL PARADOX REACHED!";
			cout << "'a' set to : " << _a << "!\n";
			this->a = _a;
			cout << "b = ";
			cin >> _b;
			cout << "'b set to : " << _b << "!\n";
			this->b = _b;
			cout << "c = ";
			cin >> _c;
			cout << "'c' set to : " << _c << "!\n";
			this->c = _c;
			cout << "\nYour new expression, based on the entered values : f(x) = " << a << "x^2 + " << b << "x + " << c << "\n";
			cout << "Is this expression correct? (Y/N): ";
			char r;
			cin >> r;
			if (r == 'Y') {
				cout << endl;
				goto calculate;
			}
			else if (r == 'N')
				goto restart;
			else {
				cerr << "Invalid choice. Restarting expression assignment...\n";
				Sleep(3000);
				goto restart;
			}
			calculate: {
				cout << "Calculating 'h' and 'k', in the expression...\n";
				float _h, _k;
				_h = (b * (-1)) / (2 * a);
				this->h = _h;
				_k = a * pow(_h, 2) - (4 * _h + c); 
				this->k = _k;
				cout << endl;
				cout << "'h' value : " << _h << "\n";
				cout << "'k' value : " << _k << "\n";
				cout << "Vertex    : " << "(" << _h << "," << _k << ")\n\n"; 
				goto vertex;
			}
			vertex: {
				cout << "Vertex Form : f(x) = (" << a << ") * (x - (" << h << "))^2 + (" << k << ")\n\n";
				cout << "Direction : " << this->direction << "\n";
			}
		}
	}
};

int main() {
	while (true) {
		Expression e;
		cout << endl;
		system("pause");
	}
}
