#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
        string Name;
        string Company;
        int Age;
    public:
        Employee(string name, string company, int age){
            Name = name;
            Company = company;
            Age = age;
        }

        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }
        void setAge(int age){
            Age = age;
        }
        int getAge(){
            return Age;
        }

        void baseIntroduction(){
            cout << "Name = " << Name << endl;
            cout << "Company = " << Company << endl;
            cout << "Age = " << Age << endl;
        }

        virtual void work(){
            cout << "Doing general work!" << endl;
        }
};

class Developer: public Employee{
    private:
        string FavLanguage;
    
    public:
        Developer(string name, string company, int age, string favLanguage): Employee(name, company, age){
            FavLanguage = favLanguage;
        }

        void setFavLanguage(string favLanguage){
            FavLanguage = favLanguage;
        }
        string getFavLanguage(){
            return FavLanguage;
        }

        void Introduction(){
            baseIntroduction();
            cout << "Favourite Language = " << FavLanguage << endl;
        }

        void fixBug(){
            cout << getName() << " fixed a bug using " << getFavLanguage() << endl;
        }

        void work(){
            cout << "Doing Coding work" << endl;
        }
};

int main(){
    Employee emp1 = Employee("Nimit", "Amazon", 21);
    emp1.baseIntroduction();

    Employee emp2 = Employee("Sajal", "Microsoft", 25);
    emp2.baseIntroduction();

    Developer d1 = Developer("Parag", "Apple", 28, "Python");
    d1.Introduction();
    d1.fixBug();

    Developer d2 = Developer("Gattani", "Gogle", 38, "Java");
    d2.Introduction();
    d2.fixBug();

    Employee *e = &d1;
    e->work();

    return 0;
}