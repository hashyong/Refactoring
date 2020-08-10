#include <utility>

#pragma once

namespace hd {

// old
class Department {
 public:
  string chargeCode() { return chargeCode_; }
  void setChargeCode(string code) { chargeCode_ = code; }

  string manager() { return manager_; }
  void setManager(string code) { manager_ = code; }

 private:
  string chargeCode_;
  string manager_;
};

class Person {
 public:
  Person(const string& name) { name_ = name; }

  string name() { return name_; }
  Department department() { return department_; }
  void setDepartment(Department obj) { department_ = obj; }

 private:
  string name_;
  Department department_;
};

Person aPerson("sb");
auto manager = aPerson.department().manager();

class PersonDelegate {
 public:
  PersonDelegate(const string& name) { name_ = name; }

  string name() { return name_; }
  Department department() { return department_; }
  void setDepartment(Department obj) { department_ = obj; }

  // delegate manager
  string manager() { return department_.manager();}

 private:
  string name_;
  Department department_;
};

PersonDelegate person("sb");
auto managerTmp = person.manager();

class PersonDelegateOpt {
 public:
  PersonDelegateOpt(const string& name) : person_(name) {}

  string manager() { return person_.department().manager();}

 private:
  Person person_;
};
PersonDelegateOpt personOpt("sb");
auto managerOpt = personOpt.manager();
}
