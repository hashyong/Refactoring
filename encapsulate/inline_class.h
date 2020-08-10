#pragma once

namespace ic {

// old
class TelephoneNumber {
 public:
  string areaCode() { return areaCode_; }
  string number() { return number_; }

 private:
  string areaCode_;
  string number_;
};

class Person {
 public:
  string officeAreaCode() { return telephoneNumber_.areaCode(); }
  string officeNumer() { return telephoneNumber_.number(); }
 private:
  TelephoneNumber telephoneNumber_;
};

// opt
class PersonOpt{
 public:
  string officeAreaCode() { return officeAreaCode_; }
  string officeNumer() { return officeNumber_; }
 private:
  string officeAreaCode_;
  string officeNumber_;
};

}