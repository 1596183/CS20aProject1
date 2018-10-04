#include<iostream>
#include<cstring>
using namespace std;

class Animal
{
protected:
int age;
char name[10];
public:
void set_value (int a, char name[10])
{
age = a;
this->name[10] = name[10];
}
};
class Zebra: public Animal
{
public:
int Zeb_message()
{
cout<< "zebra's name "<< name <<"\nAge "<< age << "\nCome from Africa \n";
return 0;
}
};
class Dolphin: public Animal
{
public:
int Dolph_message()
{
cout<< "Dolphin's name "<< name << "\nAge " <<age << "\nCome from Ocean\n";
return 0;
}
};
int main ()
{
Zebra obj1;
Dolphin obj2;
char name1[10]="ZEBRA";
char name2[10]="DOLPHIN";
obj1.set_value (1,name1);
obj2.set_value (2,name2);
obj1.Zeb_message() ;
obj2.Dolph_message() ;
return 0;
}