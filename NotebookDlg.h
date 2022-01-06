#if !defined(AFX_NOTEBOOKDLG_H__B461204D_1C1A_4B3D_99AB_7F6130652FEB__INCLUDED_)
#define AFX_NOTEBOOKDLG_H__B461204D_1C1A_4B3D_99AB_7F6130652FEB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NotebookDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// NotebookDlg dialog

class NotebookDlg : public CDialog
{
// Construction
public:
	virtual BOOL OnInitDialog();
	NotebookDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(NotebookDlg)
	enum { IDD = IDD_DIALOGNOTEBOOK };
	CStatic	m_Index_8;
	CStatic	m_Index_7;
	CStatic	m_Index_6;
	CStatic	m_Index_5;
	CStatic	m_Index_4;
	CStatic	m_Index_3;
	CStatic	m_Index_2;
	CStatic	m_Index_1;
	CStatic	m_Index_0;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(NotebookDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(NotebookDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NOTEBOOKDLG_H__B461204D_1C1A_4B3D_99AB_7F6130652FEB__INCLUDED_)
