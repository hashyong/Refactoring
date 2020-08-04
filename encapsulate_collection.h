#pragma once

#include <set>

namespace refactor {
// old
class Person {
 public:
  Person(const string& name) {
    this->name_ = name;
    courses_ = {};
  }

  string& getName() { return name_; }

  set<string>& getCourses() { return courses_; }
  void setCourses(const set<string>& courses) {
    courses_ = courses;
  }

 private:
  string name_;
  set<string> courses_;
};

//new
class PersonOpt {
 public:
  PersonOpt(const string& name) {
    this->name_ = name;
    courses_ = {};
  }

  const string& getName() { return name_; }

  const set<string>& getCourses() { return courses_; }
  void setCourses(const set<string>& courses) {
    courses_ = courses;
  }

  //
  void addCourses(const string& course) {
    courses_.insert(course);
  }

  void removeCourses(const string& course) {
    auto iter = courses_.find(course);
    if(iter == courses_.end()) {
      return;
    }
    courses_.erase(iter);
  }

 private:
  string name_;
  set<string> courses_;
};
}
