#pragma once

namespace refactor {
// old
struct organization {
  std::string name;
  std::string country;
};

// opt
class Organization {
 public:
  Organization(const std::string& name, const std::string& country) {
    this->name = name;
    this->country = country;
  }

  const std::string& getName() { return name; }
  void setName(const std::string& name) { this->name = name; }

  const std::string& getCountry() { return country; }
  void setCountry(const std::string& country) { this->country = country; }

 private:
  std::string name;
  std::string country;
};

}