#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include "IStrategy.h"



class CContext
{
public:
	CContext(IStrategy *pStrategy);
    ~CContext(void);
    
    void Operate(void);

private:
    IStrategy *m_pStrategy;
};

#endif