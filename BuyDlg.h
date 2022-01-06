#if !defined(AFX_BUYDLG_H__7FB423E8_3138_4B07_9159_0BD8742D130C__INCLUDED_)
#define AFX_BUYDLG_H__7FB423E8_3138_4B07_9159_0BD8742D130C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BuyDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// BuyDlg dialog

class BuyDlg : public CDialog
{
// Construction
public:
	int m_Max_Product_Num;
	virtual BOOL OnInitDialog();
	BuyDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(BuyDlg)
	enum { IDD = IDD_DIALOGBUY };
	CStatic	m_Name;
	CSpinButtonCtrl	m_spin;
	int		m_Buy_Num;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(BuyDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(BuyDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BUYDLG_H__7FB423E8_3138_4B07_9159_0BD8742D130C__INCLUDED_)
