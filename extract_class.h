#pragma once

namespace ec {
// old
class Person {
 public:
  const string& name() { return name_; }
  void setName(const string& name) { name_ = name; }

  string telephoneNumber() { return officeAreaCode_ + officeNumber_; }

  const string& officeAreaCode() { return officeAreaCode_; }
  void setOfficeAreaCode(const string& code) { officeAreaCode_ = code; }

  const string& officeNumber() { return officeNumber_; }
  void setOfficeNumber(const string& number) { officeNumber_ = number; }

 private:
  string name_;
  string officeAreaCode_;
  string officeNumber_;
};

// opt
class TelephoneNumber {
 public:
  string toString() { return areaCode_ + number_; }

  const string& areaCode() { return areaCode_; }
  void setAreaCode(const string& code) { areaCode_ = code; }

  const string& number() { return number_; }
  void setNumber(const string& number) { number_ = number; }

 private:
  string areaCode_;
  string number_;
};

class PersonOpt {
 public:
  PersonOpt() { telephoneNumber_ = {}; }

  const string& name() { return name_; }
  void setName(const string& name) { name_ = name; }

  string telephoneNumber() { return telephoneNumber_.toString(); }

  const string& officeAreaCode() { return telephoneNumber_.areaCode(); }
  void setOfficeAreaCode(const string& code) { telephoneNumber_.setAreaCode(code); }

  const string& officeNumber() { return telephoneNumber_.number(); }
  void setOfficeNumber(const string& number) { telephoneNumber_.setNumber(number); }

 private:
  string name_;
  TelephoneNumber telephoneNumber_;
};

}
