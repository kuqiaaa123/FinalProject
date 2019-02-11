// Windows.cpp : implementation file
//

#include "stdafx.h"
#include "Final Project.h"
#include "Windows.h"
#include "afxdialogex.h"
#include "Final Project.h"


// Windows dialog

IMPLEMENT_DYNAMIC(Windows, CDialogEx)

Windows::Windows(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DESKTOP, pParent)
{
	FinalProjectDIg a;
}

Windows::~Windows()
{
}

void Windows::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Windows, CDialogEx)
END_MESSAGE_MAP()


// Windows message handlers
