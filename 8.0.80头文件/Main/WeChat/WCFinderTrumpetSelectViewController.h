@interface WCFinderTrumpetSelectViewController : MMUIViewController <WCFinderSwitchExt, WCActionSheetDelegate, ILinkEventExt, IUpdateProfileMgrExt>
{
    BOOL _selectRoleOnlyMode; // +0x70
    BOOL _autoDismissAfterChanged; // +0x71
    BOOL _showOKToastAfterChanged; // +0x72
    BOOL _showPersonalizedLiveRecommendationSetting; // +0x73
    id <WCFinderTrumpetSelectViewControllerDelegate> _delegate; // +0x78
    MMFinderLiveTaskId * _liveTaskId; // +0x80
    unsigned long long _scene; // +0x88
    WCTableViewManager * _tableViewManager; // +0x90
    WCFinderLiveAudienceRoleReporter * _reporter; // +0x98
    GameRankSwitchInfo * _switchInfo; // +0xa0
    NSNumber * _selectedAccountType; // +0xa8
    NSNumber * _selectedPrivacyType; // +0xb0
    NSNumber * _isPrivateMsgVisiableInfoSwitchOn; // +0xb8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)configureTableView;
- (void)reloadTableView;
- (void)addIdentityPrivacySection;
- (void)addNewIdentityPrivacySection;
- (void)onClickIdentityPrivacyOptionCell:(id)arg1;
- (void)onClickPrivateMsgVisiableInfoSwitchCell:(id)arg1;
- (void)onClickIdentityPrivacyH5;
- (BOOL)showRecommendSection;
- (void)changePersonalizedRecommendationLive;
- (BOOL)getCurrentSwitchFlagWithScene:(int)arg1;
- (void)cancelAlertAction;
- (void)clickCloseRecommendLive;
- (void)changeRecommendSceneValue:(int)arg1;
- (void)addAccountSection;
- (void)tryAddLiveAdditionPropertiesSection;
- (void)addRecommendSectionIfNeeded;
- (void)tryAddGameLiveRankSection;
- (void)onClickLiveShowGameLv;
- (void)onGameLiveRankSwitched:(id)arg1 cellInfo:(id)arg2;
- (void)createTrumpetAccount;
- (void)deleteTrumpetAccount;
- (void)showEditTrumpetActionSheet;
- (void)doDeleteTrumpetAccount;
- (void)editTrumpetAccount;
- (id)makeSectionSeparator;
- (void)onDidChangeToRoleType:(long long)arg1;
- (void)willDisplayCell:(id)arg1 indexPath:(id)arg2;
- (void)onProfileChange;
- (id)joinliveVisibleInfo;
- (BOOL)showDoneButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTapDone;
- (void)selectedLiveIdentity:(id)arg1;
- (void)finderLiveIdentityChange;
- (void)finderLiveIdentityPrivacySettingChange;
- (void)finderLiveUpdateIdentity;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onNewSyncModUserInfoExt:(id)arg1;
- (id)audienceLogReporter;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)selectRoleOnlyMode;
- (void)setSelectRoleOnlyMode:(BOOL)arg1;
- (BOOL)autoDismissAfterChanged;
- (void)setAutoDismissAfterChanged:(BOOL)arg1;
- (BOOL)showOKToastAfterChanged;
- (void)setShowOKToastAfterChanged:(BOOL)arg1;
- (BOOL)showPersonalizedLiveRecommendationSetting;
- (void)setShowPersonalizedLiveRecommendationSetting:(BOOL)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)switchInfo;
- (void)setSwitchInfo:(id)arg1;
- (id)selectedAccountType;
- (void)setSelectedAccountType:(id)arg1;
- (id)selectedPrivacyType;
- (void)setSelectedPrivacyType:(id)arg1;
- (id)isPrivateMsgVisiableInfoSwitchOn;
- (void)setIsPrivateMsgVisiableInfoSwitchOn:(id)arg1;
- (void).cxx_destruct;
@end
