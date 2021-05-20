#pragma once

#include "IAdapter.hpp"

class Client
{
public:
   Client();

   void go();

private:

   IAdapter* mAdapter;
};

