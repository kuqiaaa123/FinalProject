#pragma once


// Windows dialog

class Windows : public CDialogEx
{
	DECLARE_DYNAMIC(Windows)

public:
	Windows(CWnd* pParent = NULL);   // standard constructor
	virtual ~Windows();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DESKTOP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
