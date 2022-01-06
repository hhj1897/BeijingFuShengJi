// ProductNewsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Beijing.h"
#include "ProductNewsDlg.h"
#include "ProductType.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ProductNewsDlg dialog
extern ProductType products[9];

ProductNewsDlg::ProductNewsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(ProductNewsDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(ProductNewsDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void ProductNewsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ProductNewsDlg)
	DDX_Control(pDX, IDC_NEWS, m_News_Wnd);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ProductNewsDlg, CDialog)
	//{{AFX_MSG_MAP(ProductNewsDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ProductNewsDlg message handlers

BOOL ProductNewsDlg::OnInitDialog()
{
	BOOL re=CDialog::OnInitDialog();
	char *text1[9]={"    л����˵:\"�ҿ�,����α�ӻ�ױƷ!\"α�ӻ�ױƷ���ܻ�ӭ.",
					"    ��ѧ���ҹ������๺��ˮ���ֻ�.",
					"    ʲôŵ������ѧ��,���������VCD!",
					"    �������ô����ҩ,�ȼٰ׾ƾͿ���,�ٰ׾Ƽ۸���.",
					"    �г�˵:\"��˽���������ƶ���������!\"",
					"    �Ϻ�������e-Bay��������,���м۸����.",
					"    ��ʦ�ᳫѧ����ǿ��������,������ߴ��ܻ�ӭ.",
					"    ���ҽ�һ���Ӵ�˽����,��˽���̼۸�����.",
					"    �ٷ�ƱԽ��Խ�����,�۸�������."};
	////////////////////////////////////////////////////////////////////////////////
	char *text2[9]={"    ƵƵ����ʹ��α�ӻ�ױƷ����������,ר����������ע�������α.",
					"    ��Ϣѧ����ʹ�����ֻ��������,ˮ���ֻ�ʧȥ������.",
					"    ��ɫ����籩һ�ڴ���,�����г����ܳ��.",
					"    �ȼٰ׾ƺȳ�����,�ٰ׾������ʾ�.",
					"    �й����к���������������,���������۸���.",
					"    ������Ϊԭ������Ҳ�������,�Ϻ�����������ȥ.",
					"    ѧ��æ��ѧϰ������,��Ͼ�����.",
					"    ��˽�����ܵ�����һ�����̵����ҳ��,�۸��µ�.",
					"    ���������·�Ʊ�ƶ�,�ɵļٷ�Ʊ������ȥ��."};
	if(products[m_Pro_Select].m_Index>1)
	{
		m_News_Wnd.SetWindowText(text1[m_Pro_Select]);
	}
	else if(products[m_Pro_Select].m_Index<1)
	{
		m_News_Wnd.SetWindowText(text2[m_Pro_Select]);
	}
	return re;
}

void ProductNewsDlg::SetSelect(int num)
{
	m_Pro_Select=num;
}
