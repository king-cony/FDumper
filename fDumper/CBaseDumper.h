#pragma once

#include "pch.h"

class CBaseDumper
{
public:
	virtual ~CBaseDumper() {}
	virtual int Download() = 0;
	virtual int QueryAPI() = 0;
};