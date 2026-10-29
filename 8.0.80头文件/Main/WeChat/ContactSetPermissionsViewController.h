@interface ContactSetPermissionsViewController : ContactBaseSetPermissionsViewController <MMPageSheetAdapterDelegate, WCActionSheetDelegate>
{
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0x90
    id <ContactInfoAssistDelegate> m_delegate; // +0x98
    NSNumber * m_initIsSocialBlackSwitchOn; // +0xa0
    NSNumber * m_initIsOutsiderSwitchOn; // +0xa8
    NSNumber * m_initIsWCBlackSwitchOn; // +0xb0
    BOOL m_isHadReportAsyncRelationUpdate; // +0xb8
    BOOL _bDisableAllOperation; // +0xb9
    BOOL _isInPageSheetMode; // +0xba
    unsigned int _m_uiVerify; // +0xbc
    CContact * m_contact; // +0xc0
    MMPageSheetAdapter * _pageSheetAdapter; // +0xc8
    unsigned long long _enter50321Path; // +0xd0
    long long _contactInfoViewSource; // +0xd8
    WCSnsPermissionReporter * _snsPermissionReporter; // +0xe0
    MMTableViewInfo * _tableViewInfo; // +0xe8
    NSNumber * _m_isSocialBlackSwitchOn; // +0xf0
    NSNumber * _m_isOutsiderSwitchOn; // +0xf8
    NSNumber * _m_isWCBlackSwitchOn; // +0x100
}
+ (BOOL)shouldShowSetPermissionsWithUserName:(id)arg1;
- (void)initReportContactRelationInfo;
- (void)reportContactRelationUpdateDoAction;
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
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
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
- (void)snsReportWithModifySocialBlackPermission:(BOOL)arg1;
- (void)snsReportWithModifyOutsiderPermission:(BOOL)arg1;
- (void)snsReportWithModifyWCBlackPermission:(BOOL)arg1;
- (void)snsReportWithModifyPermission:(unsigned long long)arg1;
- (id)snsPermissionReporter;
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
- (unsigned long long)enter50321Path;
- (void)setEnter50321Path:(unsigned long long)arg1;
- (long long)contactInfoViewSource;
- (void)setContactInfoViewSource:(long long)arg1;
- (void)setSnsPermissionReporter:(id)arg1;
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
