/****************************************************************************
 * Copyright (C), 2011-2014, Wuhan Zoncare Bio-Medical Electronics CO., LTD 
 * All Rights Reserved.
 * 
 * Filename:       Context.h
 * Author:         huangguojun 
 * Last modified:  2017年11月23日 11时10分41秒
 *
 * Description:  
 *					
 * others:
 ****************************************************************************/

class State;
class Context 
{
public:
    Context(State* st);
    void OperationInterface();
    void OperationChangeState() ;
private:
    bool ChangeState(State* st);
    friend class State;
    State *_st;
};

