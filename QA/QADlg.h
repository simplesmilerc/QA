
// QADlg.h: 標頭檔
//

#pragma once


// CQADlg 對話方塊
class CQADlg : public CDialogEx
{
// 建構
public:
	CQADlg(CWnd* pParent = nullptr);	// 標準建構函式

// 對話方塊資料
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_QA_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支援


// 程式碼實作
protected:
	HICON m_hIcon;

	// 產生的訊息對應函式
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();

	// Intercept instruction
	BOOL PreTranslateMessage(MSG* pMsg);;

	DECLARE_MESSAGE_MAP()
};
