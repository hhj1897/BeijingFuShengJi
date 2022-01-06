// ProductType.h: interface for the ProductType class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PRODUCTTYPE_H__574999D9_899B_41B7_9D79_F76FE7F19E30__INCLUDED_)
#define AFX_PRODUCTTYPE_H__574999D9_899B_41B7_9D79_F76FE7F19E30__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class ProductType  
{
public:
	float m_Ave_Price;
	void InitProduct(char *name,long max,long min);
	char m_Name[50];
	BOOL m_Pro_Appear;
	int m_Pro_Num;
	float m_Index;
	long m_Min_Price;
	long m_Max_Price;
	long m_Price;
	ProductType();
	virtual ~ProductType();
};

#endif // !defined(AFX_PRODUCTTYPE_H__574999D9_899B_41B7_9D79_F76FE7F19E30__INCLUDED_)
