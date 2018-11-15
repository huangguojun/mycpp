/****************************************************************************
 * Copyright (C), 2011-2014, Wuhan Zoncare Bio-Medical Electronics CO., LTD 
 * All Rights Reserved.
 * 
 * Filename:       Context.cpp
 * Author:         huangguojun 
 * Last modified:  2017年11月23日 11时10分16秒
 *
 * Description:  
 *					
 * others:
 ****************************************************************************/
#include "Context.h"
#include "State.h"

using namespace std;

Context::Context(State* st) 
{
	_st = st;
}

void Context::OperationInterface() 
{
    _st->OperationInterface(this);
}

void Context::OperationChangeState() 
{
    _st->OperationChangeState(this); 
}

bool Context::ChangeState(State* st)
{
    _st = st;
    return true;
}

