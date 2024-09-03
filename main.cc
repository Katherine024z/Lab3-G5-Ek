#include <iostream>

int SumaNaturales(int a){
  if (a == 1)
  {
    return 1;
  }else {
    return a + SumaNaturales(a-1);
  }

  
}

int main() {
  int a;
  std::cout<<"Ingrese el numero de naturales a sumar:"<<std::endl;
  std::cin>>a;
SumaNaturales(a);

std::cout<<"La suma de los numeros naturales es de "<<SumaNaturales(a);
  return 0;
}
