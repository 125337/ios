@interface ContactSetPermissionsViewController : ContactBaseSetPermissionsViewController <WCActionSheetDelegate>
{
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0x88
    id <ContactInfoAssistDelegate> m_delegate; // +0x90
    BOOL _bDisableAllOperation; // +0x98
    unsigned int _m_uiVerify; // +0x9c
    CContact * m_contact; // +0xa0
    MMTableViewInfo * _tableViewInfo; // +0xa8
}
+ (BOOL)shouldShowSetPermissionsWithUserName:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldRestrictContentViewSize;
- (void)initView;
- (void)reloadTableView;
- (void)addPermissionSectionWithClicfgSetDefaultChatonly;
- (void)addPermissionSection;
- (void)showPermissionsCell;
- (void)setDelegate:(id)arg1;
- (BOOL)isInMyContactList;
- (BOOL)isNeedVerify;
- (void)opSocialBlackPermission;
- (void)opAllPermission;
- (void)opOutsider:(id)arg1;
- (void)opWCBlacklist:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (BOOL)bDisableAllOperation;
- (void)setBDisableAllOperation:(BOOL)arg1;
- (unsigned int)m_uiVerify;
- (void)setM_uiVerify:(unsigned int)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (void).cxx_destruct;
@end

