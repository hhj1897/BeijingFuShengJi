// BuyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Beijing.h"
#include "BuyDlg.h"
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
// BuyDlg dialog
extern CBeijingDlg *pofMainFrame;
extern ProductType products[9];

BuyDlg::BuyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(BuyDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(BuyDlg)
	m_Buy_Num = 0;
	//}}AFX_DATA_INIT
}


void BuyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(BuyDlg)
	DDX_Control(pDX, IDC_NAME, m_Name);
	DDX_Control(pDX, IDC_SPIN1, m_spin);
	DDX_Text(pDX, IDC_EDIT1, m_Buy_Num);
	DDV_MinMaxInt(pDX, m_Buy_Num, 0, 30000);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(BuyDlg, CDialog)
	//{{AFX_MSG_MAP(BuyDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// BuyDlg message handlers

BOOL BuyDlg::OnInitDialog()
{
	BOOL re=CDialog::OnInitDialog();
	m_Name.SetWindowText(products[pofMainFrame->m_Buy_Select].m_Name);
	m_Max_Product_Num=((pofMainFrame->m_Cash_Num)/(products[pofMainFrame->m_Buy_Select].m_Price)>pofMainFrame->m_Max_Num-pofMainFrame->m_Product_Num)?(pofMainFrame->m_Max_Num-pofMainFrame->m_Product_Num):(pofMainFrame->m_Cash_Num)/(products[pofMainFrame->m_Buy_Select].m_Price);
	m_Buy_Num=m_Max_Product_Num;
	m_spin.SetPos(m_Buy_Num);
	m_spin.SetRange(0,m_Max_Product_Num);
	UpdateData(0);
	return re;
}

void BuyDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData();
	if(m_Buy_Num>m_Max_Product_Num)
	{
		MessageBox("俺买不了这么多东西啊!","日记");
	}
	else if(m_Buy_Num!=0)
	{
		products[pofMainFrame->m_Buy_Select].m_Ave_Price=(float)(products[pofMainFrame->m_Buy_Select].m_Ave_Price*products[pofMainFrame->m_Buy_Select].m_Pro_Num+products[pofMainFrame->m_Buy_Select].m_Price*m_Buy_Num)/(float)(m_Buy_Num+products[pofMainFrame->m_Buy_Select].m_Pro_Num);
		products[pofMainFrame->m_Buy_Select].m_Pro_Num+=m_Buy_Num;
		pofMainFrame->m_Product_Num+=m_Buy_Num;
		pofMainFrame->m_Cash_Num-=m_Buy_Num*products[pofMainFrame->m_Buy_Select].m_Price;
		CString s;
		s.Format("俺的现金:%ld元",pofMainFrame->m_Cash_Num);
		pofMainFrame->m_Cash.SetWindowText(s);
		int i=pofMainFrame->m_Sell_Name.FindStringExact(-1,products[pofMainFrame->m_Buy_Select].m_Name);
		if(i!=LB_ERR)
		{
			pofMainFrame->m_Sell_Name.DeleteString(i);
			pofMainFrame->m_Sell_Price.DeleteString(i);
		}
		pofMainFrame->m_Sell_Name.AddString(products[pofMainFrame->m_Buy_Select].m_Name);
		char str[50];
		sprintf(str,"%.2f元,%d件",products[pofMainFrame->m_Buy_Select].m_Ave_Price,products[pofMainFrame->m_Buy_Select].m_Pro_Num);
		pofMainFrame->m_Sell_Price.AddString(str);
		pofMainFrame->m_Sell_Price.SetCurSel(0);
		pofMainFrame->m_Sell_Name.SetCurSel(0);
		char string[100];
		pofMainFrame->m_Sell_Name.GetText(0,string);
		for(i=0;i<=8;i++)
		{
			if(strcmp(products[i].m_Name,string)==0)
			{
				pofMainFrame->m_Sell_Select=i;
				break;
			}
		}
		CDialog::OnOK();
	}
	else if(m_Buy_Num==0)
	{
		CDialog::OnOK();
	}
}
