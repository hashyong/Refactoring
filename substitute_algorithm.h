#pragma once

namespace sa {
// 本质上就是替换算法
std::set<std::string> people;
string foundPerson(const string& key) {
  for(auto& item : people) {
    if(item == "1") {
      return "1";
    }

    if(item == "2") {
      return "2";
    }

    if(item == "3") {
      return "3";
    }
  }

  return "";
}

string foundPersonOpt(const string& key) {
  if(people.find(key) != people.end()) {
    return key;
  }

  return "";
}

}