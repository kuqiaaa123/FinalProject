
// Final ProjectDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CFinalProjectDlg dialog
class CFinalProjectDlg : public CDialogEx
{
// Construction
public:
	CFinalProjectDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FINALPROJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic splashImage;
	CBitmap image;
	int count;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
