#include "Client.hpp"
#include "CConcreteAdapter.hpp"

Client::Client()
   :mAdapter(new CConcreteAdapter())
{
}

void Client::go()
{
   mAdapter->operation();
}