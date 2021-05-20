#pragma once

class IAdapter
{
public:

   virtual ~IAdapter()
   {}

   virtual void operation() = 0;
};