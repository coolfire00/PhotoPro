// RotateDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "PhotoPro.h"
#include "RotateDlg.h"
#include "afxdialogex.h"


// RotateDlg �Ի���

IMPLEMENT_DYNAMIC(RotateDlg, CDialogEx)

RotateDlg::RotateDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(RotateDlg::IDD, pParent)
{

}

RotateDlg::~RotateDlg()
{
}

void RotateDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(RotateDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &RotateDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// RotateDlg ��Ϣ�������


void RotateDlg::OnBnClickedOk()
{
	CString input_data;
	GetDlgItem(IDC_ANGLE)->GetWindowText(input_data);
	if (input_data=="" )
	{
		AfxMessageBox("��������ֵ��");

	}
	else
	{
		angle = _tstof(input_data);
		CDialogEx::OnOK();	
	}
}
