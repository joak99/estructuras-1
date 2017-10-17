#include <vector>
#include <iostream>
using namespace std;

template <class T> 
class Pila : public vector <T>{
	public:
		Pila ();
		void adicionar (T elem);
		void mostrar ();
};
template <class T>
Pila <T>::Pila (): vector<T> () {}

template <class T>
void Pila <T>::adicionar (T elem) {
	this->push_back (elem);
}

template <class T>
void Pila <T>::mostrar () {
	int n = this->size ();
	for (int i=0; i < n; i++)
		cout << this->at (i)  << ", ";
	cout << endl;
}

