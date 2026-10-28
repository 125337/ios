@interface ContactSetPermissionsViewController : ContactBaseSetPermissionsViewController <MMPageSheetAdapterDelegate, WCActionSheetDelegate>
{
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0x90
    id <ContactInfoAssistDelegate> m_delegate; // +0x98
    BOOL _bDisableAllOperation; // +0xa0
    BOOL _isInPageSheetMode; // +0xa1
    unsigned int _m_uiVerify; // +0xa4
    CContact * m_contact; // +0xa8
    MMPageSheetAdapter * _pageSheetAdapter; // +0xb0
    MMTableViewInfo * _tableViewInfo; // +0xb8
    NSNumber * _m_isSocialBlackSwitchOn; // +0xc0
    NSNumber * _m_isOutsiderSwitchOn; // +0xc8
    NSNumber * _m_isWCBlackSwitchOn; // +0xd0
}
+ (BOOL)shouldShowSetPermissionsWithUserName:(id)arg1;
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (double)getContentViewYInPageSheetMode;
- (double)getVisibleHeight;
- (void)pageSheetWillClose:(id)arg1 closeType:(long long)arg2;
- (void)addPermissionSectionInPageSheetMode;
- (id)createInitLeftBarItem;
- (id)createInitRightBarItem;
- (id)getRightBarButtonItem;
- (void)resetTableViewInPageSheetMode;
- (id)genLeftSubSymbolView;
- (void)dismissSheetAdapterWithAnimated;
- (void)resetRightBarButtonEnabled:(BOOL)arg1;
- (BOOL)checkDataHadChange;
- (void)opAllPermissionInPageSheetMode;
- (void)opOutsiderInPageSheetMode:(id)arg1;
- (void)opWCBlacklistInPageSheetMode:(id)arg1;
- (void)opSocialBlackPermissionInPageSheetMode;
- (void)onDoneInPageSheetMode:(id)arg1;
- (void)setOpOutsiderAndWCBlacklist:(id)arg1;
- (void)onCancelInPageSheetMode:(id)arg1;
- (void)reportContactSetPermissionsPageSheetUnexp:(unsigned int)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldRestrictContentViewSize;
- (double)getContentViewY;
- (void)operateSuccess;
- (void)operateFail;
- (void)initView;
- (void)reloadTableView;
- (void)addPermissionSection;
- (void)showPermissionsCell;
- (void)setDelegate:(id)arg1;
- (BOOL)isInMyContactList;
- (BOOL)isNeedVerify;
- (BOOL)getIsSocialBlackSwitchOn:(id)arg1;
- (BOOL)getIsOutsiderSwitchOn:(id)arg1;
- (BOOL)getIsWCBlackSwitchOn:(id)arg1;
- (void)commitAllSwitchSetting;
- (void)opSocialBlackPermission;
- (void)opAllPermission;
- (void)opOutsider:(id)arg1;
- (void)didOpOutsider:(BOOL)arg1;
- (void)opWCBlacklist:(id)arg1;
- (void)didOpWCBlacklist:(BOOL)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (BOOL)bDisableAllOperation;
- (void)setBDisableAllOperation:(BOOL)arg1;
- (unsigned int)m_uiVerify;
- (void)setM_uiVerify:(unsigned int)arg1;
- (BOOL)isInPageSheetMode;
- (void)setIsInPageSheetMode:(BOOL)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)m_isSocialBlackSwitchOn;
- (void)setM_isSocialBlackSwitchOn:(id)arg1;
- (id)m_isOutsiderSwitchOn;
- (void)setM_isOutsiderSwitchOn:(id)arg1;
- (id)m_isWCBlackSwitchOn;
- (void)setM_isWCBlackSwitchOn:(id)arg1;
- (void).cxx_destruct;
@end
