@interface WCFinderSpliceSettingViewController : MMUIViewController <WCFinderSwitchExt, WCActionSheetDelegate, INewSyncExt, ILinkEventExt, IUpdateProfileMgrExt, WCFinderPrivacySettingHelperDelegate>
{
    WCTableViewManager * _tableViewManager; // +0x68
    FinderNewUserPrepareResponse * _userPrepare; // +0x70
    WCFinderPrivacySettingHelper * _helper; // +0x78
}
- (id)initWithUserPrepare:(id)arg1 contact:(id)arg2 title:(id)arg3;
- (void)viewDidLoad;
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
- (void)clickRrivacyIdentitySwitch:(id)arg1;
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
- (void)onClickSwitchFeedHistory:(id)arg1;
- (void)updateLocalHistoryFlag:(BOOL)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)userPrepare;
- (void)setUserPrepare:(id)arg1;
- (id)helper;
- (void)setHelper:(id)arg1;
- (void).cxx_destruct;
@end

