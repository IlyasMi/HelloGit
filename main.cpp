#include <iostream>
using namespace std;

int main() {
  string name;
  int age;

  cout<<"Введите имя: "<<endl;
  cin>>name;

  cout<<"Введите возраст: "<<endl;
  cin>>age;
  cout<<"Привет, "<<name<<"! Тебе"<<age<< "лет"<<endl;
  return 0;
}