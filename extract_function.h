#pragma once

#include <string>
#include <iostream>
#include <vector>

namespace refactor {
//6.1 提炼函数（Extract Function）

struct content {
  int amount;
};

struct Invoice {
  std::string customer;
  std::vector<content> orders;
};

void printBanner() {
  std::cout << "***********************" << std::endl
            << "**** Customer Owes ****" << std::endl
            << "***********************" << std::endl;
}

void printDetails(const std::string& customer, const int outstanding) {
  std::cout << "name:" << customer << std::endl
            << "amount:" << outstanding << std::endl;
}

// Extract Function before
void printOwing(const Invoice& invoice) {
  auto outstanding = 0;

  // Extract Function before
  std::cout << "***********************" << std::endl
            << "**** Customer Owes ****" << std::endl
            << "***********************" << std::endl;
  // Extract Function after
  printBanner();

  // calculate outstanding
  for (auto& o : invoice.orders) {
    outstanding += o.amount;
  }

  //print details

  // Extract Function before
  std::cout << "name:" << invoice.customer << std::endl
            << "amount:" << outstanding << std::endl;

  // Extract Function after
  printDetails(invoice.customer, outstanding);
}

// Extract Function after
void printOwningOpt(const Invoice& invoice) {
  auto outstanding = 0;

  printBanner();

  // calculate outstanding
  for (auto& o : invoice.orders) {
    outstanding += o.amount;
  }

  printDetails(invoice.customer, outstanding);
}
}