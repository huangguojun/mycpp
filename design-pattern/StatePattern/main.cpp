#include "State.h"
#include "Context.h"
#include <iostream>

int main() {
    State *st = new ConcreteStateA();
    Context *con = new Context(st);
    con->OperationInterface();
    con->OperationChangeState();
    con->OperationInterface();

    delete con;
    delete st;

    return 0;
}
