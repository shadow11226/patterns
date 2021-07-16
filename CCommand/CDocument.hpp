#ifndef CDOCUMENT_HPP
#define CDOCUMENT_HPP

#include "string"
#include "vector"
#include "iostream"

using namespace std;

class CDocument
{
   public:

   CDocument();

   void insert(int line, const string& str);

   void remove(int line);

   string & operator[] (int x);

   void show();

   private:

   vector<string> mData;
};

#endif