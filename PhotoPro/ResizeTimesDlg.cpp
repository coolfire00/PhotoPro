// ResizeTimesDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "PhotoPro.h"
#include "ResizeTimesDlg.h"
#include "afxdialogex.h"
#include "Resource.h"


// ResizeTimesDlg �Ի���

IMPLEMENT_DYNAMIC(ResizeTimesDlg, CDialogEx)

ResizeTimesDlg::ResizeTimesDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(ResizeTimesDlg::IDD, pParent)
{

}

ResizeTimesDlg::~ResizeTimesDlg()
{
}

void ResizeTimesDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ResizeTimesDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &ResizeTimesDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// ResizeTimesDlg ��Ϣ�������


void ResizeTimesDlg::OnBnClickedOk()
{
	CString input_data;
	GetDlgItem(IDC_RESIZETIMES)->GetWindowText(input_data);
	if (input_data=="" )
	{
		AfxMessageBox("��������ֵ��");

	}
	else
	{
		times = _tstof(input_data);
		if (times<0)
		{
			AfxMessageBox("����������������롣");
		}
		CDialogEx::OnOK();	
	}
}
