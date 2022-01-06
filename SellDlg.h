#if !defined(AFX_SELLDLG_H__B92FB93B_1723_4735_BF2A_D9F8A73FF107__INCLUDED_)
#define AFX_SELLDLG_H__B92FB93B_1723_4735_BF2A_D9F8A73FF107__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SellDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// SellDlg dialog

class SellDlg : public CDialog
{
// Construction
public:
	virtual  OnInitDialog();
	SellDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(SellDlg)
	enum { IDD = IDD_DIALOGSELL };
	CStatic	m_Sell_Name;
	CSpinButtonCtrl	m_spin;
	int		m_Sell_Num;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(SellDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(SellDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SELLDLG_H__B92FB93B_1723_4735_BF2A_D9F8A73FF107__INCLUDED_)
