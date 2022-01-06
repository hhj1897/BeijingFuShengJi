// BuyCardDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Beijing.h"
#include "BuyCardDlg.h"
#include "BeijingDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// BuyCardDlg dialog
extern CBeijingDlg *pofMainFrame;

BuyCardDlg::BuyCardDlg(CWnd* pParent /*=NULL*/)
	: CDialog(BuyCardDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(BuyCardDlg)
	m_Card_Num = 0;
	//}}AFX_DATA_INIT
}


void BuyCardDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(BuyCardDlg)
	DDX_Control(pDX, IDC_NUM, m_Note_Num);
	DDX_Control(pDX, IDC_SPIN2, m_spin);
	DDX_Text(pDX, IDC_EDIT1, m_Card_Num);
	DDV_MinMaxLong(pDX, m_Card_Num, 0, 2000000000);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(BuyCardDlg, CDialog)
	//{{AFX_MSG_MAP(BuyCardDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// BuyCardDlg message handlers

BOOL BuyCardDlg::OnInitDialog()
{
	BOOL re=CDialog::OnInitDialog();
	m_Max_Card_Num=pofMainFrame->m_Cash_Num/2;
	m_Card_Num=m_Max_Card_Num;
	CString s;
	s.Format("您目前有彩票%ld张",pofMainFrame->m_Num_Card);
	m_Note_Num.SetWindowText(s);
	m_spin.SetRange32(0,m_Max_Card_Num);
	m_spin.SetPos(m_Card_Num);
	UpdateData(0);
	return re;
}

void BuyCardDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData();
	if(m_Card_Num>m_Max_Card_Num)
	{
		MessageBox("对不起,您没有那么多现金!","体育彩票");
	}
	else
	{
		pofMainFrame->m_Num_Card+=m_Card_Num;
		pofMainFrame->m_Cash_Num-=m_Card_Num*2;
		CString s;
		s.Format("俺的现金:%ld元",pofMainFrame->m_Cash_Num);
		pofMainFrame->m_Cash.SetWindowText(s);
		CDialog::OnOK();
	}
}
