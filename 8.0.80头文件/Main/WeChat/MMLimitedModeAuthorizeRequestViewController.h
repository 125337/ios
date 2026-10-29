@interface MMLimitedModeAuthorizeRequestViewController : MMAcceptAgreementBaseViewController <MMLimitedModeAuthorizeRequestLogicDelegate>
{
    UIButton * m_closeButton; // +0x70
    CContact * m_guardianContact; // +0x78
    BOOL m_needReload; // +0x80
    double m_tableCellHeight; // +0x88
    MMLimitedModeAuthorizeRequestLogic * m_authorizeRequestLogic; // +0x90
    BOOL _m_onlyIntercept; // +0x98
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0xa0
    MMTableViewInfo * m_tableViewInfo; // +0xa8
    MMTableView * m_tableView; // +0xb0
    id <MMLimitedModeAuthorizeRequestViewControllerLogicDelegate> _m_delegate; // +0xb8
    NSString * _m_accessTitle; // +0xc0
    NSString * _m_accessDesc; // +0xc8
    CMessageWrap * _m_accessMessage; // +0xd0
    NSString * _m_bizKey; // +0xd8
    long long _m_bizType; // +0xe0
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initData;
- (id)getAuthorizeRequestLogic;
- (void)layoutCloseButton;
- (void)reloadTableData;
- (void)reloadFootView;
- (id)genHeaderView;
- (void)checkVerifyPassword;
- (void)didAskAccess;
- (void)doClickCloseButton;
- (void)didClickLeftCloseBarButton;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)OnForwardMessageSendSuccess;
- (id)navigationBarBackgroundColor;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_accessTitle;
- (void)setM_accessTitle:(id)arg1;
- (id)m_accessDesc;
- (void)setM_accessDesc:(id)arg1;
- (id)m_accessMessage;
- (void)setM_accessMessage:(id)arg1;
- (id)m_bizKey;
- (void)setM_bizKey:(id)arg1;
- (long long)m_bizType;
- (void)setM_bizType:(long long)arg1;
- (BOOL)m_onlyIntercept;
- (void)setM_onlyIntercept:(BOOL)arg1;
- (void).cxx_destruct;
@end
