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
	((CButton *)GetDlgItem(IDC_RADIOADDBRI))->SetCheck(true);
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ChangeBriDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &ChangeBriDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// ChangeBriDlg ��Ϣ�������


void ChangeBriDlg::OnBnClickedOk()
{
	GetDlgItem(IDC_BRIDATA)->GetWindowText(input_data);
	if (input_data=="" )
	{
		AfxMessageBox("��������ֵ��");
		
	}
	else
	{
	    adjust_number = _tstof(input_data);
		if (((CButton *)GetDlgItem(IDC_RADIOREDUCEBRI))->GetCheck())
		{
			adjust_number = 0- adjust_number;
		}
		CDialogEx::OnOK();	
	}

}
