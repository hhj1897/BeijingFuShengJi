#if !defined(AFX_PRODUCTNEWSDLG_H__35C36EA9_DEE3_46E1_922D_9497C734FD3B__INCLUDED_)
#define AFX_PRODUCTNEWSDLG_H__35C36EA9_DEE3_46E1_922D_9497C734FD3B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ProductNewsDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ProductNewsDlg dialog

class ProductNewsDlg : public CDialog
{
// Construction
public:
	void SetSelect(int num);
	virtual BOOL OnInitDialog();
	int m_Pro_Select;
	ProductNewsDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ProductNewsDlg)
	enum { IDD = IDD_DIALOGNEWS };
	CStatic	m_News_Wnd;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ProductNewsDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ProductNewsDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PRODUCTNEWSDLG_H__35C36EA9_DEE3_46E1_922D_9497C734FD3B__INCLUDED_)
