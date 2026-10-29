@interface SettingModifyQQViewController : AccountBaseViewController <IQQAccountMgrExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    UIViewController * m_vcAccount; // +0x78
    unsigned int m_uiBindQQUin; // +0x80
    id <SettingModifyQQViewControllerDelegate> _m_SettingModifyQQViewControllerDelegate; // +0x88
}
- (void)onUnBindAccount;
- (void)confirmUnBind;
- (void)onUnBind:(id)arg1;
- (void)ShowBindQQView;
- (void)onCancel:(id)arg1;
- (void)updateTableCell;
- (id)getHeaderView;
- (void)updateViewOnQQChange;
- (void)OnUnBindQQFail:(id)arg1;
- (void)OnUnBindQQOK;
- (void)OnBindQQChange;
- (void)OnOperate;
- (void)doRegester;
- (void)undoRegester;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)makeCell:(id)arg1;
- (unsigned int)m_uiBindQQUin;
- (void)setM_uiBindQQUin:(unsigned int)arg1;
- (id)m_vcAccount;
- (void)setM_vcAccount:(id)arg1;
- (id)m_SettingModifyQQViewControllerDelegate;
- (void)setM_SettingModifyQQViewControllerDelegate:(id)arg1;
- (void).cxx_destruct;
@end
