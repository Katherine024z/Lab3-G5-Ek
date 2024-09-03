#include <iostream>

int SumaNaturales(int a)
{
  if (a == 1)
  {
    return 1;
  }
  else
  {
    return a + SumaNaturales(a - 1);
  }
}

int potencia(int a, int numero)
{
  if ((a < 1))
  {
    return 1;
  }
  else
  {
    return numero * potencia(a - 1, numero);
  }
}

int main()
{
  int opcion;
  std::cout << "Elige una opcion" << std::endl;
  std::cout << " 1- Suma de naturales\n"
            << " 2- Potencias\n";
  std::cin >> opcion;

  switch (opcion)
  {
  case 1:
    int b;
    std::cout << "Ingrese el numero de naturales a sumar:" << std::endl;
    std::cin >> b;
    SumaNaturales(b);
    std::cout << "La suma de los numeros naturales es de " << SumaNaturales(b);
    break;

  case 2:
    int a, numero;
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;
    std::cout << "Ingrese un numero para su exponente: ";
    std::cin >> a;
    potencia(a, numero);
    std::cout << "La potencia de " << numero << " es: " << potencia(a, numero);
    break;

  default:
    std::cout << "Opcion incorrecta";
  }

  return 0;
}
