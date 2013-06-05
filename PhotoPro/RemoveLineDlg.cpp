// RemoveLineDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "PhotoPro.h"
#include "RemoveLineDlg.h"
#include "afxdialogex.h"


// RemoveLineDlg �Ի���

IMPLEMENT_DYNAMIC(RemoveLineDlg, CDialogEx)

RemoveLineDlg::RemoveLineDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(RemoveLineDlg::IDD, pParent)
{

}

RemoveLineDlg::~RemoveLineDlg()
{
}

void RemoveLineDlg::DoDataExchange(CDataExchange* pDX)
{
	((CButton *)GetDlgItem(IDC_5PX))->SetCheck(true);
	
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(RemoveLineDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &RemoveLineDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// RemoveLineDlg ��Ϣ�������


void RemoveLineDlg::OnBnClickedOk()
{
	if (((CButton *)GetDlgItem(IDC_5PX))->GetCheck())
	{
		pLeng = 5;
	}
	if (((CButton *)GetDlgItem(IDC_10PX))->GetCheck())
	{
		pLeng = 10;
	}
	if (((CButton *)GetDlgItem(IDC_15PX))->GetCheck())
	{
		pLeng = 15;
	}
	CDialogEx::OnOK();	
}
