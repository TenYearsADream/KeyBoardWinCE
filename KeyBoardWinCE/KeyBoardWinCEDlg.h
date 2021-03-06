// KeyBoardWinCEDlg.h : 头文件
//

#pragma once

// CKeyBoardWinCEDlg 对话框
class CKeyBoardWinCEDlg : public CDialog
{
// 构造
public:
	CKeyBoardWinCEDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_KEYBOARDWINCE_DIALOG };


	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
#if defined(_DEVICE_RESOLUTION_AWARE) && !defined(WIN32_PLATFORM_WFSP)
	afx_msg void OnSize(UINT /*nType*/, int /*cx*/, int /*cy*/);
#endif
	DECLARE_MESSAGE_MAP()

public:
	int m_key;
	unsigned int techBox;
	afx_msg LRESULT OnTeachBoxKeyHandler(WPARAM,LPARAM);
	void AddSystrayIcon(void);
	void DelSystrayIcon(void);
protected:
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedButtonMin();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButtonSetIpaddress();
	afx_msg void OnBnClickedButtonOpenFtpTool();
};
