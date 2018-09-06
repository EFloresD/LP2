#include <iostream>
#indef MY_VECTOR_H
#define MY_VECTOR_H

using namespace std;
template <class T>

class my_vector{
  private:
    int a_size;
    T *p_data;
    int max_size;

  static const int MAX;

  public:
    my_vector(int a_size = MAX);
    ~my_vector();
    void push_back();
}

template <class T>
int my_vector<T>::MAX=10;

template <class T>
int my_vector<T>::myvector(int a_size){
  
}

template <class T>
my_vector<T>::~my_vector(){
  delete() my_vector();
}

template <class T>
my_vector<T>::push_back(){
  int cont=0;
}

#endif // MY_VECTOR_H