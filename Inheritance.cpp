#include <iostream>
using std::string;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Employee: AbstractEmployee {
  private:
    string Company;
    int Age;
  protected:
    string Name;

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

class Developer:public Employee {
  public: 
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string FavProgrammingLanguage)
      :Employee(name, company, age)
    { FavProgrammingLanguage = FavProgrammingLanguage; }
    void FixBug(){
    std::cout << Name << " fixed bug using " << FavProgrammingLanguage  << std::endl;

    }
};

class Teacher:public Employee {
  public: 
  string Subject;
  void PrepareLesson() {
    std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
  } 
  Teacher(string name, string company, int age, string subject)
    :Employee(name, company, age)
  {
    Subject = subject;
  }
};

int main () 
{
  Developer d = Developer("Marlon", "Ulha Agencia", 32, "C++");
  Teacher t = Teacher("Joana", "Exito school", 25, "History");
  d.FixBug();
  d.AskForPromotion();
  t.PrepareLesson();
  t.AskForPromotion();


};
