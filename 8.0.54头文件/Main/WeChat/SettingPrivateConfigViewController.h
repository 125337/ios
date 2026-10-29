@interface SettingPrivateConfigViewController : MMUIViewController
{
    NSMutableDictionary * m_changesOnExitMap; // +0x68
    BOOL m_applySettingNow; // +0x70
    MMTableViewInfo * m_tableViewInfo; // +0x78
    WCOpLog * m_wcOpLog; // +0x80
    BOOL m_strangerRightOpen; // +0x88
    BOOL m_contactVerifySwitchOpen; // +0x89
    BOOL m_recommendQQOpen; // +0x8a
    BOOL m_recommendPhoneOpen; // +0x8b
    BOOL m_bIsShowPhoneSectionIndexAtFirst; // +0x8c
    unsigned int m_contactVerifyIndex; // +0x90
    BOOL m_finderLiveIsHoverSnsTimelineSwitchOpen; // +0x94
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0x98
    BOOL m_bIsShowContactVerifySectionIndexAtFirst; // +0xa0
    unsigned int _wcNotificationCellIndex; // +0xa4
}
- (id)getHeaderView:(id)arg1;
- (id)init;
- (void)showBlackListView;
- (void)showSocialListView;
- (void)showAppAuthManagementView;
- (void)reloadTableData;
- (void)reloadTableDataWithReloadFooterView:(BOOL)arg1;
- (void)reloadTableContactAuthorityManageData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willAppear;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)dealloc;
- (void)startCoverContactVerify;
- (void)hideCoverView;
- (void)removeCoverView;
- (BOOL)setChangeOnExitForSelector:(SEL)arg1 withControl:(id)arg2;
- (void)applyUnSavedChanges;
- (void)updateWcStateAndReloadTableView;
- (void)showAddMeWaysVC;
- (void)doSetPrivateConfig:(unsigned int)arg1 on:(BOOL)arg2 bitset:(unsigned int)arg3;
- (void)recommendPhoneChanged:(id)arg1;
- (void)contactVerifySwitchChanged:(id)arg1;
- (void)showSocialBlackAuthManageView;
- (void)showSnsAuthManageView;
- (void)showFinderAuthManageView;
- (void)showWowAuthManageView;
- (void)showWeRunBlackAuthManageView;
- (void)setupDeepLinkConfig;
- (BOOL)m_bIsShowPhoneSectionIndexAtFirst;
- (void)setM_bIsShowPhoneSectionIndexAtFirst:(BOOL)arg1;
- (BOOL)m_bIsShowContactVerifySectionIndexAtFirst;
- (void)setM_bIsShowContactVerifySectionIndexAtFirst:(BOOL)arg1;
- (unsigned int)wcNotificationCellIndex;
- (void)setWcNotificationCellIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end

