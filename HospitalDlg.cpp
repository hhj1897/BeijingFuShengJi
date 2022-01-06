// HospitalDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Beijing.h"
#include "HospitalDlg.h"
#include "BeijingDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// HospitalDlg dialog
extern CBeijingDlg *pofMainFrame;

HospitalDlg::HospitalDlg(CWnd* pParent /*=NULL*/)
	: CDialog(HospitalDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(HospitalDlg)
	m_Hosp_Num = 0;
	//}}AFX_DATA_INIT
}


void HospitalDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(HospitalDlg)
	DDX_Control(pDX, IDC_SPIN1, m_spin);
	DDX_Text(pDX, IDC_EDIT1, m_Hosp_Num);
	DDV_MinMaxInt(pDX, m_Hosp_Num, 0, 100);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(HospitalDlg, CDialog)
	//{{AFX_MSG_MAP(HospitalDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// HospitalDlg message handlers

void HospitalDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData();
	if(m_Hosp_Num<=m_Max_Num)
	{
		pofMainFrame->m_Health_Num+=m_Hosp_Num;
		pofMainFrame->m_Cash_Num-=m_Hosp_Num*1500;
		CString s;
		s.Format("俺的现金:%ld元",pofMainFrame->m_Cash_Num);
		pofMainFrame->m_Cash.SetWindowText(s);
		s.Format("俺的健康:%d%%元",pofMainFrame->m_Health_Num);
		pofMainFrame->m_Health.SetWindowText(s);
		CDialog::OnOK();
	}
	else
	{
		MessageBox("对不起,您治不了那么多点数!","医院");
	}
}

BOOL HospitalDlg::OnInitDialog()
{
	BOOL re=CDialog::OnInitDialog();
	m_Max_Num=((100-pofMainFrame->m_Health_Num)>pofMainFrame->m_Cash_Num/1500)?pofMainFrame->m_Cash_Num/1500:(100-pofMainFrame->m_Health_Num);
	m_Hosp_Num=m_Max_Num;
	m_spin.SetPos(m_Hosp_Num);
	m_spin.SetRange(0,m_Max_Num);
	UpdateData(0);
	return re;
}
