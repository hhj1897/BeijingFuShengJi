// BeijingDlg.cpp : implementation file
//

#include "stdafx.h"
#include "stdio.h"
#include "Beijing.h"
#include "BeijingDlg.h"
#include "AskDlg.h"
#include "BankDlg.h"
#include "LoadDlg.h"
#include "ReturnDlg.h"
#include "ProductType.h"
#include "math.h"
#include "stdlib.h"
#include "BuyDlg.h"
#include "SellDlg.h"
#include "HouseDlg.h"
#include "BuyCardDlg.h"
#include "HospitalDlg.h"
#include "NotebookDlg.h"
#include "ProductNewsDlg.h"
#include "RecordType.h"
#include "RecordDlg.h"
#include "NameDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About
CBeijingDlg *pofMainFrame;
ProductType products[9];

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBeijingDlg dialog

CBeijingDlg::CBeijingDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBeijingDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBeijingDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CBeijingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBeijingDlg)
	DDX_Control(pDX, IDC_SELLPRICE_BOX, m_Sell_Price);
	DDX_Control(pDX, IDC_SELLNAME_BOX, m_Sell_Name);
	DDX_Control(pDX, IDC_BUYPRICE_BOX, m_Buy_Price);
	DDX_Control(pDX, IDC_BUYNAME_BOX, m_Buy_Name);
	DDX_Control(pDX, IDC_Own, m_Own);
	DDX_Control(pDX, IDC_Money, m_Money);
	DDX_Control(pDX, IDC_Health, m_Health);
	DDX_Control(pDX, IDC_Cash, m_Cash);
	DDX_Control(pDX, IDC_DAY, m_Day);
	DDX_Control(pDX, IDC_beijingfengjing, m_beijingview);
	DDX_Control(pDX, IDC_RADIO1, m_ButtonBeijingzhan);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CBeijingDlg, CDialog)
	//{{AFX_MSG_MAP(CBeijingDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_RADIO1, OnBeijingzhan)
	ON_BN_CLICKED(IDC_RADIO2, OnQianmen)
	ON_BN_CLICKED(IDC_RADIO3, OnXuanwumen)
	ON_BN_CLICKED(IDC_RADIO4, OnFuxingmen)
	ON_BN_CLICKED(IDC_RADIO5, OnXizhimen)
	ON_BN_CLICKED(IDC_RADIO6, OnAndingmen)
	ON_BN_CLICKED(IDC_RADIO7, OnYonghegong)
	ON_BN_CLICKED(IDC_RADIO8, OnChaoyangmen)
	ON_BN_CLICKED(IDC_RADIO9, OnJianguomen)
	ON_BN_CLICKED(IDC_RADIO10, OnWangfujing)
	ON_BN_CLICKED(IDC_RADIO11, OnXidan)
	ON_BN_CLICKED(IDC_RADIO12, OnMuxidi)
	ON_BN_CLICKED(IDC_RADIO13, OnGongzhufen)
	ON_BN_CLICKED(IDC_RADIO14, OnWukesong)
	ON_BN_CLICKED(IDC_RADIO15, OnBajiaocun)
	ON_BN_CLICKED(IDC_RADIO16, OnPingguoyuan)
	ON_BN_CLICKED(IDC_BANK, OnBank)
	ON_BN_CLICKED(IDC_LOAD, OnLoad)
	ON_BN_CLICKED(IDC_POST, OnPost)
	ON_LBN_SELCHANGE(IDC_BUYNAME_BOX, OnSelchangeBuynameBox)
	ON_LBN_SELCHANGE(IDC_BUYPRICE_BOX, OnSelchangeBuypriceBox)
	ON_BN_CLICKED(IDC_BUY, OnBuy)
	ON_LBN_SELCHANGE(IDC_SELLNAME_BOX, OnSelchangeSellnameBox)
	ON_LBN_SELCHANGE(IDC_SELLPRICE_BOX, OnSelchangeSellpriceBox)
	ON_BN_CLICKED(IDC_SELL, OnSell)
	ON_BN_CLICKED(IDC_HOUSE, OnHouse)
	ON_BN_CLICKED(IDC_CARD, OnCard)
	ON_BN_CLICKED(IDC_HOSPITAL, OnHospital)
	ON_BN_CLICKED(IDC_NOTE, OnNote)
	ON_BN_CLICKED(IDC_RECORD, OnRecord)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBeijingDlg message handlers

BOOL CBeijingDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	srand((unsigned)time(NULL));
	pofMainFrame=this;
	m_ButtonBeijingzhan.SetCheck(BST_CHECKED);
	m_Now_Bitmap.LoadBitmap(IDB_beijingzhan1);
	m_beijingview.SetBitmap(m_Now_Bitmap);
	InitGameSet();
	FormatProducts();

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CBeijingDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CBeijingDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
	m_beijingview.SetBitmap(m_Now_Bitmap);
	UpdateWindow();
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CBeijingDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CBeijingDlg::OnBeijingzhan() 
{
	// TODO: Add your control notification handler code here
	CBitmap beijingzhan;
	beijingzhan.LoadBitmap(IDB_beijingzhan1);
	m_beijingview.SetBitmap(beijingzhan);
	m_Now_Bitmap.DeleteObject();
	m_Now_Bitmap.LoadBitmap(IDB_beijingzhan1);
	OnChangePlace();
	UpdateWindow();
	beijingzhan.DeleteObject();
}

void CBeijingDlg::OnChangePlace()
{
	m_Day_Num=m_Day_Num+1;
	CString s;
	s.Format("今天是第%d天",m_Day_Num);
	m_Day.SetWindowText(s);
	m_Own_Num*=1.1;
	s.Format("俺欠村长:%ld元",m_Own_Num);
	m_Own.SetWindowText(s);
	m_Money_Num*=1.001;
	s.Format("俺的存款:%ld元",m_Money_Num);
	m_Money.SetWindowText(s);
	for(int j=0;j<=8;j++)
	{
		products[j].m_Index=1;
	}
	if(m_Day_Num<=40)
	{
		FormatProducts();
	}
	if(m_Day_Num%10==1&&m_Day_Num!=1)
	{
		CardFanction();
	}
	MyNewsFunc();
	if(m_Day_Num==41)
	{
		OnCancel();
	}
}

void CBeijingDlg::OnQianmen() 
{
	// TODO: Add your control notification handler code here
	int i;
	CBitmap qianmen[3];
	qianmen[0].LoadBitmap(IDB_qianmen1);
	qianmen[1].LoadBitmap(IDB_qianmen2);
	qianmen[2].LoadBitmap(IDB_qianmen3);
	m_beijingview.SetBitmap(qianmen[i=rand()%3]);
	m_Now_Bitmap.DeleteObject();
	switch(i)
	{
	case 0:m_Now_Bitmap.LoadBitmap(IDB_qianmen1);break;
	case 1:m_Now_Bitmap.LoadBitmap(IDB_qianmen2);break;
	case 2:m_Now_Bitmap.LoadBitmap(IDB_qianmen3);break;
	}
	OnChangePlace();
	UpdateWindow();
	for(i=0;i<=2;i++)
	{
		qianmen[i].DeleteObject();
	}
}

void CBeijingDlg::OnXuanwumen() 
{
	// TODO: Add your control notification handler code here
	int i;
	CBitmap xuanwumen[2];
	xuanwumen[0].LoadBitmap(IDB_xuanwumen1);
	xuanwumen[1].LoadBitmap(IDB_xuanwumen2);
	m_beijingview.SetBitmap(xuanwumen[i=rand()%2]);
	m_Now_Bitmap.DeleteObject();
	switch(i)
	{
	case 0:m_Now_Bitmap.LoadBitmap(IDB_xuanwumen1);break;
	case 1:m_Now_Bitmap.LoadBitmap(IDB_xuanwumen2);break;
	}
	OnChangePlace();
	UpdateWindow();
	for(i=0;i<=1;i++)
	{
		xuanwumen[i].DeleteObject();
	}
}

void CBeijingDlg::OnFuxingmen() 
{
	// TODO: Add your control notification handler code here
	CBitmap fuxingmen;
	fuxingmen.LoadBitmap(IDB_fuxingmen1);
	m_beijingview.SetBitmap(fuxingmen);
	m_Now_Bitmap.DeleteObject();
	m_Now_Bitmap.LoadBitmap(IDB_fuxingmen1);
	OnChangePlace();
	UpdateWindow();
	fuxingmen.DeleteObject();
}

void CBeijingDlg::OnXizhimen() 
{
	// TODO: Add your control notification handler code here
	int i;
	CBitmap xizhimen[4];
	xizhimen[0].LoadBitmap(IDB_xizhimen1);
	xizhimen[1].LoadBitmap(IDB_xizhimen2);
	xizhimen[2].LoadBitmap(IDB_xizhimen3);
	xizhimen[3].LoadBitmap(IDB_xizhimen4);
	m_beijingview.SetBitmap(xizhimen[i=rand()%4]);
	m_Now_Bitmap.DeleteObject();
	switch(i)
	{
	case 0:m_Now_Bitmap.LoadBitmap(IDB_xizhimen1);break;
	case 1:m_Now_Bitmap.LoadBitmap(IDB_xizhimen2);break;
	case 2:m_Now_Bitmap.LoadBitmap(IDB_xizhimen3);break;
	case 3:m_Now_Bitmap.LoadBitmap(IDB_xizhimen4);break;
	}
	OnChangePlace();
	UpdateWindow();
	for(i=0;i<=3;i++)
	{
		xizhimen[i].DeleteObject();
	}
}

void CBeijingDlg::OnAndingmen() 
{
	// TODO: Add your control notification handler code here
	int i;
	CBitmap andingmen[2];
	andingmen[0].LoadBitmap(IDB_andingmen1);
	andingmen[1].LoadBitmap(IDB_andingmen2);
	m_beijingview.SetBitmap(andingmen[i=rand()%2]);
	m_Now_Bitmap.DeleteObject();
	switch(i)
	{
	case 0:m_Now_Bitmap.LoadBitmap(IDB_andingmen1);break;
	case 1:m_Now_Bitmap.LoadBitmap(IDB_andingmen2);break;
	}
	OnChangePlace();
	UpdateWindow();
	for(i=0;i<=1;i++)
	{
		andingmen[i].DeleteObject();
	}
}

void CBeijingDlg::OnYonghegong() 
{
	// TODO: Add your control notification handler code here
	int i;
	CBitmap yonghegong[3];
	yonghegong[0].LoadBitmap(IDB_yonghegong1);
	yonghegong[1].LoadBitmap(IDB_yonghegong2);
	yonghegong[2].LoadBitmap(IDB_yonghegong3);
	m_beijingview.SetBitmap(yonghegong[i=rand()%3]);
	m_Now_Bitmap.DeleteObject();
	switch(i)
	{
	case 0:m_Now_Bitmap.LoadBitmap(IDB_yonghegong1);break;
	case 1:m_Now_Bitmap.LoadBitmap(IDB_yonghegong2);break;
	case 2:m_Now_Bitmap.LoadBitmap(IDB_yonghegong3);break;
	}
	OnChangePlace();
	UpdateWindow();
	for(i=0;i<=2;i++)
	{
		yonghegong[i].DeleteObject();
	}
}

void CBeijingDlg::OnChaoyangmen() 
{
	// TODO: Add your control notification handler code here
	int i;
	CBitmap chaoyangmen[2];
	chaoyangmen[0].LoadBitmap(IDB_chaoyangmen1);
	chaoyangmen[1].LoadBitmap(IDB_chaoyangmen2);
	m_beijingview.SetBitmap(chaoyangmen[i=rand()%2]);
	m_Now_Bitmap.DeleteObject();
	switch(i)
	{
	case 0:m_Now_Bitmap.LoadBitmap(IDB_chaoyangmen1);break;
	case 1:m_Now_Bitmap.LoadBitmap(IDB_chaoyangmen2);break;
	}
	OnChangePlace();
	UpdateWindow();
	for(i=0;i<=1;i++)
	{
		chaoyangmen[i].DeleteObject();
	}
}

void CBeijingDlg::OnJianguomen() 
{
	// TODO: Add your control notification handler code here
	int i;
	CBitmap jianguomen[2];
	jianguomen[0].LoadBitmap(IDB_jianguomen1);
	jianguomen[1].LoadBitmap(IDB_jianguomen2);
	m_beijingview.SetBitmap(jianguomen[i=rand()%2]);
	m_Now_Bitmap.DeleteObject();
	switch(i)
	{
	case 0:m_Now_Bitmap.LoadBitmap(IDB_jianguomen1);break;
	case 1:m_Now_Bitmap.LoadBitmap(IDB_jianguomen2);break;
	}
	OnChangePlace();
	UpdateWindow();
	for(i=0;i<=1;i++)
	{
		jianguomen[i].DeleteObject();
	}
}

void CBeijingDlg::OnWangfujing() 
{
	// TODO: Add your control notification handler code here
	int i;
	CBitmap wangfujing[3];
	wangfujing[0].LoadBitmap(IDB_wangfujing1);
	wangfujing[1].LoadBitmap(IDB_wangfujing2);
	wangfujing[2].LoadBitmap(IDB_wangfujing3);
	m_beijingview.SetBitmap(wangfujing[i=rand()%3]);
	m_Now_Bitmap.DeleteObject();
	switch(i)
	{
	case 0:m_Now_Bitmap.LoadBitmap(IDB_wangfujing1);break;
	case 1:m_Now_Bitmap.LoadBitmap(IDB_wangfujing2);break;
	case 2:m_Now_Bitmap.LoadBitmap(IDB_wangfujing3);break;
	}
	OnChangePlace();
	UpdateWindow();
	for(i=0;i<=2;i++)
	{
		wangfujing[i].DeleteObject();
	}
}

void CBeijingDlg::OnXidan() 
{
	// TODO: Add your control notification handler code here
	int i;
	CBitmap xidan[4];
	xidan[0].LoadBitmap(IDB_xidan1);
	xidan[1].LoadBitmap(IDB_xidan2);
	xidan[2].LoadBitmap(IDB_xidan3);
	xidan[3].LoadBitmap(IDB_xidan4);
	m_beijingview.SetBitmap(xidan[i=rand()%4]);
	m_Now_Bitmap.DeleteObject();
	switch(i)
	{
	case 0:m_Now_Bitmap.LoadBitmap(IDB_xidan1);break;
	case 1:m_Now_Bitmap.LoadBitmap(IDB_xidan2);break;
	case 2:m_Now_Bitmap.LoadBitmap(IDB_xidan3);break;
	case 3:m_Now_Bitmap.LoadBitmap(IDB_xidan4);break;
	}
	OnChangePlace();
	UpdateWindow();
	for(i=0;i<=3;i++)
	{
		xidan[i].DeleteObject();
	}
}

void CBeijingDlg::OnMuxidi() 
{
	// TODO: Add your control notification handler code here
	CBitmap muxidi;
	muxidi.LoadBitmap(IDB_muxidi1);
	m_beijingview.SetBitmap(muxidi);
	m_Now_Bitmap.DeleteObject();
	m_Now_Bitmap.LoadBitmap(IDB_muxidi1);
	OnChangePlace();
	UpdateWindow();
	muxidi.DeleteObject();
}

void CBeijingDlg::OnGongzhufen() 
{
	// TODO: Add your control notification handler code here
	CBitmap gongzhufen;
	gongzhufen.LoadBitmap(IDB_gongzhufen1);
	m_beijingview.SetBitmap(gongzhufen);
	m_Now_Bitmap.DeleteObject();
	m_Now_Bitmap.LoadBitmap(IDB_gongzhufen1);
	OnChangePlace();
	UpdateWindow();
	gongzhufen.DeleteObject();
}

void CBeijingDlg::OnWukesong() 
{
	// TODO: Add your control notification handler code here
	CBitmap wukesong;
	wukesong.LoadBitmap(IDB_wukesong1);
	m_beijingview.SetBitmap(wukesong);
	m_Now_Bitmap.DeleteObject();
	m_Now_Bitmap.LoadBitmap(IDB_wukesong1);
	OnChangePlace();
	UpdateWindow();
	wukesong.DeleteObject();
}

void CBeijingDlg::OnBajiaocun() 
{
	// TODO: Add your control notification handler code here
	CBitmap bajiaocun;
	bajiaocun.LoadBitmap(IDB_bajiaocun1);
	m_beijingview.SetBitmap(bajiaocun);
	m_Now_Bitmap.DeleteObject();
	m_Now_Bitmap.LoadBitmap(IDB_bajiaocun1);
	OnChangePlace();
	UpdateWindow();
	bajiaocun.DeleteObject();
}

void CBeijingDlg::OnPingguoyuan() 
{
	// TODO: Add your control notification handler code here
	int i;
	CBitmap pingguoyuan[2];
	pingguoyuan[0].LoadBitmap(IDB_pingguoyuan1);
	pingguoyuan[1].LoadBitmap(IDB_pingguoyuan2);
	m_beijingview.SetBitmap(pingguoyuan[i=rand()%2]);
	m_Now_Bitmap.DeleteObject();
	switch(i)
	{
	case 0:m_Now_Bitmap.LoadBitmap(IDB_pingguoyuan1);break;
	case 1:m_Now_Bitmap.LoadBitmap(IDB_pingguoyuan2);break;
	}
	OnChangePlace();
	UpdateWindow();
	for(i=0;i<=1;i++)
	{
		pingguoyuan[i].DeleteObject();
	}
}

void CBeijingDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	CString s;
	m_Sell_Name.ResetContent();
	m_Sell_Price.ResetContent();
	m_Buy_Name.ResetContent();
	m_Buy_Price.ResetContent();
	for(int j=0;j<=8;j++)
	{
		products[j].m_Index=1;
	}
	for(int i=0;i<=8;i++)
	{
		m_Buy_Name.AddString(products[i].m_Name);
		products[i].m_Price=rand()%(products[i].m_Max_Price-products[i].m_Min_Price+1)+products[i].m_Min_Price;
		int randnum=rand()%150;
		if(randnum==0)
		{
			products[i].m_Index=1.0/(rand()%4+3.0);
		}
		else if(randnum==1||randnum==2)
		{
			products[i].m_Index=(rand()%3+4);
		}
		products[i].m_Price*=products[i].m_Index;
		char str[50];
		sprintf(str,"%ld元",products[i].m_Price);
		m_Buy_Price.AddString(str);
		if(products[i].m_Pro_Num>0)
		{
			m_Cash_Num+=products[i].m_Pro_Num*products[i].m_Price;
			products[i].m_Pro_Num=0;			
		}
	}
	for(int k=0;k<=8;k++)
	{
		if(products[k].m_Index!=1)
		{
			ProductNewsDlg newsdlg;
			newsdlg.SetSelect(k);
			newsdlg.DoModal();
		}
	}
	m_Cash_Num+=m_Money_Num;
	m_Money_Num=0;
	s.Format("俺的现金:%ld元",m_Cash_Num);
	m_Cash.SetWindowText(s);
	m_Money.SetWindowText("俺的存款:0元");
	MessageBox("俺该回家了,在北京的老乡帮我卖了剩于的货物","日记");
	/////////////////////////////////////////////////////
	s.Format("您赚了%ld元,还欠村长%ld元",(m_Cash_Num+m_Money_Num),m_Own_Num);
	MessageBox(s,"北京欢迎您再来!");
	////////////////////////////////////////////////////////////////////////////////
	RecordType re[10];
	FILE * fp;
	if((fp=fopen("record.sav","rb"))==NULL)
	{
		fp=fopen("record.sav","wb");
		for(int cit=0;cit<=9;cit++)
		{
			re[cit].money=1000*(9-cit);
			strcpy(re[cit].name,"系统");
		}
		for(int coun=0;coun<=9;coun++)
		{
			fwrite(re+coun,sizeof(re[coun]),1,fp);
		}
		fclose(fp);
		fp=fopen("record.sav","rb");
	}
	for(int coun=0;coun<=9;coun++)
	{
		fread(re+coun,sizeof(re[coun]),1,fp);
	}
	fclose(fp);
	if(m_Own_Num==0)
	{
		int cij;
		for(cij=0;cij<=9;cij++)
		{
			if(m_Cash_Num>re[cij].money)
			{
				int kt;
				for(kt=9;kt>=cij+1;kt--)
				{
					strcpy(re[kt].name,re[kt-1].name);
					re[kt].money=re[kt-1].money;
				}
				CNameDlg namedlg;
				namedlg.DoModal();
				sprintf(re[cij].name,"%s",namedlg.m_name);
				re[cij].money=m_Cash_Num;
				break;
			}
		}
		fp=fopen("record.sav","wb");
		for(cij=0;cij<=9;cij++)
		{
			fwrite(re+cij,sizeof(re[cij]),1,fp);
		}
		fclose(fp);
	}
	CRecordDlg recorddlg;
	recorddlg.DoModal();
	/////////////////////////////////////////////////////////////////////////////////
	CAskDlg askdlg;
	int choose=askdlg.DoModal();
	if(choose==IDCANCEL)
	{
		CDialog::OnCancel();
	}
	else if(choose==IDOK)
	{
		//For Adding Codes!!!
		InitGameSet();
		FormatProducts();
	}
}

void CBeijingDlg::InitGameSet()
{
	m_Cash_Num=2000;
	m_Money_Num=0;
	m_Own_Num=5000;
	m_Health_Num=100;
	m_Day_Num=1;
	m_Max_Num=100;
	m_Product_Num=0;
	m_Sell_Select=-1;
	m_Num_Card=0;
	CString s;
	s.Format("俺的现金:%ld元",m_Cash_Num);
	m_Cash.SetWindowText(s);
	s.Format("俺的存款:%ld元",m_Money_Num);
	m_Money.SetWindowText(s);
	s.Format("俺欠村长:%ld元",m_Own_Num);
	m_Own.SetWindowText(s);
	s.Format("俺的健康:%d%%",m_Health_Num);
	m_Health.SetWindowText(s);
	s.Format("今天是第%d天",m_Day_Num);
	m_Day.SetWindowText(s);
	m_Sell_Name.ResetContent();
	m_Sell_Price.ResetContent();
	InitProducts();

}

void CBeijingDlg::OnBank() 
{
	// TODO: Add your control notification handler code here
	BankDlg bankdlg;
	bankdlg.DoModal();
}

void CBeijingDlg::OnLoad() 
{
	// TODO: Add your control notification handler code here
	CLoadDlg loaddlg;
	loaddlg.DoModal();
}

void CBeijingDlg::OnPost() 
{
	// TODO: Add your control notification handler code here
	if(m_Own_Num==0&&(m_Cash_Num+m_Money_Num)>=10000000)
	{
		MessageBox("村长在电话前跪下说:\"您间直是俺亲爹!\"","邮局");
	}
	else if(m_Own_Num==0&&(m_Cash_Num+m_Money_Num)<10000000&&(m_Cash_Num+m_Money_Num)>=500000)
	{
		MessageBox("村长在信中说:\"富毫,俺要把女儿嫁给你!\"","邮局");
	}
	else if(m_Own_Num==0&&(m_Cash_Num+m_Money_Num)<500000&&(m_Cash_Num+m_Money_Num)>=1000)
	{
		MessageBox("村长说:\"兄弟,有了钱可别忘了给家乡捐点!\"","邮局");
	}
	else if(m_Own_Num==0&&(m_Cash_Num+m_Money_Num)<1000)
	{
		MessageBox("村长说:\"你没钱,你有神经病!");
	}
	else if(m_Own_Num>0)
	{
		//For More Codes of Returning Money Later!!!
		CReturnDlg returndlg;
		returndlg.DoModal();
	}
}

void CBeijingDlg::InitProducts()
{
	products[0].InitProduct("伪劣化状品",300,90);
	products[1].InitProduct("水货手机",1200,700);
	products[2].InitProduct("盗版软件",60,5);
	products[3].InitProduct("假白酒(剧毒)",3500,1500);
	products[4].InitProduct("走私汽车",25000,16000);
	products[5].InitProduct("上海宝贝(禁)",12000,6000);
	products[6].InitProduct("进口玩具",800,500);
	products[7].InitProduct("走私香烟",440,250);
	products[8].InitProduct("假发票",600,350);
}

void CBeijingDlg::FormatProducts()
{
	m_Buy_Name.ResetContent();
	m_Buy_Price.ResetContent();
	for(int i=0;i<=8;i++)
	{
		products[i].m_Pro_Appear=0;
		if((rand()%5)!=0)
		{
			products[i].m_Pro_Appear=1;
			products[i].m_Price=rand()%(1+products[i].m_Max_Price-products[i].m_Min_Price)+products[i].m_Min_Price;
			if(products[i].m_Price>products[i].m_Min_Price+(products[i].m_Max_Price-products[i].m_Min_Price)/2)
			{
				products[i].m_Price=products[i].m_Max_Price-sqrt((products[i].m_Max_Price-products[i].m_Min_Price)/2)*sqrt(products[i].m_Max_Price-products[i].m_Price);
			}
			else
			{
				products[i].m_Price=products[i].m_Min_Price+sqrt((products[i].m_Max_Price-products[i].m_Min_Price)/2)*sqrt(products[i].m_Price-products[i].m_Min_Price);
			}
			if(m_Day_Num!=1)
			{
				int randnum=rand()%150;
				if(randnum==0)
				{
					products[i].m_Index=1.0/(rand()%3+4.0);
				}
				else if(randnum==1||randnum==2)
				{
					products[i].m_Index=(rand()%4+3);
				}
			}
			products[i].m_Price*=products[i].m_Index;
			m_Buy_Name.AddString(products[i].m_Name);
			char str[50];
			sprintf(str,"%ld元",products[i].m_Price);
			m_Buy_Price.AddString(str);
		}
	}
	for(i=0;i<=8;i++)
	{
		if(products[i].m_Pro_Appear==1)
		{
			break;
		}
	}
	if(i==9)
	{
		MessageBox("对不起,今天风头紧,明天再说吧","日记");
		m_Buy_Select=-1;
	}
	else
	{
		m_Buy_Name.SetCurSel(0);
		m_Buy_Price.SetCurSel(0);
		m_Buy_Select=0;
		char str[100];
		m_Buy_Name.GetText(m_Buy_Select,str);
		for(int i=0;i<=8;i++)
		{
			if(strcmp(products[i].m_Name,str)==0)
			{
				m_Buy_Select=i;
				break;
			}
		}
		for(int j=0;j<=8;j++)
		{
			if(products[j].m_Index!=1)
			{
				ProductNewsDlg newsdlg;
				newsdlg.SetSelect(j);
				newsdlg.DoModal();
			}
		}
	}
}

void CBeijingDlg::OnSelchangeBuynameBox() 
{
	// TODO: Add your control notification handler code here
	if(m_Buy_Select==-1)
	{
		return;
	}
	m_Buy_Select=m_Buy_Name.GetCurSel();
	m_Buy_Price.SetCurSel(m_Buy_Select);
	char str[100];
	m_Buy_Name.GetText(m_Buy_Select,str);
	for(int i=0;i<=8;i++)
	{
		if(strcmp(products[i].m_Name,str)==0)
		{
			m_Buy_Select=i;
			break;
		}
	}
}

void CBeijingDlg::OnSelchangeBuypriceBox() 
{
	// TODO: Add your control notification handler code here
	if(m_Buy_Select==-1)
	{
		return;
	}
	m_Buy_Select=m_Buy_Price.GetCurSel();
	m_Buy_Name.SetCurSel(m_Buy_Select);
	char str[100];
	m_Buy_Name.GetText(m_Buy_Select,str);
	for(int i=0;i<=8;i++)
	{
		if(strcmp(products[i].m_Name,str)==0)
		{
			m_Buy_Select=i;
			break;
		}
	}
}

void CBeijingDlg::OnBuy() 
{
	// TODO: Add your control notification handler code here
	if(m_Buy_Select!=-1)
	{
		BuyDlg buydlg;
		buydlg.DoModal();
	}
}

void CBeijingDlg::OnSelchangeSellnameBox() 
{
	// TODO: Add your control notification handler code here
	if(m_Sell_Select==-1)
	{
		return;
	}
	m_Sell_Select=m_Sell_Name.GetCurSel();
	m_Sell_Price.SetCurSel(m_Sell_Select);
	char str[100];
	m_Sell_Name.GetText(m_Sell_Select,str);
	for(int i=0;i<=8;i++)
	{
		if(strcmp(str,products[i].m_Name)==0)
		{
			m_Sell_Select=i;
			break;
		}
	}
}

void CBeijingDlg::OnSelchangeSellpriceBox() 
{
	// TODO: Add your control notification handler code here
	if(m_Sell_Select==-1)
	{
		return;
	}
	m_Sell_Select=m_Sell_Price.GetCurSel();
	m_Sell_Name.SetCurSel(m_Sell_Select);
	char str[100];
	m_Sell_Name.GetText(m_Sell_Select,str);
	for(int i=0;i<=8;i++)
	{
		if(strcmp(str,products[i].m_Name)==0)
		{
			m_Sell_Select=i;
			break;
		}
	}
}

void CBeijingDlg::OnSell() 
{
	// TODO: Add your control notification handler code here
	if(m_Sell_Select!=-1)
	{
		if(products[m_Sell_Select].m_Pro_Appear==0)
		{
			MessageBox("这里好像没有人做这个生意","日记");
		}
		else
		{
			SellDlg selldlg;
			selldlg.DoModal();
		}
	}
}

void CBeijingDlg::OnHouse() 
{
	// TODO: Add your control notification handler code here
	if(m_Cash_Num<30000)
	{
		MessageBox("你连30000块现金都没有还来租房?!","房屋中介");
	}
	else if(m_Max_Num>=160)
	{
		MessageBox("您的房子比局长都大了,还来租房?!","房屋中介");
	}
	else
	{
		HouseDlg housedlg;
		housedlg.DoModal();
	}
}

void CBeijingDlg::OnCard() 
{
	// TODO: Add your control notification handler code here
	BuyCardDlg carddlg;
	carddlg.DoModal();
}

void CBeijingDlg::CardFanction()
{
	long moneyern=0;
	int i;
	long firstnum=(rand()%1001)*10000+rand()%10000;
	if(m_Num_Card>=1)
	{
		if(1<=firstnum&&firstnum<=m_Num_Card)
		{
			m_Cash_Num+=1000000;
			moneyern+=1000000;
			CString s;
			s.Format("俺的现金:%ld元",m_Cash_Num);
			m_Cash.SetWindowText(s);
			MessageBox("恭喜您中了百万大奖!","体育彩票");
			m_Num_Card-=1;
		}
	}
	for(i=1;i<=10;i++)
	{
		firstnum=(rand()%1001)*10000+rand()%10000;
		if(1<=firstnum&&firstnum<=m_Num_Card)
		{
			m_Cash_Num+=100000;
			moneyern+=100000;
			m_Num_Card-=1;
		}
	}
	for(i=1;i<=100;i++)
	{
		firstnum=(rand()%1001)*10000+rand()%10000;
		if(1<=firstnum&&firstnum<=m_Num_Card)
		{
			m_Cash_Num+=10000;
			moneyern+=10000;
			m_Num_Card-=1;
		}
	}
	for(i=1;i<=100;i++)
	{
		firstnum=(rand()%1001)*10000+rand()%10000;
		if(1<=firstnum&&firstnum<=m_Num_Card)
		{
			m_Cash_Num+=5000;
			moneyern+=5000;
			m_Num_Card-=1;
		}
	}
	for(i=1;i<=200;i++)
	{
		firstnum=(rand()%1001)*10000+rand()%10000;
		if(1<=firstnum&&firstnum<=m_Num_Card)
		{
			m_Cash_Num+=1000;
			moneyern+=1000;
			m_Num_Card-=1;
		}
	}
	for(i=1;i<=2000;i++)
	{
		firstnum=(rand()%1001)*10000+rand()%10000;
		if(1<=firstnum&&firstnum<=m_Num_Card)
		{
			m_Cash_Num+=100;
			moneyern+=100;
			m_Num_Card-=1;
		}
	}
	for(i=1;i<=20000;i++)
	{
		firstnum=(rand()%1001)*10000+rand()%10000;
		if(1<=firstnum&&firstnum<=m_Num_Card)
		{
			m_Cash_Num+=5;
			moneyern+=5;
			m_Num_Card-=1;
		}
	}
	m_Num_Card=0;
	CString s;
	s.Format("俺的现金:%ld元",m_Cash_Num);
	m_Cash.SetWindowText(s);
	s.Format("体育彩票今天开彩,您中了%ld元",moneyern);
	MessageBox(s,"体育彩票");
}

void CBeijingDlg::OnHospital() 
{
	// TODO: Add your control notification handler code here
	if(m_Health_Num==100)
	{
		MessageBox("护士小姐笑眯眯的对俺说:\"大哥,神经科在那边!\"","医院");
	}
	else
	{
		HospitalDlg hosdlg;
		hosdlg.DoModal();
	}
}

void CBeijingDlg::OnNote() 
{
	// TODO: Add your control notification handler code here
	NotebookDlg notedlg;
	notedlg.DoModal();
}

void CBeijingDlg::MyNewsFunc()
{
	int i;
	CString s;
	i=rand()%100;
	if(0<=i&&i<=2)
	{
		m_Health_Num-=3;
		if(m_Health_Num<0)
		{
			m_Health_Num=0;
		}
		s.Format("俺的健康:%ld%%",m_Health_Num);
		m_Health.SetWindowText(s);
		MessageBox("看自行车的大妈笑俺没北京户口,俺的健康点数少了3点","日记");
	}
	else if(3<=i&&i<=7)
	{
		m_Health_Num-=1;
		if(m_Health_Num<0)
		{
			m_Health_Num=0;
		}
		s.Format("俺的健康:%ld%%",m_Health_Num);
		m_Health.SetWindowText(s);
		MessageBox("俺被门外的小黑河熏着了,俺的健康点数少了1点","日记");
	}
	else if(8<=i&&i<=9)
	{
		m_Health_Num-=5;
		if(m_Health_Num<0)
		{
			m_Health_Num=0;
		}
		s.Format("俺的健康:%ld%%",m_Health_Num);
		m_Health.SetWindowText(s);
		MessageBox("今天北京又来沙尘暴,俺的健康点数少了5点","日记");
	}
	else if(i==10)
	{
		m_Money_Num*=0.8;
		s.Format("俺的存款:%ld元",m_Money_Num);
		m_Money.SetWindowText(s);
		MessageBox("工商局长说:\"要办营业执照别老半夜往我家送钱!\"俺的存款少了20%","日记");
	}
	else if(i>=11&&i<=13)
	{
		m_Cash_Num*=0.95;
		s.Format("俺的现金:%ld元",m_Cash_Num);
		m_Cash.SetWindowText(s);
		MessageBox("今天俺去氧吧吸氧,俺的现金少了5%","日记");
	}
	else if(i>=14&&i<=15)
	{
		m_Cash_Num*=0.9;
		s.Format("俺的现金:%ld元",m_Cash_Num);
		m_Cash.SetWindowText(s);
		MessageBox("\"外地人,罚款!\",俺的现金少了10%","日记");
	}
	else if(i==16)
	{
		if(rand()%100==0)
		{
			m_Health_Num-=50;
			if(m_Health_Num<0)
			{
				m_Health_Num=0;
			}
			s.Format("俺的健康:%ld%%",m_Health_Num);
			m_Health.SetWindowText(s);
			m_Cash_Num*=0.5;
			s.Format("俺的现金:%ld元",m_Cash_Num);
			m_Cash.SetWindowText(s);
			MessageBox("啊!俺被流氓抢了!俺的现金少了50%,健康点数少了50点","日记");
		}
	}
	else if(i==17)
	{
		if(rand()%100==0)
		{
			m_Cash_Num+=100000;
			s.Format("俺的现金:%ld元",m_Cash_Num);
			m_Cash.SetWindowText(s);
			MessageBox("俺今天捡了个皮包,白得了100000块钱","日记");
		}
	}
	if(m_Own_Num>=20000)
	{
		if(rand()%4==0)
		{
			m_Health_Num-=20;
			if(m_Health_Num<0)
			{
				m_Health_Num=0;
			}
			s.Format("俺的健康:%ld%%",m_Health_Num);
			m_Health.SetWindowText(s);
			MessageBox("俺欠村长的钱太多了,被村长找老乡暴扁,俺的健康点数少了20点","日记");
		}
	}
	if(m_Health_Num==0)
	{
		MessageBox("俺的体力不支了,俺得回家了!","日记");
		OnCancel();
	}
}

void CBeijingDlg::OnRecord() 
{
	// TODO: Add your control notification handler code here
	CRecordDlg dlg;
	dlg.DoModal();
}
