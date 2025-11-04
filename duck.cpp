#include "duck.h"

using namespace std;

/* TODO */
void Duck::performFly(){
    flyBehavior->fly();
}

/* TODO */
void Duck::performQuack(){
    quackBehavior->quack();
}

/* TODO */
void Duck::setFlyBehavior(FlyBehavior* fb){
    flyBehavior = fb;
}

/* TODO */
void Duck::setQuackBehavior(QuackBehavior* qb){
    quackBehavior = qb;
}


/* TODO */
MallardDuck::MallardDuck() {
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}

/* TODO */
RedheadDuck::RedheadDuck() {
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}

/* TODO */
RubberDuck::RubberDuck() {
    flyBehavior = new FlyNoWay();
    quackBehavior = new Squeak();
}

/* TODO */
DecoyDuck::DecoyDuck() {
    flyBehavior = new FlyNoWay();
    quackBehavior = new MuteQuack();
}

/* TODO */
ModelDuck::ModelDuck() {
    flyBehavior = new FlyNoWay();
    quackBehavior = new MuteQuack();
}