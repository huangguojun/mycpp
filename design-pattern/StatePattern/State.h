/****************************************************************************
 * Copyright (C), 2011-2014, Wuhan Zoncare Bio-Medical Electronics CO., LTD 
 * All Rights Reserved.
 * 
 * Filename:       State.h
 * Author:         huangguojun 
 * Last modified:  2017年11月23日 11时01分49秒
 *
 * Description:  
 *					
 * others:
 ****************************************************************************/
class Context;

class State
{
public:
	State();
    virtual ~State(); 
    virtual void OperationChangeState(Context*) = 0;
    virtual void OperationInterface(Context*) = 0;
protected:
    bool ChangeState(Context* con, State *st);
};


class ConcreteStateA :public State
{
public:
    virtual void OperationChangeState(Context* con) override;
    virtual void OperationInterface(Context* con) override;
};

class ConcreteStateB :public State
{
public:
    void OperationChangeState(Context* con) override;
    void OperationInterface(Context* con) override;
};

