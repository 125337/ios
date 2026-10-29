@interface MMLimitedModeSettingGuardianViewController : MMAcceptAgreementBaseViewController <MMLimitedModeGuardianLogicDelegate>
{
    UIButton * m_operateButton; // +0x70
    CContact * m_guardianContact; // +0x78
    BOOL m_needReload; // +0x80
    MMLimitedModeGuardianLogic * m_guardianLogic; // +0x88
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x90
    MMTableViewInfo * m_tableViewInfo; // +0x98
    MMTableView * m_tableView; // +0xa0
    id /* block */ _completionBlock; // +0xa8
}
- (void)viewDidLoad;
- (void)initData;
- (void)viewDidAppear:(BOOL)arg1;
- (void)layoutOperateButton;
- (void)reloadTableData;
- (void)makeGuardianCell:(id)arg1;
- (void)reloadFootView;
- (id)genHeaderView;
- (void)didRemoveOperateButton;
- (void)didOperateButton;
- (void)onCancelAuthorization;
- (void)didClickLeftCloseBarButton;
- (void)onUnBindTeenagerModeGuardianWithSuccess:(BOOL)arg1 errMsg:(id)arg2;
- (id)getViewController;
- (id)navigationBarBackgroundColor;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
