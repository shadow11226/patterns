#ifndef CBASEHANDLER_HPP
#define CBASEHANDLER_HPP

struct SRequest
{
   SRequest() {}

   SRequest(int m) : mType(m) {}
   
   int mType;
};

class CBaseHandler
{
   public:

   CBaseHandler();

   virtual ~CBaseHandler() {}

   virtual void handleRequest(const SRequest& request);

   void setHext(CBaseHandler* handler);

   private:

   CBaseHandler* mHandler;
};

#endif