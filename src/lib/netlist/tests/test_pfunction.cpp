// license:GPL-2.0+
// copyright-holders:Couriersud

///
/// \file pfunction_test.cpp
///
/// tests for pfunction
///

#include "plib/ptests.h"

#include "plib/pfunction.h"

#define PFUNCEXPECT(formula, val) \
	EXPECT_EQ(val, plib::pfunction<double>(formula)());

TEST(pfunction, operators)
{
	PFUNCEXPECT("1==1", 1.0)
	PFUNCEXPECT("1 *0 == 2-1-1", 1.0)
	PFUNCEXPECT("0!=1", 1.0)
	PFUNCEXPECT("0<1",  1.0)
	PFUNCEXPECT("1>0",  1.0)
	PFUNCEXPECT("0<=1", 1.0)
	PFUNCEXPECT("1>=0", 1.0)
	PFUNCEXPECT("1<=1", 1.0)
	PFUNCEXPECT("1>=1", 1.0)
	EXPECT_EQ(1.0, plib::pfunction<double>("0!=a", {"a"})({1.0}));
}

TEST(pfunction, func_if)
{
	PFUNCEXPECT("if(1>0, 2, 0)", 2.0)
	PFUNCEXPECT("if(0>1, 2, 3)", 3.0)
	PFUNCEXPECT("if(sin(1)>0, 2, 3)", 3.0) // fail
	EXPECT_EQ( 1.0,   plib::pfunction<double>("if(A2>2.5, 0-A1, (0.07-(0.005*A1))*if(A0>2.5,1,0-1))", {"A0","A1","A2"})({1.0,-1.0,3.0}));
	EXPECT_EQ(-0.065, plib::pfunction<double>("if(A2>2.5, 0-A1, (0.07-(0.005*A1))*if(A0>2.5,1,0-1))", {"A0","A1","A2"})({1.0,1.0,1.0}));
	EXPECT_EQ( 0.065, plib::pfunction<double>("if(A2>2.5, 0-A1, (0.07-(0.005*A1))*if(A0>2.5,1,0-1))", {"A0","A1","A2"})({3.0,1.0,1.0}));
	//EXPECT(plib::pfunction<double>("if(A2>2.5, A1, if(A0>2.5,1,(0-1)))", {"A0","A1","A2"})({1.0,1.0,1.0}), -1.0)
	//PFUNCEXPECT("-1>-2", 1.0)
	EXPECT_TRUE(1.0 == plib::pfunction<double>("0!=a", {"a"})({1.0}));
}

