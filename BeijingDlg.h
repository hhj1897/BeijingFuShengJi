// BeijingDlg.h : header file
//

#if !defined(AFX_BEIJINGDLG_H__5A0CB090_7F01_45DF_B5FE_6F75688C09B7__INCLUDED_)
#define AFX_BEIJINGDLG_H__5A0CB090_7F01_45DF_B5FE_6F75688C09B7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CBeijingDlg dialog

class CBeijingDlg : public CDialog
{
// Construction
public:
	void MyNewsFunc();
	void CardFanction();
	long m_Num_Card;
	int m_Sell_Select;
	int m_Max_Num;
	int m_Product_Num;
	int m_Buy_Select;
	void FormatProducts();
	void InitProducts();
	void InitGameSet();
	int m_Day_Num;
	CBitmap m_Now_Bitmap;
	long m_Money_Num;
	long m_Health_Num;
	long m_Own_Num;
	long m_Cash_Num;
	void OnChangePlace();
	CBeijingDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CBeijingDlg)
	enum { IDD = IDD_BEIJING_DIALOG };
	CListBox	m_Sell_Price;
	CListBox	m_Sell_Name;
	CListBox	m_Buy_Price;
	CListBox	m_Buy_Name;
	CStatic	m_Own;
	CStatic	m_Money;
	CStatic	m_Health;
	CStatic	m_Cash;
	CStatic	m_Day;
	CStatic	m_beijingview;
	CButton	m_ButtonBeijingzhan;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBeijingDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CBeijingDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBeijingzhan();
	afx_msg void OnQianmen();
	afx_msg void OnXuanwumen();
	afx_msg void OnFuxingmen();
	afx_msg void OnXizhimen();
	afx_msg void OnAndingmen();
	afx_msg void OnYonghegong();
	afx_msg void OnChaoyangmen();
	afx_msg void OnJianguomen();
	afx_msg void OnWangfujing();
	afx_msg void OnXidan();
	afx_msg void OnMuxidi();
	afx_msg void OnGongzhufen();
	afx_msg void OnWukesong();
	afx_msg void OnBajiaocun();
	afx_msg void OnPingguoyuan();
	virtual void OnCancel();
	afx_msg void OnBank();
	afx_msg void OnLoad();
	afx_msg void OnPost();
	afx_msg void OnSelchangeBuynameBox();
	afx_msg void OnSelchangeBuypriceBox();
	afx_msg void OnBuy();
	afx_msg void OnSelchangeSellnameBox();
	afx_msg void OnSelchangeSellpriceBox();
	afx_msg void OnSell();
	afx_msg void OnHouse();
	afx_msg void OnCard();
	afx_msg void OnHospital();
	afx_msg void OnNote();
	afx_msg void OnRecord();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BEIJINGDLG_H__5A0CB090_7F01_45DF_B5FE_6F75688C09B7__INCLUDED_)
