// ChangeBriDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "PhotoPro.h"
#include "ChangeBriDlg.h"
#include "afxdialogex.h"
#include "Resource.h"


// ChangeBriDlg �Ի���

IMPLEMENT_DYNAMIC(ChangeBriDlg, CDialogEx)

ChangeBriDlg::ChangeBriDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(ChangeBriDlg::IDD, pParent)
{

}

ChangeBriDlg::~ChangeBriDlg()
{
}

void ChangeBriDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ChangeBriDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &ChangeBriDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// ChangeBriDlg ��Ϣ�������


void ChangeBriDlg::OnBnClickedOk()
{
	GetDlgItem(IDC_DATA)->GetWindowText(input_data);
	CDialogEx::OnOK();
}
