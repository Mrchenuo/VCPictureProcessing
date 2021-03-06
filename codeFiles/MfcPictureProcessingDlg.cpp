
// MfcPictureProcessingDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MfcPictureProcessing.h"
#include "MfcPictureProcessingDlg.h"
#include "CViewImage.h"
#include "afxdialogex.h"
#include "CDib.h" 
#include"JHBHDib.h"
#include"PingYiTiShi.h"
#include"FangDaTiShi.h"
#include"XuanZhuanDlg.h"
#include"HuiDuDib.h"
#include"GuDingDlg.h"
#include"ShuangYuZhiDlg.h"
#include"ChuangkouDlg.h"
#include"ZheXianDlg.h"
#include"ZhiFangDlg.h"
#include"PingHuaDib.h"
#include"nnZhongZhiDlg.h"
#include"BianYuanDib.h"
#include"MenXianRuiHuaDlg.h"
#include"FenGeCeLiangDib.h"
#include"XiaoMianJiDlg.h"
#include"XingTaiDib.h"
#include"BianHuanYuDib.h"
#include"HeChengDib.h"
#include"CaiSeDib.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMfcPictureProcessingDlg 对话框




CMfcPictureProcessingDlg::CMfcPictureProcessingDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMfcPictureProcessingDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

}

void CMfcPictureProcessingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMfcPictureProcessingDlg, CDialogEx)//消息映射入口项
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_32771, &CMfcPictureProcessingDlg::On32771)
	ON_COMMAND(ID_32772, &CMfcPictureProcessingDlg::On32772)
	ON_COMMAND(ID_32773, &CMfcPictureProcessingDlg::On32773)
	ON_COMMAND(ID_32774, &CMfcPictureProcessingDlg::On32774)
	ON_COMMAND(ID_32775, &CMfcPictureProcessingDlg::On32775)
	ON_COMMAND(ID_32776, &CMfcPictureProcessingDlg::On32776)
	ON_COMMAND(ID_32777, &CMfcPictureProcessingDlg::On32777)
	ON_COMMAND(ID_32778, &CMfcPictureProcessingDlg::On32778)
	ON_COMMAND(ID_32779, &CMfcPictureProcessingDlg::On32779)
	ON_COMMAND(ID_32780, &CMfcPictureProcessingDlg::On32780)
	ON_COMMAND(ID_32781, &CMfcPictureProcessingDlg::On32781)
	ON_COMMAND(ID_32782, &CMfcPictureProcessingDlg::On32782)
	ON_COMMAND(ID_32783, &CMfcPictureProcessingDlg::On32783)
	ON_COMMAND(ID_32784, &CMfcPictureProcessingDlg::On32784)
	ON_COMMAND(ID_32785, &CMfcPictureProcessingDlg::On32785)
	ON_COMMAND(ID_32786, &CMfcPictureProcessingDlg::On32786)
	ON_COMMAND(ID_32787, &CMfcPictureProcessingDlg::On32787)
	ON_UPDATE_COMMAND_UI(ID_32780, &CMfcPictureProcessingDlg::OnUpdate32780)
	ON_COMMAND(ID_32789, &CMfcPictureProcessingDlg::On32789)
	ON_COMMAND(ID_32790, &CMfcPictureProcessingDlg::On32790)
	ON_COMMAND(ID_32791, &CMfcPictureProcessingDlg::On32791)
	ON_COMMAND(ID_32792, &CMfcPictureProcessingDlg::On32792)
	ON_COMMAND(ID_32793, &CMfcPictureProcessingDlg::On32793)	
	ON_BN_CLICKED(IDC_BUTTON1, &CMfcPictureProcessingDlg::OnBnClickedButton1)
	ON_COMMAND(ID_32794, &CMfcPictureProcessingDlg::On32794)
	ON_COMMAND(ID_32795, &CMfcPictureProcessingDlg::On32795)
	ON_COMMAND(ID_32796, &CMfcPictureProcessingDlg::On32796)
	ON_COMMAND(ID_32797, &CMfcPictureProcessingDlg::On32797)
	ON_COMMAND(ID_32798, &CMfcPictureProcessingDlg::On32798)
	ON_COMMAND(ID_32799, &CMfcPictureProcessingDlg::On32799)
	ON_COMMAND(ID_32800, &CMfcPictureProcessingDlg::On32800)
	ON_COMMAND(ID_32801, &CMfcPictureProcessingDlg::On32801)
	ON_COMMAND(ID_32802, &CMfcPictureProcessingDlg::On32802)
	ON_COMMAND(ID_32803, &CMfcPictureProcessingDlg::On32803)
	ON_COMMAND(ID_32804, &CMfcPictureProcessingDlg::On32804)
	ON_COMMAND(ID_32805, &CMfcPictureProcessingDlg::On32805)
	ON_COMMAND(ID_32807, &CMfcPictureProcessingDlg::On32807)
	ON_COMMAND(ID_32808, &CMfcPictureProcessingDlg::On32808)
	ON_COMMAND(ID_32809, &CMfcPictureProcessingDlg::On32809)
	ON_COMMAND(ID_32810, &CMfcPictureProcessingDlg::On32810)
	ON_COMMAND(ID_32811, &CMfcPictureProcessingDlg::On32811)
	ON_COMMAND(ID_32812, &CMfcPictureProcessingDlg::On32812)
	ON_COMMAND(ID_32813, &CMfcPictureProcessingDlg::On32813)
	ON_COMMAND(ID_32814, &CMfcPictureProcessingDlg::On32814)
	ON_COMMAND(ID_32815, &CMfcPictureProcessingDlg::On32815)
	ON_COMMAND(ID_32816, &CMfcPictureProcessingDlg::On32816)
	ON_COMMAND(ID_32817, &CMfcPictureProcessingDlg::On32817)
	ON_COMMAND(ID_32818, &CMfcPictureProcessingDlg::On32818)
	ON_COMMAND(ID_32819, &CMfcPictureProcessingDlg::On32819)
	ON_COMMAND(ID_32820, &CMfcPictureProcessingDlg::On32820)
	ON_COMMAND(ID_32821, &CMfcPictureProcessingDlg::On32821)
	ON_COMMAND(ID_32822, &CMfcPictureProcessingDlg::On32822)
	ON_COMMAND(ID_32823, &CMfcPictureProcessingDlg::On32823)
	ON_COMMAND(ID_32824, &CMfcPictureProcessingDlg::On32824)
	ON_COMMAND(ID_32825, &CMfcPictureProcessingDlg::On32825)
	ON_COMMAND(ID_32826, &CMfcPictureProcessingDlg::On32826)
	ON_COMMAND(ID_32827, &CMfcPictureProcessingDlg::On32827)
	ON_COMMAND(ID_32828, &CMfcPictureProcessingDlg::On32828)
	ON_COMMAND(ID_32829, &CMfcPictureProcessingDlg::On32829)
	ON_COMMAND(ID_32830, &CMfcPictureProcessingDlg::On32830)
	ON_COMMAND(ID_32831, &CMfcPictureProcessingDlg::On32831)
	ON_COMMAND(ID_32832, &CMfcPictureProcessingDlg::On32832)
	ON_COMMAND(ID_32833, &CMfcPictureProcessingDlg::On32833)
	ON_COMMAND(ID_32834, &CMfcPictureProcessingDlg::On32834)
//	ON_WM_LBUTTONDOWN()
//	ON_WM_LBUTTONDBLCLK()
ON_COMMAND(ID_32835, &CMfcPictureProcessingDlg::On32835)
ON_COMMAND(ID_32836, &CMfcPictureProcessingDlg::On32836)
ON_COMMAND(ID_32837, &CMfcPictureProcessingDlg::On32837)
ON_COMMAND(ID_32838, &CMfcPictureProcessingDlg::On32838)
ON_COMMAND(ID_32839, &CMfcPictureProcessingDlg::On32839)
ON_COMMAND(ID_32840, &CMfcPictureProcessingDlg::On32840)
ON_COMMAND(ID_32841, &CMfcPictureProcessingDlg::On32841)
ON_COMMAND(ID_32842, &CMfcPictureProcessingDlg::On32842)
ON_COMMAND(ID_32843, &CMfcPictureProcessingDlg::On32843)
ON_COMMAND(ID_32844, &CMfcPictureProcessingDlg::On32844)
ON_COMMAND(ID_32845, &CMfcPictureProcessingDlg::On32845)
ON_COMMAND(ID_32846, &CMfcPictureProcessingDlg::On32846)
ON_COMMAND(ID_32847, &CMfcPictureProcessingDlg::On32847)
ON_COMMAND(ID_32848, &CMfcPictureProcessingDlg::On32848)
ON_COMMAND(ID_32849, &CMfcPictureProcessingDlg::On32849)
ON_COMMAND(ID_32850, &CMfcPictureProcessingDlg::On32850)
ON_COMMAND(ID_32851, &CMfcPictureProcessingDlg::On32851)
ON_COMMAND(ID_32852, &CMfcPictureProcessingDlg::On32852)
ON_COMMAND(ID_32853, &CMfcPictureProcessingDlg::On32853)
ON_COMMAND(ID_32854, &CMfcPictureProcessingDlg::On32854)
ON_COMMAND(ID_32855, &CMfcPictureProcessingDlg::On32855)
ON_COMMAND(ID_32856, &CMfcPictureProcessingDlg::On32856)
ON_COMMAND(ID_32857, &CMfcPictureProcessingDlg::On32857)
ON_COMMAND(ID_32858, &CMfcPictureProcessingDlg::On32858)
ON_COMMAND(ID_32859, &CMfcPictureProcessingDlg::On32859)
ON_COMMAND(ID_32860, &CMfcPictureProcessingDlg::On32860)
ON_COMMAND(ID_32861, &CMfcPictureProcessingDlg::On32861)
ON_COMMAND(ID_32862, &CMfcPictureProcessingDlg::On32862)
ON_COMMAND(ID_32863, &CMfcPictureProcessingDlg::On32863)
ON_COMMAND(ID_32864, &CMfcPictureProcessingDlg::On32864)
ON_COMMAND(ID_32865, &CMfcPictureProcessingDlg::On32865)
ON_COMMAND(ID_32866, &CMfcPictureProcessingDlg::On32866)
ON_COMMAND(ID_32867, &CMfcPictureProcessingDlg::On32867)
ON_COMMAND(ID_32868, &CMfcPictureProcessingDlg::On32868)
ON_COMMAND(ID_32869, &CMfcPictureProcessingDlg::On32869)
ON_COMMAND(ID_32870, &CMfcPictureProcessingDlg::On32870)
ON_COMMAND(ID_32871, &CMfcPictureProcessingDlg::On32871)
ON_COMMAND(ID_32872, &CMfcPictureProcessingDlg::On32872)
ON_COMMAND(ID_32873, &CMfcPictureProcessingDlg::On32873)
ON_COMMAND(ID_32874, &CMfcPictureProcessingDlg::On32874)
ON_COMMAND(ID_32875, &CMfcPictureProcessingDlg::On32875)
ON_COMMAND(ID_32876, &CMfcPictureProcessingDlg::On32876)
ON_COMMAND(ID_32877, &CMfcPictureProcessingDlg::On32877)
ON_COMMAND(ID_32878, &CMfcPictureProcessingDlg::On32878)
ON_COMMAND(ID_32879, &CMfcPictureProcessingDlg::On32879)
ON_COMMAND(ID_32880, &CMfcPictureProcessingDlg::On32880)
ON_COMMAND(ID_32881, &CMfcPictureProcessingDlg::On32881)
ON_COMMAND(ID_32882, &CMfcPictureProcessingDlg::On32882)
END_MESSAGE_MAP()


// CMfcPictureProcessingDlg 消息处理程序

BOOL CMfcPictureProcessingDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。
	m_Menu.LoadMenuW(IDR_MENU1);//添加菜单
	SetMenu(&m_Menu);

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码/////////////////////////////////////////////////////////////////////
	filePath="";

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMfcPictureProcessingDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMfcPictureProcessingDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);

		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		int butx=cxIcon-20;
		int buty=cyIcon-10;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);

	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMfcPictureProcessingDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
//开始书本上加的函数

void CMfcPictureProcessingDlg::GetFilePath(CString file)
{
	filePath=file;//将打开的文件名保存为全局
}

void CMfcPictureProcessingDlg::On32771()//打开文件菜单
{
	TCHAR szFilter[]=_T("所有文件(*.*)|*.*||");//设置过滤器
	CFileDialog fileDlg(TRUE,NULL,NULL,0,szFilter,this);//这是一个文件打开对话
	if(IDOK==fileDlg.DoModal())
	{
		GetFilePath(fileDlg.GetPathName());

		CDib dib;//初始化一个类指针
		if(filePath.Compare(_T(""))!=0)
		{
			dib.LoadFile(filePath);
			if(dib.m_valid)//很重要，要记得判断
			{
				CDC *pDC=GetDC();
				CViewImage imageview;
				imageview.GetDib(&dib);
				imageview.OnDraw(pDC);
			}
		}
		else{
			MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
		}
	}

}

void CMfcPictureProcessingDlg::On32799()//保存文件
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			//------------------------
			/*CDC* pDC=GetDC();
			int width=dib.GetWidth();
			int height=dib.GetHeight();
			LPBYTE p_data=dib.GetData();
			int lbs=dib.GetDibWidthBytes();
			for(int j=0;j<height;j++)
				for(int i=0;i<width;i++)
				{
					if(i>=10&&j>=10&&i<=245&&j<=245)
						*(p_data+lbs*j+i)=0;
					else
						*(p_data+lbs*j+i)=255;
				}*/
				//-------------------------
			PingHuaDib pinghua;
			pinghua.GetDib(&dib);
			pinghua.JiaoYanZaoSheng();
			dib.SaveFile(_T("白边黑色矩形.bmp"));
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}

void CMfcPictureProcessingDlg::On32792()//关于软件
{
	CAboutDlg abDlg;
	abDlg.DoModal();

}

void CMfcPictureProcessingDlg::On32772()//向下扫描
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.OnXiangxia(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32773()//向上扫描
{
	// TODO: Add your command handler code here
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.OnXiangshang(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32774()//向右扫描
{
	// TODO: Add your command handler code here
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.OnXiangyou(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32775()//向左扫描
{
	// TODO: Add your command handler code here
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.OnXiangzuo(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32776()//水平右移
{
	// TODO: Add your command handler code here
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.ToShuiPingYouYi(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32777()//垂直上移
{
	// TODO: Add your command handler code here
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.ToChuiZhiShangYi(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32778()//交叉飞入
{
	// TODO: Add your command handler code here
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.ToJiaoChaFeiRu(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}

}


void CMfcPictureProcessingDlg::On32779()//中间扩张
{
	// TODO: Add your command handler code here
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.ToSiZhouKuoZhang(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32780()//清空
{
	// TODO: Add your command handler code here
	Invalidate();
	//还不知道如何禁用菜单
	//m_Menu.EnableMenuItem(1,MF_GRAYED);

	/*CCmdUI cmdUI;
	cmdUI.m_pOther=NULL;
	cmdUI.m_pMenu=&m_Menu;
	cmdUI.m_pSubMenu=NULL;

	int count=m_Menu.GetMenuItemCount();
	cmdUI.m_nIndexMax=count;
	for(int i=1;i<count;i++)
	{
	int nID=m_Menu.GetMenuItemID(i);
	if(-1==nID||0==nID)
	continue;
	cmdUI.m_nID=nID;
	cmdUI.m_nIndex=i;
	cmdUI.DoUpdate(this,false);
	}*/
}


void CMfcPictureProcessingDlg::On32781()//中间收缩
{
	// TODO: Add your command handler code here
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.ToZhongJianShouSuo(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}

}


void CMfcPictureProcessingDlg::On32782()//水平栅条
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.ToShuiPingShanTiao(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32783()//竖直栅条
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.TOShuZhiShanTiao(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32784()//图像渐显
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.ToTuXiangJianXian(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32785()//水平百叶窗
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.ToShuiPingBaiYeChuang(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32786()//竖直百叶窗
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.ToShuZhiBaiYeChuang(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32787()//马赛克显示
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.ToMaSaiKeXianShi(pDC);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::OnUpdate32780(CCmdUI *pCmdUI)//清空
{
	//Invalidate();

	//还不知道如何禁用菜单
	//m_Menu.EnableMenuItem(1,MF_GRAYED);

	/*CCmdUI cmdUI;
	cmdUI.m_pOther=NULL;
	cmdUI.m_pMenu=&m_Menu;
	cmdUI.m_pSubMenu=NULL;

	int count=m_Menu.GetMenuItemCount();
	cmdUI.m_nIndexMax=count;
	for(int i=1;i<count;i++)
	{
	int nID=m_Menu.GetMenuItemID(i);
	if(-1==nID||0==nID)
	continue;
	cmdUI.m_nID=nID;
	cmdUI.m_nIndex=i;
	cmdUI.DoUpdate(this,false);
	}*/
}


void CMfcPictureProcessingDlg::On32789()//图像平移
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			JHBHDib jdib;
			jdib.GetDib(&dib);
			PingYiTiShi p;
			p.DoModal();
			if(p.ifok==1)//如果点击了确认键而不是点击退出的叉
			{
				jdib.PingYi(p.GetX(),p.GetY());//核心就在这里
				CViewImage imageview;
				imageview.GetDib(&dib);
				imageview.OnDraw2(pDC,dib.GetWidth()+5,0);
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32790()//水平镜像
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			JHBHDib jdib;
			jdib.GetDib(&dib);
			jdib.JingXiang(true);
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.OnDraw2(pDC,dib.GetWidth()+5,0);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32791()//垂直镜像
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			JHBHDib jdib;
			jdib.GetDib(&dib);
			jdib.JingXiang(false);
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.OnDraw2(pDC,dib.GetWidth()+5,0);
			DWORD a=dib.bitmapFileHeader.bfSize;
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}



void CMfcPictureProcessingDlg::On32793()//图像放大
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			JHBHDib jdib;
			jdib.GetDib(&dib);

			int newwidth,newheight,width,height;
			float xzoom,yzoom;//先暂且设为int
			FangDaTiShi p;
			p.DoModal();
			if(p.ifok==1)
			{
				xzoom=p.Getx();
				yzoom=p.Gety();
				width=dib.GetWidth();
				height=dib.GetHeight();
				newwidth=(int)(width*xzoom+0.5);//四舍五入的时候是直接截取小数部分的
				newheight=(int)(height*yzoom+0.5);

				//图像的width并不一定是真正的，实际图像中是4字节对齐存储的
				int linebyte=((newwidth*8+31)/32)*4;
				LPBYTE temp;
				temp=new BYTE[linebyte*newheight];//这里其实平移那个函数已经有提醒了;这样写就是承认一个像素是8位，否认了单色图和真彩色
				memset(temp,(BYTE)0,linebyte*newheight);
				LPBYTE b;
				b=jdib.FangDa(temp,xzoom,yzoom,width,height,newwidth,newheight);
				BITMAPINFO* p=dib.GetInfo();
				p->bmiHeader.biWidth=newwidth;
				p->bmiHeader.biHeight=newheight;

				p->bmiHeader.biSizeImage=linebyte*height;
				CViewImage imageview;
				imageview.GetDib(&dib);
				imageview.OnDraw3(pDC,b,width+5,0);
				delete[]b;
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}





void CMfcPictureProcessingDlg::OnBnClickedButton1()//退出按钮
{
	CDialogEx::OnOK();

}


void CMfcPictureProcessingDlg::On32794()//图像缩小
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			JHBHDib jdib;
			jdib.GetDib(&dib);
			FangDaTiShi p;
			//p.SetDlgItemTextW(IDD_Big,_T("缩小"));//设置窗口的标题，不行，有中断
			p.DoModal();
			if(p.ifok==1)
			{
				float xzoom=p.Getx();
				float yzoom=p.Gety();
				int width=dib.GetWidth();
				int height=dib.GetHeight();
				long newwidth=(long)(width*xzoom+0.5);
				long newheight=(long)(height*yzoom+0.5);
				jdib.SuoXiao(xzoom,yzoom);
				//这里按照书上的，给出了和放大不一样的解决方案，不用改info，直接在显示的时候将显示的大小划定为新大小，其他的废数据不用管
				//::StretchDIBits(pDC->GetSafeHdc(),width+5,0,newwidth,newheight,0,0,newwidth,newheight,dib.GetData(),dib.GetInfo(),DIB_RGB_COLORS,SRCCOPY);
				CViewImage imageview;
				imageview.GetDib(&dib);
				imageview.OnDraw4(pDC,width+5,0,newwidth,newheight);
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32795()//图像转置
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			JHBHDib jdib;
			jdib.GetDib(&dib);
			int width=dib.GetWidth();
			LPBYTE temp=jdib.ZhuanZhi();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.OnDraw3(pDC,temp,width+5,0);
			//::StretchDIBits(pDC->GetSafeHdc(),width+5,0,dib.GetWidth(),dib.GetHeight(),0,0,dib.GetWidth(),dib.GetHeight(),temp,dib.GetInfo(),DIB_RGB_COLORS,SRCCOPY);
			delete[]temp;
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}

}


void CMfcPictureProcessingDlg::On32796()//旋转按钮
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			JHBHDib jdib;
			int width=dib.GetWidth();
			XuanZhuanDlg d;
			d.DoModal();
			if(d.ifok)
			{
				jdib.GetDib(&dib);
				LPBYTE t=jdib.XuanZhuan(d.GetAngle());//旋转30度

				//发现一个问题，我这里没有实现调色板，也可以实现画图
				//::StretchDIBits(pDC->GetSafeHdc(),width+5,0,dib.GetWidth(),dib.GetHeight(),0,0,dib.GetWidth(),dib.GetHeight(),t,dib.GetInfo(),DIB_RGB_COLORS,SRCCOPY);
				CViewImage imageview;
				imageview.GetDib(&dib);
				imageview.OnDraw3(pDC,t,width+5,0);
				delete[]t;
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}
void CMfcPictureProcessingDlg::On32797()//灰度非零取一
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			HuiDuDib d;
			d.GetDib(&dib);
			d.Fei0();
			CViewImage i;
			i.GetDib(&dib);
			CDC *pDC=GetDC();
			i.OnDraw2(pDC,dib.GetWidth()+5,0);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32798()//灰度固定阈值
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			HuiDuDib hui;
			hui.GetDib(&dib);
			GuDingDlg gd;
			gd.DoModal();
			if(gd.ifok)
			{
				hui.GuDing(gd.GetYuZhi());
				CViewImage i;
				i.GetDib(&dib);
				CDC *pDC=GetDC();
				i.OnDraw2(pDC,dib.GetWidth()+5,0);
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}

void CMfcPictureProcessingDlg::On32800()//灰度双阈值
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			HuiDuDib hd;
			hd.GetDib(&dib);
			ShuangYuZhiDlg s;
			s.DoModal();
			if(s.ifok)
			{
				hd.ShuangYu(s.GetLow(),s.GetHigh(),s.GetMode());
				CViewImage imageview;
				imageview.GetDib(&dib);
				CDC *pDC=GetDC();
				imageview.OnDraw2(pDC,dib.GetWidth()+5,0);
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32801()//灰度反色变换
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC *pDC=GetDC();
			HuiDuDib h;
			h.GetDib(&dib);
			h.FanSe();
			CViewImage imageview;
			imageview.GetDib(&dib);
			imageview.OnDraw2(pDC,dib.GetWidth()+5,0);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32802()//灰度窗口变换
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			ChuangkouDlg k;
			k.DoModal();
			if(k.ifok)
			{
				HuiDuDib h;
				h.GetDib(&dib);
				h.ChuangKou(k.GetLow(),k.GetHigh());
				CDC *pDC=GetDC();
				CViewImage imageview;
				imageview.GetDib(&dib);
				imageview.OnDraw2(pDC,dib.GetWidth()+5,0);
			}
		} 
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32803()//折线变换
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			ZheXianDlg z;
			z.DoModal();
			if(z.ifok)
			{
				CDC *pDC=GetDC();
				HuiDuDib hdib;
				hdib.GetDib(&dib);
				hdib.ZheXian(z.GetX1(),z.GetY1(),z.GetX2(),z.GetY2());
				CViewImage imageview;
				imageview.GetDib(&dib);
				imageview.OnDraw2(pDC,dib.GetWidth()+5,0);
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32804()//灰度直方图
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);//这里为了练习效果，只显示原图的
		if(dib.m_valid)
		{
			HuiDuDib hdib;
			hdib.GetDib(&dib);
			float *p=hdib.ZhiFangTu(true);
			//开始画直方图
			ZhiFangDlg d;
			d.SetData(p);
			d.DoModal();
			delete []p;
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32805()//灰度分布均衡化
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			HuiDuDib hdib;
			hdib.GetDib(&dib);
			hdib.FenBuJunHengHua();
			CViewImage imageview;
			imageview.GetDib(&dib);
			CDC* pDC=GetDC();
			imageview.OnDraw2(pDC,dib.GetWidth()+5,0);
			float* p=hdib.ZhiFangTu(true);
			ZhiFangDlg d;
			d.SetData(p);
			d.DoModal();
			delete []p;
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32807()//黑白点噪声滤波
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			PingHuaDib pinghua;
			CViewImage image;
			image.GetDib(&dib);
			pinghua.GetDib(&dib);
			pinghua.ErZhiHua(100);
			image.OnDraw2(pDC,dib.GetWidth()+5,0);
			pinghua.HeiBaiZaoSheng();
			image.OnDraw2(pDC,2*(dib.GetWidth()+5),0);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32808()//消除孤立黑点4连接
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			PingHuaDib pinghua;
			CViewImage image;
			image.GetDib(&dib);
			pinghua.GetDib(&dib);
			pinghua.ErZhiHua(100);
			image.OnDraw2(pDC,dib.GetWidth()+5,0);
			pinghua.GuLiHei(4);
			image.OnDraw2(pDC,2*(dib.GetWidth()+5),0);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32809()//消除孤立黑点8连接
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			PingHuaDib pinghua;
			CViewImage image;
			image.GetDib(&dib);
			pinghua.GetDib(&dib);
			pinghua.ErZhiHua(100);
			pinghua.GuLiHei(8);
			image.OnDraw2(pDC,dib.GetWidth()+5,dib.GetHeight()+5);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32810()//3x3均值滤波
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			PingHuaDib pinghua;
			CViewImage image;
			image.GetDib(&dib);
			pinghua.GetDib(&dib);
			pinghua.ThreeThree();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32811()//超限邻域平均法
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			PingHuaDib pinghua;
			CViewImage image;
			image.GetDib(&dib);
			pinghua.GetDib(&dib);
			pinghua.ChaoXian(100);
			image.OnDraw2(pDC,dib.GetWidth()+5,0);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32812()//选择式掩模平滑
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			PingHuaDib pinghua;
			CViewImage image;
			image.GetDib(&dib);
			pinghua.GetDib(&dib);
			pinghua.JuBuPingJun();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32813()//NxN中值滤波
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			PingHuaDib pinghua;
			CViewImage image;
			image.GetDib(&dib);
			pinghua.GetDib(&dib);
			nnZhongZhiDlg dlg;
			dlg.DoModal();
			if(dlg.ifok)
			{
				pinghua.nnZhongZhi(dlg.GetSize());
				image.OnDraw2(pDC,dib.GetWidth()+5,0);
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32814()//十字中值滤波
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			PingHuaDib pinghua;
			CViewImage image;
			image.GetDib(&dib);
			pinghua.GetDib(&dib);
			nnZhongZhiDlg dlg;
			dlg.DoModal();
			if(dlg.ifok)
			{
				pinghua.shizi(dlg.GetSize());
				image.OnDraw2(pDC,dib.GetWidth()+5,0);
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32815()//NxN最大值滤波
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			PingHuaDib pinghua;
			CViewImage image;
			image.GetDib(&dib);
			pinghua.GetDib(&dib);
			nnZhongZhiDlg dlg;
			dlg.DoModal();
			if(dlg.ifok)
			{
				pinghua.nnZuiDa(dlg.GetSize());
				image.OnDraw2(pDC,dib.GetWidth()+5,0);//哈哈哈，效果很恐怖啊哈哈哈
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32816()//产生随机噪声
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			PingHuaDib pinghua;
			CViewImage image;
			image.GetDib(&dib);
			pinghua.GetDib(&dib);
			pinghua.SuiJiZaoSheng();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32817()//产生椒盐噪声
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			PingHuaDib pinghua;
			CViewImage image;
			image.GetDib(&dib);
			pinghua.GetDib(&dib);
			pinghua.JiaoYanZaoSheng();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32818()//纵向微分
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			BianYuanDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.ZongXiang();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32819()//横向微分
{
	CDib dib;
	if(filePath.Compare(_T(""))!=0)
	{
		dib.LoadFile(filePath);
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			BianYuanDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.HengXiang();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32820()//双向微分
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			BianYuanDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.ShuangXiang();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32821()//门限锐化
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			BianYuanDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			MenXianRuiHuaDlg d;
			d.DoModal();
			if(d.ifok)
			{
				b.MenXianRuiHua(d.GetMenXian());
				image.OnDraw2(pDC,dib.GetWidth()+5,0);	
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32822()//固定锐化
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			BianYuanDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.GuDingRuiHua();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32823()//二值锐化
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			BianYuanDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.ErZhiRuiHua();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32824()//Robert算子边缘检测
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			BianYuanDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.Robert();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32825()//sobel算子边缘检测
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			BianYuanDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.Sobel();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32826()//prewitt算子边缘检测
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			BianYuanDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.Prewitt();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32827()//Krisch算子边缘检测
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			BianYuanDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.Krisch();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32828()//高斯-拉普拉斯算子检测
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			BianYuanDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.Guasslaplacian();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32829()//阈值分割
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			FenGeCeLiangDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			ZhiFangDlg zhi;
			HuiDuDib hui;
			hui.GetDib(&dib);
			float* zhit=hui.ZhiFangTu(true);
			zhi.SetData(zhit);
			zhi.DoModal();
			GuDingDlg d;
			d.DoModal();//选择一个峰谷
			b.YuZhiFenGe(d.GetYuZhi());
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
			delete[] zhit;
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32830()//半阈值分割
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			FenGeCeLiangDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			ZhiFangDlg zhi;
			HuiDuDib hui;
			hui.GetDib(&dib);
			float* zhit=hui.ZhiFangTu(true);
			zhi.SetData(zhit);
			zhi.DoModal();
			GuDingDlg d;
			d.DoModal();
			b.BanYuZhi(d.GetYuZhi());
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
			delete[]zhit;
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32831()//迭代阈值分割
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			FenGeCeLiangDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.DieDaiYuZhi();//luna测出来是92
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32832()//轮廓提取
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			FenGeCeLiangDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.LunKuoTiQu();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32833()//闭合跟踪轮廓
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			FenGeCeLiangDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			if(b.BiHeGenZong())
			   image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32834()//区域增长法
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			FenGeCeLiangDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			Sleep(5000);
			pt.x=0;
			pt.y=0;
			//有问题
			//while(pt.x==0&&pt.y==0)
			//{
			//	GetCursorPos(&pt);
			//};//有问题？？？？？？？？？？？？
			//CRect rect;
			//CWnd *pWnd=GetDlgItem(IDD_MFCPICTUREPROCESSING_DIALOG);
			//pWnd->GetWindowRect(&rect);
			//pWnd->ScreenToClient(&pt);
			pt.x=240;
			pt.y=30;
			b.QuYuZengZhang(pt);
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32835()//二值图像区域标记
{
	if(filePath.Compare(_T(""))!=0)//效果不是很直观，不知道是对还是不对
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			FenGeCeLiangDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			LPBYTE temp=new BYTE[dib.GetDibWidthBytes()*dib.GetHeight()];
			memset(temp,255,sizeof(BYTE)*dib.GetDibWidthBytes()*dib.GetHeight());
			int flag[256]={0};
			b.ErZhiBiaoJi(temp,flag);
			image.OnDraw3(pDC,temp,dib.GetWidth()+5,0);	
			delete[]temp;
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32836()//二值图像的周长测量
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			FenGeCeLiangDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.ErZhiZhouChang();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}



void CMfcPictureProcessingDlg::On32837()//小区域面积消除
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			FenGeCeLiangDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
		    XiaoMianJiDlg xiao;
			xiao.DoModal();
			b.XiaoChuXiaoQuYu(xiao.GetMianJi());
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32838()//水平投影
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			FenGeCeLiangDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.ShuiPingTouYing();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32839()//垂直投影
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			FenGeCeLiangDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			b.ChuiZhiTouYing();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32840()//水平腐蚀
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			XingTaiDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			FenGeCeLiangDib d;
			d.GetDib(&dib);
			d.DieDaiYuZhi();
			b.ShuiPingFuShi();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32841()//垂直腐蚀
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			XingTaiDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			FenGeCeLiangDib d;
			d.GetDib(&dib);
			d.DieDaiYuZhi();
			b.ChuiZhiFuShi();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32842()//全方向腐蚀
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			XingTaiDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			FenGeCeLiangDib d;
			d.GetDib(&dib);
			d.DieDaiYuZhi();
			b.QuanFangXiangFuShi();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32843()//水平膨胀
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			XingTaiDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			FenGeCeLiangDib d;
			d.GetDib(&dib);
			d.DieDaiYuZhi();
			b.ShuiPingPengZhang();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32844()//垂直膨胀
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			XingTaiDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			FenGeCeLiangDib d;
			d.GetDib(&dib);
			d.DieDaiYuZhi();
			b.ChuiZhiPengZhang();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32845()//全方向膨胀
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			XingTaiDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			FenGeCeLiangDib d;
			d.GetDib(&dib);
			d.DieDaiYuZhi();
			b.QuanFangXiangPengZhang();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32846()//开运算
{
if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			XingTaiDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			FenGeCeLiangDib d;
			d.GetDib(&dib);
			d.DieDaiYuZhi();
			b.KaiYunSuan();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32847()//闭运算
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			XingTaiDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			FenGeCeLiangDib d;
			d.GetDib(&dib);
			d.DieDaiYuZhi();
			b.BiYuanSuan();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32848()//细化
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			XingTaiDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			FenGeCeLiangDib d;
			d.GetDib(&dib);
			d.DieDaiYuZhi();
			b.XiHua();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32849()//粗化
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			XingTaiDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			FenGeCeLiangDib d;
			d.GetDib(&dib);
			d.DieDaiYuZhi();
			b.CuHua();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32850()//中轴变换
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			XingTaiDib b;
			CViewImage image;
			image.GetDib(&dib);
			b.GetDib(&dib);
			FenGeCeLiangDib d;
			d.GetDib(&dib);
			d.DieDaiYuZhi();
			b.ZhongZhou();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32851()//快速傅里叶变换
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			BianHuanYuDib d;
			d.GetDib(&dib);
			d.FirstQuickFourier();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32852()//离散余弦变换
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			BianHuanYuDib d;
			d.GetDib(&dib);
			d.DIBLiSanYuXian();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32853()//理想低通滤波器
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			BianHuanYuDib d;
			d.GetDib(&dib);
			d.PerfectFilterL(1000,1000);//不知道了，效果明显是不对的；会随着u，v的增大圆扩展显示的画面，整体亮了很多
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}
void CMfcPictureProcessingDlg::GetNextFile(CString *file)
{
	TCHAR szFilter[]=_T("所有文件(*.*)|*.*||");
	CFileDialog f(TRUE,NULL,NULL,0,szFilter,this);
	if(IDOK==f.DoModal())
	{
		*(file)=f.GetPathName();
	}
}

void CMfcPictureProcessingDlg::On32854()//图像加
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CString nextfile=NULL;
			GetNextFile(&nextfile);
			if(nextfile.Compare(_T(""))!=0)
			{
				CDib ndib;
				ndib.LoadFile(nextfile);
				if(ndib.m_valid)
				{
					CDC* pDC=GetDC();
					CViewImage image;
					image.GetDib(&ndib);
					image.OnDraw2(pDC,dib.GetWidth()+5,0);

					image.GetDib(&dib);
					HeChengDib d;
					d.GetDib(&dib);
					d.Add(ndib.GetData());//两个图片大小必须要一样
					image.OnDraw2(pDC,2*(dib.GetWidth()+5),0);	
				}
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32855()//图像减
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CString nextfile=NULL;
			GetNextFile(&nextfile);
			if(nextfile.Compare(_T(""))!=0)
			{
				CDib ndib;
				ndib.LoadFile(nextfile);
				if(ndib.m_valid)
				{
					CDC* pDC=GetDC();
					CViewImage image;
					image.GetDib(&ndib);
					image.OnDraw2(pDC,dib.GetWidth()+5,0);

					image.GetDib(&dib);
					HeChengDib d;
					d.GetDib(&dib);
					d.Sub(ndib.GetData());//两个图片大小必须要一样
					image.OnDraw2(pDC,2*(dib.GetWidth()+5),0);	
				}
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32856()//图像与
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CString nextfile=NULL;
			GetNextFile(&nextfile);
			if(nextfile.Compare(_T(""))!=0)
			{
				CDib ndib;
				ndib.LoadFile(nextfile);
				if(ndib.m_valid)
				{
					CDC* pDC=GetDC();
					CViewImage image;
					image.GetDib(&ndib);
					image.OnDraw2(pDC,dib.GetWidth()+5,0);

					image.GetDib(&dib);
					HeChengDib d;
					d.GetDib(&dib);
					d.Yu(ndib.GetData());//两个图片大小必须要一样
					image.OnDraw2(pDC,2*(dib.GetWidth()+5),0);	
				}
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32857()//图像或
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CString nextfile=NULL;
			GetNextFile(&nextfile);
			if(nextfile.Compare(_T(""))!=0)
			{
				CDib ndib;
				ndib.LoadFile(nextfile);
				if(ndib.m_valid)
				{
					CDC* pDC=GetDC();
					CViewImage image;
					image.GetDib(&ndib);
					image.OnDraw2(pDC,dib.GetWidth()+5,0);

					image.GetDib(&dib);
					HeChengDib d;
					d.GetDib(&dib);
					d.Huo(ndib.GetData());//两个图片大小必须要一样
					image.OnDraw2(pDC,2*(dib.GetWidth()+5),0);	
				}
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32858()//图像非
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			HeChengDib d;
			d.GetDib(&dib);
			d.Fei();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32859()//图像或非
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CString nextfile=NULL;
			GetNextFile(&nextfile);
			if(nextfile.Compare(_T(""))!=0)
			{
				CDib ndib;
				ndib.LoadFile(nextfile);
				if(ndib.m_valid)
				{
					CDC* pDC=GetDC();
					CViewImage image;
					image.GetDib(&ndib);
					image.OnDraw2(pDC,dib.GetWidth()+5,0);

					image.GetDib(&dib);
					HeChengDib d;
					d.GetDib(&dib);
					d.HuoFei(ndib.GetData());//两个图片大小必须要一样
					image.OnDraw2(pDC,2*(dib.GetWidth()+5),0);	
				}
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32860()//图像与非
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CString nextfile=NULL;
			GetNextFile(&nextfile);
			if(nextfile.Compare(_T(""))!=0)
			{
				CDib ndib;
				ndib.LoadFile(nextfile);
				if(ndib.m_valid)
				{
					CDC* pDC=GetDC();
					CViewImage image;
					image.GetDib(&ndib);
					image.OnDraw2(pDC,dib.GetWidth()+5,0);

					image.GetDib(&dib);
					HeChengDib d;
					d.GetDib(&dib);
					d.YuFei(ndib.GetData());//两个图片大小必须要一样
					image.OnDraw2(pDC,2*(dib.GetWidth()+5),0);	
				}
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32861()//异或
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CString nextfile=NULL;
			GetNextFile(&nextfile);
			if(nextfile.Compare(_T(""))!=0)
			{
				CDib ndib;
				ndib.LoadFile(nextfile);
				if(ndib.m_valid)
				{
					CDC* pDC=GetDC();
					CViewImage image;
					image.GetDib(&ndib);
					image.OnDraw2(pDC,dib.GetWidth()+5,0);

					image.GetDib(&dib);
					HeChengDib d;
					d.GetDib(&dib);
					d.Huo(ndib.GetData());//两个图片大小必须要一样
					image.OnDraw2(pDC,2*(dib.GetWidth()+5),0);	
				}
			}
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32862()//彩色图像最大值变灰度处理
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.MaxGray();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32863()//公式法变灰度
{
	
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.GongShiGray();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32864()//灰度变彩色
{
	
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.PaintColor(50,100,50);
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32865()//亮度调整
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.LightAlter(150);
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32866()//对比度调整
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.ContrastAlter(50);//数值太大的话连颜色都改了
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32867()//亮度的逆反处理
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.LightReverse();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32868()//曝光处理
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.Exposal();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32869()//彩色图像的扩散处理
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.Spread();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32870()//添加马赛克效果
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.Mosaic();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32871()//彩色图像邻域平均法平滑
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.Smoothness();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32872()//3x3低通滤波
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.Lowlvbo3();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32873()//5x5低通滤波
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.Lowlvbo5();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}



void CMfcPictureProcessingDlg::On32874()//图像的水平增强
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.ShuiPingGrow();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32875()//图像垂直增强
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.ChuiZhiGrow();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32876()//彩色图像双方向增强
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.ShuangXiangGrow();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32877()//彩色图像梯度锐化
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.Sharp();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32878()//彩色图基本高通
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.Gaotonglvbo(1);
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32879()//彩色图中等高通滤波
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.Gaotonglvbo(2);
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32880()//彩色图像过量高通滤波
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.Gaotonglvbo(3);
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32881()//浮雕处理
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.FuDiao();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}


void CMfcPictureProcessingDlg::On32882()//彩色图霓虹处理
{
	if(filePath.Compare(_T(""))!=0)
	{
		CDib dib;
		dib.LoadFile(filePath);	
		if(dib.m_valid)
		{
			CDC* pDC=GetDC();
			CViewImage image;
			image.GetDib(&dib);
			CaiSeDib d;
			d.GetDib(&dib);
			d.NiHong();
			image.OnDraw2(pDC,dib.GetWidth()+5,0);	
		}
	}
	else{
		MessageBox(_T("请先选择文件！"),_T("提示"),MB_OK);
	}
}
