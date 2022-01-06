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
	char *text1[9]={"    谢不疯说:\"我酷,我用伪劣化妆品!\"伪劣化妆品大受欢迎.",
					"    大学生找工作争相购买水货手机.",
					"    什么诺贝尔文学奖,还不如盗版VCD!",
					"    生病不用打针吃药,喝假白酒就可以,假白酒价格狂彪.",
					"    市长说:\"走私汽车大力推动汽车消费!\"",
					"    上海宝贝连e-Bay都不敢卖,黑市价格大增.",
					"    教师提倡学生加强动手能力,进口玩具大受欢迎.",
					"    国家进一步加大缉私力度,走私香烟价格上涨.",
					"    假发票越做越像真的,价格逐步上升."};
	////////////////////////////////////////////////////////////////////////////////
	char *text2[9]={"    频频出现使用伪劣化妆品被毁容现像,专家提醒市民注意辨明真伪.",
					"    信息学进步使国产手机大幅降价,水货手机失去竟争力.",
					"    红色正版风暴一炮打响,盗版市场大受冲击.",
					"    喝假白酒喝出人命,假白酒无人问经.",
					"    中国入市后进口汽车大幅降价,走似汽车价格狂跌.",
					"    市民认为原来禁书也不过如此,上海宝贝卖不出去.",
					"    学生忙于学习及考试,无暇玩玩具.",
					"    走私香烟受到福建一批假烟的猛烈冲击,价格下跌.",
					"    国家推行新发票制度,旧的假发票做不下去了."};
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
