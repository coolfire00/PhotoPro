// ChangeByValDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "PhotoPro.h"
#include "ChangeByValDlg.h"
#include "afxdialogex.h"


// ChangeByValDlg �Ի���

IMPLEMENT_DYNAMIC(ChangeByValDlg, CDialogEx)

ChangeByValDlg::ChangeByValDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(ChangeByValDlg::IDD, pParent)
{

}

ChangeByValDlg::~ChangeByValDlg()
{
}

void ChangeByValDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ChangeByValDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &ChangeByValDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// ChangeByValDlg ��Ϣ�������


void ChangeByValDlg::OnBnClickedOk()
{
	CString input_width;
	CString input_height;
	GetDlgItem(IDC_REWIDTH)->GetWindowText(input_width);
	GetDlgItem(IDC_REHEIGHT)->GetWindowText(input_height);
	if (input_width==""||input_height=="" )
	{
		AfxMessageBox("��������ֵ��");

	}
	else
	{
		width = _tstoi(input_width);
		height = _tstoi(input_height);
		if (width<0||height<0)
		{
			AfxMessageBox("����������������롣");
		}
		CDialogEx::OnOK();
	}
}
