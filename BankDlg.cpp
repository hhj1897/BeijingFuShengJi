// BankDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Beijing.h"
#include "BankDlg.h"
#include "BeijingDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// BankDlg dialog
extern CBeijingDlg *pofMainFrame;

BankDlg::BankDlg(CWnd* pParent /*=NULL*/)
	: CDialog(BankDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(BankDlg)
	m_Save_Num = 0;
	//}}AFX_DATA_INIT
	m_Save_Num=pofMainFrame->m_Cash_Num;
}

void BankDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(BankDlg)
	DDX_Control(pDX, IDC_SPIN1, m_spin);
	DDX_Text(pDX, IDC_SAVE, m_Save_Num);
	DDV_MinMaxLong(pDX, m_Save_Num, 0, 2000000000);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(BankDlg, CDialog)
	//{{AFX_MSG_MAP(BankDlg)
	ON_BN_CLICKED(IDSAVE, OnSave)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// BankDlg message handlers


BOOL BankDlg::OnInitDialog()
{
	BOOL re=CDialog::OnInitDialog();
	m_spin.SetRange32(0,pofMainFrame->m_Cash_Num);
	m_spin.SetPos(m_Save_Num);
	UpdateData(0);
	return re;
}

void BankDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	MessageBox("没钱倒什么乱!滚!","银行");
	CDialog::OnCancel();
}

void BankDlg::OnSave() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	if(m_Save_Num>pofMainFrame->m_Cash_Num)
	{
		MessageBox("对不起,您没那么多现钱!","银行");
	}
	else
	{
		CString s;
		pofMainFrame->m_Cash_Num-=m_Save_Num;
		pofMainFrame->m_Money_Num+=m_Save_Num;
		s.Format("俺的现金:%ld元",pofMainFrame->m_Cash_Num);
		pofMainFrame->m_Cash.SetWindowText(s);
		s.Format("俺的存款:%ld元",pofMainFrame->m_Money_Num);
		pofMainFrame->m_Money.SetWindowText(s);
		CDialog::OnOK();
	}
}
