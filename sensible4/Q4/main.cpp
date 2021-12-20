/*
 * Add the missing code to Chicken and Egg so the following actions are completed:
 * - Chicken implements the Bird class
 * - A Chicken lays an egg that will hatch into a new Chicken
 * - Eggs from other types of birds should hatch into a new bird of their parents
 * - Hatching an egg for the second time throws a std::logic_error
 */

#include <iostream>
#include <functional>

class Egg;

class Bird{
public:
    virtual ~Bird() {};
    virtual Egg* lay() = 0;
};

class Egg{
public:
    Egg(std::function<Bird* ()> createBird){
        throw std::logic_error("Waiting to be implemented");
    }
    Bird* hatch(){
        throw std::logic_error("Waiting to be implemented");
    }
};

class Chicken: public Bird{
public:
    Chicken(){}

    Egg* lay(){
        throw std::logic_error("Waiting to be implemented");
    }
};

int main()
{
    Bird* chicken = new Chicken();

    Egg* egg1 = chicken->lay();
    Bird* childChicken1 = egg1->hatch();
}
