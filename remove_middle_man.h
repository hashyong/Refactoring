#pragma once

namespace rmm {
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

class PersonDelegate {
 public:
  PersonDelegate(const string& name) { name_ = name; }

  string name() { return name_; }
  Department department() { return department_; }
  void setDepartment(Department obj) { department_ = obj; }

  // delegate manager
  // 假如出现大量的委托函数，那就没必要委托了，直接用depart就行
  string manager() { return department_.manager();}
  string chargeCode() {return department_.chargeCode();}

 private:
  string name_;
  Department department_;
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

}
