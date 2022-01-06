// ProductType.cpp: implementation of the ProductType class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Beijing.h"
#include "ProductType.h"
#include "string.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

ProductType::ProductType()
{

}

ProductType::~ProductType()
{

}

void ProductType::InitProduct(char *name, long max, long min)
{
	strcpy(m_Name,name);
	m_Max_Price=max;
	m_Min_Price=min;
	m_Pro_Appear=0;
	m_Pro_Num=0;
	m_Index=1;
	m_Ave_Price=0.0;
}
