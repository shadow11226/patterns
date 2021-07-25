#include "iostream"
#include "CInvoker.hpp"

using namespace std;

int main()
{
char s = '1'; 
   int line, line_b; 
   string str; 
   CInvoker inv; 
   while( s!= 'e' )
   {
      cout << "What to do: \n1.Add a line\n2.Undo last command" << endl; 
      cin >> s; 
      switch( s )
      {
      case '1':
         cout << "What line to insert: "; 
         cin >> line; 
         --line; 
         cout << "What to insert: "; 
         cin >> str; 
         inv.insert( line, str ); 
         break; 
      case '2':
         inv.undo(); 
         break; 
      }
      cout << ">>OCUMENT<<" << endl; 
      inv.show(); 
      cout << ">>DOCUMENT<<" << endl; 
   }
   cin.get();
   return 0;
}