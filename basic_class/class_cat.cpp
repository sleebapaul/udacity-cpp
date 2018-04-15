/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include "class_cat.hpp"

using namespace std;

int main()
{
    Cats cat1;
    Cats cat2;

    cat1.setName("Trixie");
    cat2.setName("Kali");

    cat1.setBreed("Persian");
    cat2.setBreed("Siamese");

    cat1.setAge(2);
    cat2.setAge(1);

    cat1.printInfo();
    cat2.printInfo();

    return 0;
}