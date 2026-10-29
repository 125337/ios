@interface WCFinderSpliceSettingViewController : MMUIViewController <WCFinderSwitchExt, WCActionSheetDelegate, INewSyncExt, ILinkEventExt, IUpdateProfileMgrExt, WCFinderHistorySwitchExtension, WCFinderFeedCacheSettingViewControllerDelegate, WCFinderPrivacySettingHelperDelegate>
{
    BOOL _isAnonymousModeEnabledSwitch; // +0x70
    WCTableViewManager * _tableViewManager; // +0x78
    FinderNewUserPrepareResponse * _userPrepare; // +0x80
    WCFinderPrivacySettingHelper * _helper; // +0x88
    long long _features; // +0x90
    WCFinderHistorySettingsHelper * _historyHelper; // +0x98
    double _lastLayoutWidth; // +0xa0
}
- (id)initWithUserPrepare:(id)arg1 contact:(id)arg2 title:(id)arg3 features:(long long)arg4;
- (void)viewDidLoad;
- (void)dealloc;
- (int)feedViewControllerScene;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)updatePrepare;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (void)reloadTableView;
- (void)requestReloadTableView;
- (id)getWatchSection;
- (void)addLiveSections:(id)arg1;
- (void)addIdentityPrivacyCell:(id)arg1;
- (void)onClickIdentityPrivacy;
- (void)onClickAccountSelector;
- (void)addLiveShowGameLvCell:(id)arg1;
- (void)willDisplayCell:(id)arg1 indexPath:(id)arg2;
- (void)_onClickLiveShowGameLv;
- (id)createShieldHisLikedFeedCell;
- (id)createShieldMyLikedFeedCell;
- (void)addPrivacyAccountCell:(id)arg1;
- (void)clickPrivacyIdentitySwitch:(id)arg1;
- (id)makeSectionSeparator;
- (void)clickShieldLikedFeedForHim:(id)arg1;
- (void)clickSieldHisLikedFeed:(id)arg1;
- (void)showPersonalizedRecommendationSwitch;
- (void)showInterativeInformationVC;
- (void)showFeedCacheVC;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onProfileChange;
- (void)finderLiveIdentityChange;
- (void)finderLiveUpdateIdentity;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onNewSyncModUserInfoExt:(id)arg1;
- (void)registerYReportSdk;
- (void)onClickAnonymousBrowse;
- (void)onClickSwitchPipCell:(id)arg1;
- (void)onClickBackgroundPlaySwitch:(id)arg1;
- (void)onFinderFeedCacheSettingViewController:(id)arg1 feedCachedConfigUpdated:(id)arg2;
- (void)onFinderHistorySwitchChanged:(BOOL)arg1;
- (id)getPrivacySection;
- (id)getPrivacySectionWithoutAuthorSettings;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)userPrepare;
- (void)setUserPrepare:(id)arg1;
- (id)helper;
- (void)setHelper:(id)arg1;
- (long long)features;
- (void)setFeatures:(long long)arg1;
- (id)historyHelper;
- (void)setHistoryHelper:(id)arg1;
- (BOOL)isAnonymousModeEnabledSwitch;
- (void)setIsAnonymousModeEnabledSwitch:(BOOL)arg1;
- (double)lastLayoutWidth;
- (void)setLastLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
