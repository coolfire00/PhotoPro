
// PhotoProDlg.h : ͷ�ļ�
//

#pragma once
#include <core\types_c.h>
#include "CvvImage.h"
#include "Resource.h"
#include "PhotoInfo.h"

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
	IplImage * temp_img;
	IplImage * dst_img;
	HCURSOR m_HArrow;
	HCURSOR m_HCross;
	bool isChooseArea;
	bool isBeginDraw;
	PhotoInfo pi;
	RECT    m_recDrawing;
	HPEN    m_penDrawing;
	POINT   m_ptBegin;
	int img_OP;
	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	
	void DrawDstImg();
	void DrawSrcImg();
	void UpdateDstImg(IplImage * modifiedImg);
	void drawRectangle(CPoint point);
	void doOperation(int op, CPoint sp, CPoint ep );
	afx_msg void OnBnClickedShowIMG();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedLoadIMG();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedSaveImg();
	afx_msg void OnBnClickedDoSmooth();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedAddMosaic();
	afx_msg void OnBnClickedUsmSharp();
	afx_msg void OnBnClickedAllSharp();
	afx_msg void OnBnClickedAllBlur();
	afx_msg void OnBnClickedButton10();
};
