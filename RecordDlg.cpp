// RecordDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Beijing.h"
#include "RecordDlg.h"
#include "RecordType.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRecordDlg dialog


CRecordDlg::CRecordDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRecordDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CRecordDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CRecordDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRecordDlg)
	DDX_Control(pDX, IDC_LIST_NAME, m_Name);
	DDX_Control(pDX, IDC_LIST_MONEY, m_Money);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRecordDlg, CDialog)
	//{{AFX_MSG_MAP(CRecordDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRecordDlg message handlers

BOOL CRecordDlg::OnInitDialog()
{
	BOOL ret=CDialog::OnInitDialog();
	RecordType re[10];
	FILE * fp;
	if((fp=fopen("record.sav","rb"))==NULL)
	{
		fp=fopen("record.sav","wb");
		for(int cit=0;cit<=9;cit++)
		{
			re[cit].money=1000*(9-cit);
			strcpy(re[cit].name,"ϵͳ");
		}
		for(int coun=0;coun<=9;coun++)
		{
			fwrite(re+coun,sizeof(re[coun]),1,fp);
		}
		fclose(fp);
		fp=fopen("record.sav","rb");
	}
	for(int coun=0;coun<=9;coun++)
	{
		fread(re+coun,sizeof(re[coun]),1,fp);
	}
	fclose(fp);
	for(int i=0;i<=9;i++)
	{
		m_Name.AddString(re[i].name);
		CString s;
		s.Format("%ldԪ",re[i].money);
		m_Money.AddString(s);
	}
	return ret;
}
