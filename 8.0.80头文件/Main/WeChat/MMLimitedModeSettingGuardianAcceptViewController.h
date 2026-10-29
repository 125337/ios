@interface MMLimitedModeSettingGuardianAcceptViewController : MMAcceptAgreementBaseViewController <MMLimitedModeGuardianLogicDelegate>
{
    UIButton * m_operateButton; // +0x70
    CContact * m_wardUserContact; // +0x78
    MMLimitedModeGuardianLogic * m_guardianLogic; // +0x80
    BOOL m_isHadGuardianAccept; // +0x88
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x90
    MMTableViewInfo * m_tableViewInfo; // +0x98
    MMTableView * m_tableView; // +0xa0
    NSString * _m_nsGuardianTicket; // +0xa8
    NSString * _m_nsWardUserName; // +0xb0
    unsigned long long _bindScene; // +0xb8
}
- (void)viewDidLoad;
- (void)initData;
- (void)viewDidAppear:(BOOL)arg1;
- (void)layoutOperateButton;
- (void)reloadTableData;
- (void)reloadFootView;
- (id)genHeaderView;
- (void)didOperateButton;
- (void)didClickLeftCloseBarButton;
- (void)onBindTeenagerModeGuardianWithSuccess:(BOOL)arg1 errMsg:(id)arg2;
- (id)navigationBarBackgroundColor;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_nsGuardianTicket;
- (void)setM_nsGuardianTicket:(id)arg1;
- (id)m_nsWardUserName;
- (void)setM_nsWardUserName:(id)arg1;
- (unsigned long long)bindScene;
- (void)setBindScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
