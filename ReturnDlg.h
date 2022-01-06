#if !defined(AFX_RETURNDLG_H__82289DF7_C366_49E1_93BA_DA9A94358330__INCLUDED_)
#define AFX_RETURNDLG_H__82289DF7_C366_49E1_93BA_DA9A94358330__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReturnDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReturnDlg dialog

class CReturnDlg : public CDialog
{
// Construction
public:
	long m_Max_Num;
	virtual BOOL OnInitDialog();
	CReturnDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReturnDlg)
	enum { IDD = IDD_RETURNMONEY };
	CSpinButtonCtrl	m_spin;
	long	m_Return_Num;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReturnDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CReturnDlg)
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RETURNDLG_H__82289DF7_C366_49E1_93BA_DA9A94358330__INCLUDED_)
