// lyqDlg.h : header file
//

#if !defined(AFX_LYQDLG_H__3203CCA1_C197_4E19_8773_1A4A9D413E0D__INCLUDED_)
#define AFX_LYQDLG_H__3203CCA1_C197_4E19_8773_1A4A9D413E0D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CLyqDlg dialog

class CLyqDlg : public CDialog
{
// Construction
public:
	CLyqDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CLyqDlg)
	enum { IDD = IDD_LYQ_DIALOG };
	BOOL	m_checkeat;
	BOOL	m_checkspit;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLyqDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CLyqDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnUnlimited();
	afx_msg void OnUnlimitedeat();
	afx_msg void OnUnlimitedSpit();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LYQDLG_H__3203CCA1_C197_4E19_8773_1A4A9D413E0D__INCLUDED_)
