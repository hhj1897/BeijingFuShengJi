// ReturnDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Beijing.h"
#include "ReturnDlg.h"
#include "BeijingDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReturnDlg dialog
extern CBeijingDlg *pofMainFrame;

CReturnDlg::CReturnDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CReturnDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReturnDlg)
	m_Return_Num = 0;
	//}}AFX_DATA_INIT
}


void CReturnDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReturnDlg)
	DDX_Control(pDX, IDC_SPIN1, m_spin);
	DDX_Text(pDX, IDC_EDIT1, m_Return_Num);
	DDV_MinMaxLong(pDX, m_Return_Num, 0, 2000000000);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReturnDlg, CDialog)
	//{{AFX_MSG_MAP(CReturnDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReturnDlg message handlers

BOOL CReturnDlg::OnInitDialog()
{
	BOOL re=CDialog::OnInitDialog();
	m_Max_Num=(pofMainFrame->m_Own_Num>pofMainFrame->m_Cash_Num)?pofMainFrame->m_Cash_Num:pofMainFrame->m_Own_Num;
	m_Return_Num=m_Max_Num;
	m_spin.SetRange32(0,m_Max_Num);
	m_spin.SetPos(m_Return_Num);
	UpdateData(0);
	return re;
}

void CReturnDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData();
	if(m_Return_Num>m_Max_Num)
	{
		MessageBox("俺哪能还这么多钱!","邮局");
	}
	else
	{
		CString s;
		pofMainFrame->m_Cash_Num-=m_Return_Num;
		pofMainFrame->m_Own_Num-=m_Return_Num;
		s.Format("俺的现金:%ld元",pofMainFrame->m_Cash_Num);
		pofMainFrame->m_Cash.SetWindowText(s);
		s.Format("俺欠村长:%ld元",pofMainFrame->m_Own_Num);
		pofMainFrame->m_Own.SetWindowText(s);
		CDialog::OnOK();
	}
}

void CReturnDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	MessageBox("还是快点还了吧，要不然村长会找老乡揍我的!","邮局");
	CDialog::OnCancel();
}
