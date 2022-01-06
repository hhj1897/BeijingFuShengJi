// AskDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Beijing.h"
#include "AskDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAskDlg dialog


CAskDlg::CAskDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAskDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAskDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CAskDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAskDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAskDlg, CDialog)
	//{{AFX_MSG_MAP(CAskDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAskDlg message handlers
