// LoadDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Beijing.h"
#include "LoadDlg.h"
#include "BeijingDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLoadDlg dialog
extern CBeijingDlg *pofMainFrame;

CLoadDlg::CLoadDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CLoadDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLoadDlg)
	m_Load_Num = 0;
	//}}AFX_DATA_INIT
}


void CLoadDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLoadDlg)
	DDX_Control(pDX, IDC_SPIN1, m_spin);
	DDX_Text(pDX, IDC_EDIT1, m_Load_Num);
	DDV_MinMaxLong(pDX, m_Load_Num, 0, 2000000000);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLoadDlg, CDialog)
	//{{AFX_MSG_MAP(CLoadDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLoadDlg message handlers

BOOL CLoadDlg::OnInitDialog()
{
	BOOL re=CDialog::OnInitDialog();
	m_Load_Num=pofMainFrame->m_Money_Num;
	m_spin.SetRange32(0,m_Load_Num);
	m_spin.SetPos(m_Load_Num);
	UpdateData(0);
	return re;
}

void CLoadDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData();
	if(m_Load_Num>pofMainFrame->m_Money_Num)
	{
		MessageBox("您哪里有那么多存款!","银行");
	}
	else 
	{
		CString s;
		pofMainFrame->m_Cash_Num+=m_Load_Num;
		pofMainFrame->m_Money_Num-=m_Load_Num;
		s.Format("俺的现金:%ld元",pofMainFrame->m_Cash_Num);
		pofMainFrame->m_Cash.SetWindowText(s);
		s.Format("俺的存款:%ld元",pofMainFrame->m_Money_Num);
		pofMainFrame->m_Money.SetWindowText(s);
		CDialog::OnOK();
	}
}

void CLoadDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	MessageBox("没钱就别瞎倒乱!滚!","银行");
	CDialog::OnCancel();
}
