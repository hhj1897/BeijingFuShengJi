#if !defined(AFX_HOUSEDLG_H__6A9B6B2E_FEF6_4310_BBE3_AAC8EEEE8097__INCLUDED_)
#define AFX_HOUSEDLG_H__6A9B6B2E_FEF6_4310_BBE3_AAC8EEEE8097__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// HouseDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// HouseDlg dialog

class HouseDlg : public CDialog
{
// Construction
public:
	long m_House_Price;
	virtual BOOL OnInitDialog();
	HouseDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(HouseDlg)
	enum { IDD = IDD_DIALOGHOUSE };
	CStatic	m_Price;
	CStatic	m_Note;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(HouseDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(HouseDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HOUSEDLG_H__6A9B6B2E_FEF6_4310_BBE3_AAC8EEEE8097__INCLUDED_)
