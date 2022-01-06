#if !defined(AFX_HOSPITALDLG_H__CF4E7708_BE3F_4684_BFA3_51116AA685A8__INCLUDED_)
#define AFX_HOSPITALDLG_H__CF4E7708_BE3F_4684_BFA3_51116AA685A8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// HospitalDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// HospitalDlg dialog

class HospitalDlg : public CDialog
{
// Construction
public:
	int m_Max_Num;
	virtual BOOL OnInitDialog();
	HospitalDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(HospitalDlg)
	enum { IDD = IDD_HOSPITAL };
	CSpinButtonCtrl	m_spin;
	int		m_Hosp_Num;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(HospitalDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(HospitalDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HOSPITALDLG_H__CF4E7708_BE3F_4684_BFA3_51116AA685A8__INCLUDED_)
