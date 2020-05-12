// jsqDlg.cpp : implementation file
//

#include "stdafx.h"
#include "jsq.h"
#include "jsqDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

int count=0;
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
// CJsqDlg dialog

CJsqDlg::CJsqDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CJsqDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CJsqDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CJsqDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CJsqDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CJsqDlg, CDialog)
	//{{AFX_MSG_MAP(CJsqDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9)
	ON_BN_CLICKED(IDC_BUTTON10, OnButton10)
	ON_BN_CLICKED(IDC_BUTTON11, OnButton11)
	ON_BN_CLICKED(IDC_BUTTON12, OnButton12)
	ON_BN_CLICKED(IDC_BUTTON13, OnButton13)
	ON_BN_CLICKED(IDC_BUTTON14, OnButton14)
	ON_BN_CLICKED(IDC_BUTTON15, OnButton15)
	ON_BN_CLICKED(IDC_BUTTON16, OnButton16)
	ON_BN_CLICKED(IDC_BUTTON19, OnButton19)
	ON_BN_CLICKED(IDC_BUTTON18, OnButton18)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON17, OnButton17)
	ON_BN_CLICKED(IDC_BUTTON20, OnButton20)
	ON_BN_CLICKED(IDC_BUTTON21, OnButton21)
	ON_BN_CLICKED(IDC_BUTTON22, OnButton22)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJsqDlg message handlers

BOOL CJsqDlg::OnInitDialog()
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
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CJsqDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CJsqDlg::OnPaint() 
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
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CJsqDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}
//��������������ȼ�
int Lv(char m)
{
	switch(m)
	{
	case '+':
		return 1; break;
	case '-':
		return 1; break;
	case '*':
		return 2; break;
	case '/':
		return 2; break;
	case '%':
		return 2; break;
	case '(':
		return 0; break;
	case ')':
		return 0; break;
	case '!':
		return -1; break;
	default:break;
	}
}
//������ջ��
template<class T>
class stack;
//�ڵ���
template <class T>
class Node {
	friend stack<T>; //��ջ��Ϊ��Ԫ
private:
	T data;
	Node<T> *link;
};

template<class T>
class stack
{
public:
	stack() { top = 0; }
	bool IsEmpty() const
	{
		return top == 0;
	}
	//bool IsFull() const;
	T Top() const;
	stack<T>& Add(const T& x); //��ӷ���
	stack<T>& Delete(T& x);    //ɾ������
private:
	Node<T> *top;
};

//����ջ��Ԫ��
template<class T>
T stack<T>::Top()const
{
	return top->data;
}

//��ջ�����Ԫ��
template<class T>
stack<T>& stack<T>::Add(const T& x)
{
	Node<T> *p = new Node<T>;
	p->data = x;
	p->link = top;
	top = p;
	return *this;
}

//��ջ��ɾ��Ԫ��
template<class T>
stack<T>& stack<T>::Delete(T& x)
{
	x = top->data;
	Node<T> *p = top;
	top = top->link;
	delete p;
	return *this;
}

//�Ӻ�
void CJsqDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"+"));
}
//�˺�
void CJsqDlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
	CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"*"));
}
//����
void CJsqDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"-"));
}
//����
void CJsqDlg::OnButton5() 
{
	// TODO: Add your control notification handler code here
	CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"/"));
}
//ȡ���
void CJsqDlg::OnButton6() 
{
	// TODO: Add your control notification handler code here
	CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"%"));
}
//����1
void CJsqDlg::OnButton7() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"1"));
}
//����2
void CJsqDlg::OnButton8() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"2"));
}
//����3
void CJsqDlg::OnButton9() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"3"));
}
//����4
void CJsqDlg::OnButton10() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"4"));
}
//����5
void CJsqDlg::OnButton11() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"5"));
}
//����6
void CJsqDlg::OnButton12() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"6"));
}
//����7
void CJsqDlg::OnButton13() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"7"));
}
//����8
void CJsqDlg::OnButton14() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"8"));
}
//����9
void CJsqDlg::OnButton15() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"9"));
}
//����0
void CJsqDlg::OnButton16() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"0"));
}
//������
void CJsqDlg::OnButton19() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"("));
}
//������
void CJsqDlg::OnButton18() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+")"));
}

//���ں�
void CJsqDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	stack<double> X;                  //��ջ1��������
	stack<char> Y;                    //��ջ2�����������
	CString str = "";                 //str������ű��ʽ
	CString str2 = "";                //str2����ƴ�Ӷ�λ����
	char c;                           //c�������Y�г�ջ��Ԫ��
	double C;                         //C�������X�г�ջ��Ԫ��
	GetDlgItemText(IDC_STATIC,str);   //��ȡ����ϵı��ʽ
	str += "!?";                      //�ڱ��ʽ��ĩβ���ϣ����������Ĳ���
	int i = 0;                        //i��0��ʼ�������������ʽ
	int e=0;                          //e������¼���ʽ�������ŵ�����
	int f=0;                          //f������¼���ʽ�������ŵ�����
	double t;                         //t������������double�����Ľ��         
	double q;                         //q��������stringת����double�����
	bool adc=true;                    
	//�жϱ��ʽ�Ƿ�淶
	for(int x=0;str[x] != '!';x++)
	{
		if(str[x]=='.')
		{
			if(str[x+1]=='('||str[x+1]==')'|| str[x+1]=='%' || str[x+1] =='!'||str[x+1]>=42 && str[x+1]<=47)
			{
				//MessageBox("С�������û�����֣�");
				SetDlgItemText(IDC_STATIC,_T("С�������û�����֣�"));
				return;
			}
		}
		if(str[x]=='(')
		{
			e++;
			if(str[x+1]=='.')
			{
				//MessageBox("С����ǰ��û�����֣�");
				SetDlgItemText(IDC_STATIC,_T("С����ǰ��û�����֣�"));
				return;	
			}
			if(str[x+1]==')')
			{
			//	MessageBox("�������治��Ϊ�գ�");
				SetDlgItemText(IDC_STATIC,_T("�������治��Ϊ�գ�"));
				return;
			}
			if(x>0 && str[x-1] > 47 && str[x-1] < 58)
			{
			//	MessageBox("����ǰ��û���������");
				SetDlgItemText(IDC_STATIC,_T("����ǰ��û���������"));
				return;
			}
		}

		if(str[x]==')')
		{
			f++;
			if(str[x+1]=='.')
			{
				//MessageBox("С����ǰ��û�����֣�");
				SetDlgItemText(IDC_STATIC,_T("С����ǰ��û�����֣�"));
				return;	
			}
			if(str[x+1] > 47 && str[x+1] < 58)
			{
				//MessageBox("���ź���û���������");
				SetDlgItemText(IDC_STATIC,_T("���ź���û���������"));
				return;
			}
			int T=0;
			while(T<x)
			{
				if(str[T]=='(')
					break;
				T++;
			}
			if(T==x)
			{
				//MessageBox("�������Ų�ƥ�䣡");
				SetDlgItemText(IDC_STATIC,_T("�������Ų�ƥ�䣡"));
				return;
			}
			if(str[x+1]== '(')
			{
				//MessageBox("���ź���û���������");
				SetDlgItemText(IDC_STATIC,_T("���ź���û���������"));
				return;
			}
		}
		if(str[x]>=42 && str[x]<=47 || str[x]=='%')
		{
			if(str[x+1]=='.')
			{
				//MessageBox("С����ǰ��û�����֣�");
				SetDlgItemText(IDC_STATIC,_T("С����ǰ��û�����֣�"));
				return;	
			}
			if(x==0 && str[x]!='-')
			{
				//MessageBox("�����ǰ��û�����֣�");
				SetDlgItemText(IDC_STATIC,_T("�����ǰ��û�����֣�"));
				return;
			}
			if(str[x+1]=='!'|| str[x+1]==')')
			{
				//MessageBox("���������û�����֣�");
				SetDlgItemText(IDC_STATIC,_T("���������û�����֣�"));
				return;
			}
			if(str[x+1]>=42 && str[x+1]<=47 || str[x+1]=='%')
			{
				//MessageBox("�����Ķ���������");
				SetDlgItemText(IDC_STATIC,_T("�����Ķ���������"));
				return;
			}
		}
	}
	if(e!=f)
	{
		//MessageBox("�������Ų�ƥ�䣡");
		SetDlgItemText(IDC_STATIC,_T("�������Ų�ƥ�䣡"));
		return;
	}

	//��ʼ�Ա��ʽ������ջ���㣺
	while (str[i] != '?')
	{
		if (str[i] > 47 && str[i] < 58 || str[i]=='.' )
		{
			int F=0;             //F������¼С����ĸ���
			for (i; str[i] > 47 && str[i] < 58 || str[i]=='.' ; i++)
			{
				str2 += str[i];
				if(str[i]=='.')
				{
					F++;
				}
				if(F>1)
				{
					//MessageBox("һ������С�������һ����");
					SetDlgItemText(IDC_STATIC,_T("һ������С�������һ����"));
					return;
				}
			}
			q = atof(str2);
			str2 = "";
			X.Add(q);
		}
		if (str[i] >= 33 && str[i] <= 47)//33�Ǹ�̾�ţ�47�ǳ��ţ����Է�Χ�Ƚϴ�
		{
			if (i == 0 && str[i] == '-' && adc)
			{
				i++;
				if (str[i] > 47 && str[i] < 58 || str[i]=='.')
				{
					int F=0;
					for (i; str[i] > 47 && str[i] < 58 || str[i]=='.'; i++)
					{
						str2 += str[i];
						if(str[i]=='.')
						{
							F++;
						}
						if(F>1)
						{
						//	MessageBox("һ������С�������һ����");
							SetDlgItemText(IDC_STATIC,_T("һ������С�������һ����"));
							return;
						}
					}
					q = 0 - atof(str2);
					str2 = "";
					X.Add(q);
					i--;
				}
				else if(str[i]=='(' )
				{
				adc=false;
				double Q=0;
				X.Add(Q);
				i=-1;
				}
			}
			else if (Y.IsEmpty() || str[i] == '(' || Lv(str[i]) > Lv(Y.Top()))
			{
				Y.Add(str[i]);
				if (str[i + 1] == '-')
				{
					//cout << "..."<<i<<endl;
					i = i + 2;
					if (str[i] > 47 && str[i] < 58 || str[i]=='.')//************************
					{
						int F=0;
						for (i; str[i] > 47 && str[i] < 58 || str[i]=='.'; i++)
						{
							str2 += str[i];
							if(str[i]=='.')
							{
								F++;
							}
							if(F>1)
							{
							//	MessageBox("һ������С�������һ����");
								SetDlgItemText(IDC_STATIC,_T("һ������С�������һ����"));
								return;
							}
						}
						q = 0 - atof(str2);
						str2 = "";
						X.Add(q);
					}
					i--;
				}
			
			}
			else
			{
				if (str[i] == ')')
				{
					for (; Y.Top() != '('; Y.Delete(c))
					{
						char f = Y.Top();
						double a = X.Top();
						if(a==0 && (f=='/' || f=='%'))
						{
							//MessageBox("��������Ϊ0��");
							SetDlgItemText(IDC_STATIC,_T("��������Ϊ0��"));
							return;
						}
						X.Delete(C);
						double b = X.Top();
						X.Delete(C);
						switch (f)
						{
						case '+':t = b + a; break;
						case '-':t = b - a; break;
						case '*':t = b * a; break;
						case '/':t = b / a; break;
						case '%':
							if(a<1 && a>-1)
							{
								//MessageBox("ȡ�������Ϊ0��");
								SetDlgItemText(IDC_STATIC,_T("ȡ�������Ϊ0��"));
								return;	
							}
							t = (int)b % (int)a; 
							break;
						default:break;
						}
						X.Add(t);

					}
					Y.Delete(c);
				}
				else
				{
					for (; !(Y.IsEmpty()) && Lv(str[i]) <= Lv(Y.Top()); Y.Delete(c))
					{
						char f = Y.Top();
						double a = X.Top();
						if(a==0 && (f=='/' || f=='%'))
						{
							//MessageBox("��������Ϊ0��");
							SetDlgItemText(IDC_STATIC,_T("��������Ϊ0��"));
							return;
						}
						X.Delete(C);
						double b = X.Top();
						X.Delete(C);
						switch (f)
						{
						case '+':t = b + a; break;
						case '-':t = b - a; break;
						case '*':t = b * a; break;
						case '/':t = b / a; break;
						case '%':
							if(a<1 && a>-1)
							{
								MessageBox("ȡ�������Ϊ0��");
								SetDlgItemText(IDC_STATIC,_T("������ʽ"));
								return;	
							}
							t = (int)b % (int)a;
							break;
						default:break;
						}
						X.Add(t);
						//cout << "..." << endl;
					}
					Y.Add(str[i]);
				}
			}
		}
		i++;
	}
	CString a;
	double I=X.Top();
	X.Delete(C);
	a.Format("%lf",I); 
	SetDlgItemText(IDC_STATIC,_T(a));
	
}

void CJsqDlg::OnButton17() 
{
	// TODO: Add your control notification handler code here
	SetDlgItemText(IDC_STATIC,_T(""));
}

void CJsqDlg::OnButton20() 
{
	// TODO: Add your control notification handler code here
	CString temp,num;
	GetDlgItemText(IDC_STATIC,num);
	temp=num.Left(num.GetLength()-1);
	SetDlgItemText(IDC_STATIC,temp);
}

//�����ļ�
void CJsqDlg::OnButton21() 
{
	// TODO: Add your control notification handler code here
	//count��¼���ļ��Ѿ������˶��ٸ���������׺
	CString Count="";
	Count.Format(_T("%d"), count);
	CString strFile = _T("");
	//���ļ������D�̸�Ŀ¼�
	CString strFile2 = "D:\\anwser"+Count+".txt";
	CString cstrLine=_T("");
	CString strText=_T("");
	//dlgFileѡ���
	CFileDialog dlgFile(TRUE, NULL, NULL, OFN_HIDEREADONLY, _T("Describe Files (*.txt)|*.txt|All Files (*.*)|*.*||"), NULL);
//���ȷ��֮��ʼִ��
if (dlgFile.DoModal()==IDOK)
{
	int coun =0;     //coun������¼���ʽ������
	CString Coun="";
    strFile = dlgFile.GetPathName();   //��ȡ�㿪���ļ���·��
	CString strText = "";              
	CStdioFile file;                   //file��Ҫ������ļ�
	CStdioFile file2;                  //file2��Ҫ�������ļ�
	file.Open(strFile,CFile::modeRead);
	file2.Open(strFile2, CFile::modeCreate | CFile::modeNoTruncate | CFile::modeWrite | CFile::shareDenyWrite);
while (file.ReadString(cstrLine))
{
	coun++;
	Coun.Format(_T("%d"), coun);
	SetDlgItemText(IDC_STATIC,_T(cstrLine));
	OnButton2();                      //OnButton2�ǵ��ں�
	GetDlgItemText(IDC_STATIC,strText);
	file2.WriteString(Coun+"��"+strText+"\n");
//	MessageBox(cstrLine);
}
SetDlgItemText(IDC_STATIC,_T("�뵽answer"+Count+".txt�鿴��"));
count++;
	//file.ReadString(strText);
	//SetDlgItemText(IDC_STATIC,_T(strText));
}

}

void CJsqDlg::OnButton22() 
{
	// TODO: Add your control notification handler code here
	CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"."));
}

