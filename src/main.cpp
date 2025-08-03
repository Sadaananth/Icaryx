
#include <iostream>

#include "app.h"
#include <boost/program_options.hpp>

int main(int argc, char* argv[]) {
  namespace po = boost::program_options;
  po::options_description desc("Allowed options");
  desc.add_options()
      ("help,h", "produce help message");

  po::variables_map vm;
  try {
      po::store(po::parse_command_line(argc, argv, desc), vm);

      if (vm.count("help")) {
          std::cout << desc << "\n";
          return 0;
      }

      po::notify(vm);

  } catch (std::exception& e) {
      std::cerr << "Error: " << e.what() << "\n";
      std::cerr << desc << "\n";
      return 1;
  }

  App app;
  app.build();
  return 0;
}
