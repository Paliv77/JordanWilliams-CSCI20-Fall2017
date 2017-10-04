
#include <iostream>
using namespace std;

class Person {
   public:
      void SetFirstName(string firstNameToSet);
      string GetFirstName() const;
   private:
      string firstName;
};

void Person::SetFirstName(string firstNameToSet) {
   firstName = firstNameToSet;

   return;
}

string Person::GetFirstName() const {
   return firstName;
}

int main() {
   string userName = "Max";
   Person person1;

   person1.SetFirstName(userName);
   cout << "He is " << person1.GetFirstName();

   return 0;
}