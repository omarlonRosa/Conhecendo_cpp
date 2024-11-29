#include <iostream>
using std::string;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
  private:
    string Name;
    string Company;
    int Age;

  public:
    void setName(string name) { //setter
        Name = name;
    }
    string getName() { //getter
        return Name;
    }

    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }

    void setAge(int age) {
      if(age>18)  
      Age = age;
    }
    int getAge() {
        return Age;
    }

    void IntroduceYourself(){
    std::cout << " Name - " << Name << std::endl;
      std::cout << " Company - " << Company << std::endl;
      std::cout << " Age _ " << Age << std::endl;
    }

    Employee(string name, string company, int age){
      Name = name;
      Company = company;
      Age = age;
    }
    void AskForPromotion() {
      if (Age > 30)
        std::cout << Name << " got promoted!" << std::endl;
      else 
        std::cout << Name << ", sorry NO promotion for you!" << std::endl;
    }
};

int main () 
{
  Employee employee1 = Employee(" Marlon", "Ulha Agencia", 32);
  Employee employee2 = Employee("Jonh", "Amazon", 23);

  employee1.AskForPromotion();
  employee2.AskForPromotion();

};
