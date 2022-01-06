// HouseDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Beijing.h"
#include "HouseDlg.h"
#include "BeijingDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// HouseDlg dialog
extern CBeijingDlg *pofMainFrame;

HouseDlg::HouseDlg(CWnd* pParent /*=NULL*/)
	: CDialog(HouseDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(HouseDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void HouseDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(HouseDlg)
	DDX_Control(pDX, IDC_PRICE, m_Price);
	DDX_Control(pDX, IDC_NOTE, m_Note);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(HouseDlg, CDialog)
	//{{AFX_MSG_MAP(HouseDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// HouseDlg message handlers

BOOL HouseDlg::OnInitDialog()
{
	BOOL re=CDialog::OnInitDialog();
	CString s;
	m_House_Price=pofMainFrame->m_Cash_Num*0.666;
	s.Format("您目前的房子只能放%d件东西",pofMainFrame->m_Max_Num);
	m_Note.SetWindowText(s);
	s.Format("您可租放%d件东西的房子,须%ld元",pofMainFrame->m_Max_Num+15,m_House_Price);
	m_Price.SetWindowText(s);
	return re;
}

void HouseDlg::OnOK() 
{
	// TODO: Add extra validation here
	pofMainFrame->m_Max_Num+=15;
	pofMainFrame->m_Cash_Num-=m_House_Price;
	CString s;
	s.Format("俺的现金:%ld元",pofMainFrame->m_Cash_Num);
	pofMainFrame->m_Cash.SetWindowText(s);
	CDialog::OnOK();
}
