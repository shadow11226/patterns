#include "CDocument.hpp"

CDocument::CDocument()
{
   mData.reserve(100);
}

void CDocument::insert(int line, const string &str)
{
   if(line <= mData.size())
   {
      mData.insert(mData.begin() + line, str);
   }
   else
   {
      cout << "Error\n";
   }
}

void CDocument::remove(int line)
{
   if(line <= mData.size())
   {
      mData.erase(mData.begin() + line);
   }
   else
   {
      cout << "Error\n";
   }
}

string & CDocument::operator[](int x)
{
   return mData[x];
}

void CDocument::show()
{
   for(int i = 0; i < mData.size(); ++i)
   {
      cout << i+1 << " " << mData[i].c_str() << "\n";
   }
}