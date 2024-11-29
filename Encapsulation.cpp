#include <iostream>
using std::string;

class Employee {
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
       if (age>=18)
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
};

int main () 
{
  Employee employee1 = Employee(" Marlon", "Ulha Agencia", 35);
  employee1.IntroduceYourself();

  Employee employee2 = Employee("Jonh", "Amazon", 23);
  employee2.IntroduceYourself();

  employee1.setAge(15);
  std::cout << employee1.getName() << " is " << employee1.getAge() << " years old. " << std::endl;
  
}
