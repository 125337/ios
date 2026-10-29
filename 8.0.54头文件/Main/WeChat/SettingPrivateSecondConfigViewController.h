@interface SettingPrivateSecondConfigViewController : MMUIViewController <ILinkEventExt, WCFinderSvrExptConfigExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    WCOpLog * m_wcOpLog; // +0x70
    BOOL m_strangerRightOpen; // +0x78
    BOOL m_finderLiveIsHoverSnsTimelineSwitchOpen; // +0x79
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0x80
    BOOL _finderShowLikeListInWeixinProfile; // +0x88
    unsigned int _wcNotificationCellIndex; // +0x8c
    long long _recentPrivacyPushScene; // +0x90
    unsigned long long _settingAuthManageFlag; // +0x98
}
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAppear;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)init;
- (void)reloadTableData;
- (void)reloadTableDataWithReloadFooterView:(BOOL)arg1;
- (void)reloadTableAuthManageSnsData;
- (void)reloadTableAuthManageFinderData;
- (id)createShieldHisLikedFeedCell;
- (id)createShieldMyLikedFeedCell;
- (void)reloadTableAuthManageWowData;
- (id)getCurrentRecentString;
- (unsigned long long)getCurrentRecentType:(id)arg1;
- (void)showRecentWCOptions;
- (void)onModifyRecentOption:(id)arg1;
- (void)allowStrangerWC:(id)arg1;
- (void)allowShowFinderLikeList:(id)arg1;
- (void)showRecentWC:(id)arg1;
- (void)finderLiveHoverOnSnsTimelineSwitchChanged:(id)arg1;
- (void)showWCEditGroup;
- (void)showWCOutsiderView;
- (void)showWCBlackListView;
- (void)showFinderOutsideView;
- (void)showFinderBlackView;
- (void)showWowOutsideView;
- (void)showWowBlackView;
- (void)setupDeepLinkConfig;
- (void)onFinderSvrExptConfigHitChanged:(int)arg1;
- (long long)recentPrivacyPushScene;
- (void)setRecentPrivacyPushScene:(long long)arg1;
- (unsigned long long)settingAuthManageFlag;
- (void)setSettingAuthManageFlag:(unsigned long long)arg1;
- (unsigned int)wcNotificationCellIndex;
- (void)setWcNotificationCellIndex:(unsigned int)arg1;
- (BOOL)finderShowLikeListInWeixinProfile;
- (void)setFinderShowLikeListInWeixinProfile:(BOOL)arg1;
- (void).cxx_destruct;
@end

