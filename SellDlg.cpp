// SellDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Beijing.h"
#include "SellDlg.h"
#include "ProductType.h"
#include "BeijingDlg.h"
#include "stdlib.h"
#include "string.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// SellDlg dialog
extern CBeijingDlg *pofMainFrame;
extern ProductType products[9];

SellDlg::SellDlg(CWnd* pParent /*=NULL*/)
	: CDialog(SellDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(SellDlg)
	m_Sell_Num = 0;
	//}}AFX_DATA_INIT
}


void SellDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(SellDlg)
	DDX_Control(pDX, IDC_SELL_NAME, m_Sell_Name);
	DDX_Control(pDX, IDC_SPIN1, m_spin);
	DDX_Text(pDX, IDC_EDIT1, m_Sell_Num);
	DDV_MinMaxInt(pDX, m_Sell_Num, 0, 30000);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(SellDlg, CDialog)
	//{{AFX_MSG_MAP(SellDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// SellDlg message handlers

SellDlg::OnInitDialog()
{
	BOOL re=CDialog::OnInitDialog();
	m_Sell_Name.SetWindowText(products[pofMainFrame->m_Sell_Select].m_Name);
	m_Sell_Num=products[pofMainFrame->m_Sell_Select].m_Pro_Num;
	m_spin.SetPos(m_Sell_Num);
	m_spin.SetRange(0,m_Sell_Num);
	UpdateData(0);
	return re;
}

void SellDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData();
	if(m_Sell_Num>products[pofMainFrame->m_Sell_Select].m_Pro_Num)
	{
		MessageBox("俺没那么多呀!","日记");
	}
	else
	{
		products[pofMainFrame->m_Sell_Select].m_Pro_Num-=m_Sell_Num;
		pofMainFrame->m_Product_Num-=m_Sell_Num;
		pofMainFrame->m_Cash_Num+=m_Sell_Num*products[pofMainFrame->m_Sell_Select].m_Price;
		CString s;
		s.Format("俺的现金:%ld元",pofMainFrame->m_Cash_Num);
		pofMainFrame->m_Cash.SetWindowText(s);
		int i=pofMainFrame->m_Sell_Name.FindStringExact(-1,products[pofMainFrame->m_Sell_Select].m_Name);
		pofMainFrame->m_Sell_Name.DeleteString(i);
		pofMainFrame->m_Sell_Price.DeleteString(i);
		if(products[pofMainFrame->m_Sell_Select].m_Pro_Num>0)
		{
			char str[100];
			sprintf(str,"%.2f元,%d件",products[pofMainFrame->m_Sell_Select].m_Ave_Price,products[pofMainFrame->m_Sell_Select].m_Pro_Num);
			pofMainFrame->m_Sell_Name.AddString(products[pofMainFrame->m_Sell_Select].m_Name);
			pofMainFrame->m_Sell_Price.AddString(str);
		}
		for(int j=0;j<=8;j++)
		{
			if(products[j].m_Pro_Num>0)
			{
				break;
			}
		}
		if(j==9)
		{
			pofMainFrame->m_Sell_Select=-1;
		}
		else
		{
			pofMainFrame->m_Sell_Name.SetCurSel(0);
			pofMainFrame->m_Sell_Price.SetCurSel(0);
			for(int k=0;k<=8;k++)
			{
				char string[100];
				pofMainFrame->m_Sell_Name.GetText(0,string);
				if(strcmp(string,products[k].m_Name)==0)
				{
					pofMainFrame->m_Sell_Select=k;
					break;
				}
			}
		}
		CDialog::OnOK();
	}
}
