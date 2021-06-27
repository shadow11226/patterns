#include "iostream"
#include "CCarFacade.cpp"

using namespace std;

int main()
{
   cout << "Fcade is working" << endl;

   CCarFacade car;
   car.operation();

   cin.get();
   return 0;
}