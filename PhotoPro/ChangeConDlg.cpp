// ChangeConDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "PhotoPro.h"
#include "ChangeConDlg.h"
#include "afxdialogex.h"


// ChangeConDlg �Ի���

IMPLEMENT_DYNAMIC(ChangeConDlg, CDialogEx)

	ChangeConDlg::ChangeConDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(ChangeConDlg::IDD, pParent)
{

}

ChangeConDlg::~ChangeConDlg()
{
}

void ChangeConDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ChangeConDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &ChangeConDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// ChangeConDlg ��Ϣ�������


void ChangeConDlg::OnBnClickedOk()
{
	CString input_data;
	GetDlgItem(IDC_CONDATA)->GetWindowText(input_data);
	if (input_data=="" )
	{
		AfxMessageBox("��������ֵ��");

	}
	else
	{
		adjust_number = _tstof(input_data);
		if (adjust_number<0)
		{
			AfxMessageBox("����������������롣");
		}
		CDialogEx::OnOK();
	}
}
