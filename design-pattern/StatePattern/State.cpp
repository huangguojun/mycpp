/****************************************************************************
 * Copyright (C), 2011-2014, Wuhan Zoncare Bio-Medical Electronics CO., LTD 
 * All Rights Reserved.
 * 
 * Filename:       State.cpp
 * Author:         huangguojun 
 * Last modified:  2017年11月23日 11时01分16秒
 *
 * Description:  
 *					
 * others:
 ****************************************************************************/

#include "State.h"
#include "Context.h"
#include <iostream>
using namespace std;

State::State()
{
}

State::~State()
{

}

bool State::ChangeState(Context* con, State *st)
{
    con->ChangeState(st);
}


void ConcreteStateA::OperationChangeState(Context* con) 
{
    OperationInterface(con);
    this->ChangeState(con, new ConcreteStateB());
}

void ConcreteStateA::OperationInterface(Context* con) 
{
    cout << "ConcreteStateA::OperationInterface..." << endl;
}

void ConcreteStateB::OperationChangeState(Context* con) 
{
    OperationInterface(con);
    this->ChangeState(con, new ConcreteStateA());
}

void ConcreteStateB::OperationInterface(Context* con) 
{
    cout << "ConcreteStateB::OperationInterface..." << endl;
}

