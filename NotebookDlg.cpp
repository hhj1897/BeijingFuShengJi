// NotebookDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Beijing.h"
#include "NotebookDlg.h"
#include "ProductType.h"
#include "string.h"
#include "stdlib.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// NotebookDlg dialog
extern ProductType products[9];

NotebookDlg::NotebookDlg(CWnd* pParent /*=NULL*/)
	: CDialog(NotebookDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(NotebookDlg)
	//}}AFX_DATA_INIT
}


void NotebookDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(NotebookDlg)
	DDX_Control(pDX, IDC_8, m_Index_8);
	DDX_Control(pDX, IDC_7, m_Index_7);
	DDX_Control(pDX, IDC_6, m_Index_6);
	DDX_Control(pDX, IDC_5, m_Index_5);
	DDX_Control(pDX, IDC_4, m_Index_4);
	DDX_Control(pDX, IDC_3, m_Index_3);
	DDX_Control(pDX, IDC_2, m_Index_2);
	DDX_Control(pDX, IDC_1, m_Index_1);
	DDX_Control(pDX, IDC_0, m_Index_0);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(NotebookDlg, CDialog)
	//{{AFX_MSG_MAP(NotebookDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// NotebookDlg message handlers

BOOL NotebookDlg::OnInitDialog()
{
	BOOL re=CDialog::OnInitDialog();
	char str[30];
	char str1[150];
	sprintf(str,":%.2f±¶",products[0].m_Index);
	strcpy(str1,products[0].m_Name);
	strcat(str1,str);
	m_Index_0.SetWindowText(str1);
	sprintf(str,":%.2f±¶",products[1].m_Index);
	strcpy(str1,products[1].m_Name);
	strcat(str1,str);
	m_Index_1.SetWindowText(str1);
	sprintf(str,":%.2f±¶",products[2].m_Index);
	strcpy(str1,products[2].m_Name);
	strcat(str1,str);
	m_Index_2.SetWindowText(str1);
	sprintf(str,":%.2f±¶",products[3].m_Index);
	strcpy(str1,products[3].m_Name);
	strcat(str1,str);
	m_Index_3.SetWindowText(str1);
	sprintf(str,":%.2f±¶",products[4].m_Index);
	strcpy(str1,products[4].m_Name);
	strcat(str1,str);
	m_Index_4.SetWindowText(str1);
	sprintf(str,":%.2f±¶",products[5].m_Index);
	strcpy(str1,products[5].m_Name);
	strcat(str1,str);
	m_Index_5.SetWindowText(str1);
	sprintf(str,":%.2f±¶",products[6].m_Index);
	strcpy(str1,products[6].m_Name);
	strcat(str1,str);
	m_Index_6.SetWindowText(str1);
	sprintf(str,":%.2f±¶",products[7].m_Index);
	strcpy(str1,products[7].m_Name);
	strcat(str1,str);
	m_Index_7.SetWindowText(str1);
	sprintf(str,":%.2f±¶",products[8].m_Index);
	strcpy(str1,products[8].m_Name);
	strcat(str1,str);
	m_Index_8.SetWindowText(str1);
	return re;
}
