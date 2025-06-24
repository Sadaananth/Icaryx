
#include <iostream>

#include "app.h"
#include "boost/asio/io_context.hpp"

int main()
{
  boost::asio::io_context io_context;
  App app;
  app.build();
  return 0;
}
