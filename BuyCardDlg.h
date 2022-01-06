#if !defined(AFX_BUYCARDDLG_H__E482DEEB_4676_45D4_B6BB_CA37B931D6D6__INCLUDED_)
#define AFX_BUYCARDDLG_H__E482DEEB_4676_45D4_B6BB_CA37B931D6D6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BuyCardDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// BuyCardDlg dialog

class BuyCardDlg : public CDialog
{
// Construction
public:
	long m_Max_Card_Num;
	virtual BOOL OnInitDialog();
	BuyCardDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(BuyCardDlg)
	enum { IDD = IDD_DIALOGCARD };
	CStatic	m_Note_Num;
	CSpinButtonCtrl	m_spin;
	long	m_Card_Num;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(BuyCardDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(BuyCardDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BUYCARDDLG_H__E482DEEB_4676_45D4_B6BB_CA37B931D6D6__INCLUDED_)
