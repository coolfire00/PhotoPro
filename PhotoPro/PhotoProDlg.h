
// PhotoProDlg.h : ͷ�ļ�
//

#pragma once
#include <core\types_c.h>
#include "CvvImage.h"
#include "Resource.h"

// CPhotoProDlg �Ի���
class CPhotoProDlg : public CDialogEx
{
// ����
public:
	CPhotoProDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_PHOTOPRO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	IplImage * src_img;
	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedShowIMG();
	void DrawPicToHDC(IplImage *img, UINT ID,int pos_x, int pos_y);
	afx_msg void OnBnClickedButton2();
};
