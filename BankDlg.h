#if !defined(AFX_BANKDLG_H__D9B544C2_D83A_486D_B2DC_EF97F44CE34D__INCLUDED_)
#define AFX_BANKDLG_H__D9B544C2_D83A_486D_B2DC_EF97F44CE34D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BankDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// BankDlg dialog

class BankDlg : public CDialog
{
// Construction
public:
	virtual BOOL OnInitDialog();
	BankDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(BankDlg)
	enum { IDD = IDD_DIALOGBANK };
	CSpinButtonCtrl	m_spin;
	long	m_Save_Num;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(BankDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(BankDlg)
	virtual void OnCancel();
	afx_msg void OnSave();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BANKDLG_H__D9B544C2_D83A_486D_B2DC_EF97F44CE34D__INCLUDED_)
