@interface WCFinderSpliceSettingViewController : MMUIViewController <WCFinderSwitchExt, WCActionSheetDelegate, INewSyncExt, ILinkEventExt, IUpdateProfileMgrExt, WCFinderHistorySwitchExtension, WCFinderPrivacySettingHelperDelegate>
{
    WCTableViewManager * _tableViewManager; // +0x70
    FinderNewUserPrepareResponse * _userPrepare; // +0x78
    WCFinderPrivacySettingHelper * _helper; // +0x80
    long long _features; // +0x88
    WCFinderHistorySettingsHelper * _historyHelper; // +0x90
}
- (id)initWithUserPrepare:(id)arg1 contact:(id)arg2 title:(id)arg3 features:(long long)arg4;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
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
- (BOOL)enableGloryShowSwitch;
- (void)addLiveGloryCell:(id)arg1;
- (void)onGloryShowSwitchClick:(id)arg1;
- (id)createShieldHisLikedFeedCell;
- (id)createShieldMyLikedFeedCell;
- (void)addPrivacyAccountCell:(id)arg1;
- (void)clickPrivacyIdentitySwitch:(id)arg1;
- (id)makeSectionSeparator;
- (void)clickShieldLikedFeedForHim:(id)arg1;
- (void)clickSieldHisLikedFeed:(id)arg1;
- (void)clickShieldFinder:(id)arg1;
- (void)displayShieldLikedFeedSettingVCWithCell:(id)arg1 viewModel:(id)arg2;
- (void)showPersonalizedRecommendationSwitch;
- (void)showInterativeInformationVC;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onProfileChange;
- (void)finderLiveIdentityChange;
- (void)finderLiveUpdateIdentity;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onNewSyncModUserInfoExt:(id)arg1;
- (void)registerYReportSdk;
- (void)onClickSwitchContinueCell:(id)arg1;
- (void)updateLocalContinueCollectionFlag:(BOOL)arg1;
- (void)onClickSwitchPipCell:(id)arg1;
- (void)onFinderHistorySwitchChanged:(BOOL)arg1;
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
- (void).cxx_destruct;
@end
