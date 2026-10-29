@interface MMFinderLiveTrumpetSelectSheet : MMPageSheetBaseView <MMFinderLiveTrumpetSelectCellDelegate, MMUIViewControllerExt>
{
    BOOL _fromConnectMicApply; // +0x8
    BOOL _isCreatingIdentity; // +0x9
    id <MMFinderLiveTrumpetSelectSheetDelegate> _delegate; // +0x10
    id /* block */ _trumpetSelectDidDoneBlock; // +0x18
    id /* block */ _trumpetSelectDidSwitchIdentityBlock; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    WCTableViewManager * _accountsTableViewManager; // +0x30
    long long _currentPrivacyType; // +0x38
    NSNumber * _selectedAccountType; // +0x40
    NSNumber * _selectedPrivacyType; // +0x48
    NSNumber * _isPrivateMsgVisiableInfoSwitchOn; // +0x50
}
+ (id)showWithTaskId:(id)arg1;
+ (id)showWithTaskId:(id)arg1 delegate:(id)arg2;
- (id)initWithTaskId:(id)arg1;
- (void)setupPageSheetConfig;
- (id)getCurrentLeftButton;
- (id)getCurrentRightButton;
- (void)onLeftButtonAction;
- (void)onDoneButtonClicked;
- (void)setupSubviews;
- (void)layoutSubviews;
- (double)fixedHeight;
- (void)layoutUI;
- (void)configureAccountsTableView;
- (long long)reloadAccountsSection;
- (void)makeTableViewSectionCornerRadius;
- (id)makeHeaderViewWith:(id)arg1 topPading:(double)arg2;
- (id)makeIdentityPrivacyHeaderViewWidthTopPading:(double)arg1;
- (void)refresh;
- (id)joinliveVisibleInfo;
- (id)genericLiveWordingForType:(int)arg1;
- (id)liveTask;
- (double)tableCellHeight;
- (double)finderIdentityCellHeight;
- (double)privacyTableCellHeight;
- (double)tableWidth;
- (void)onClickMMFinderLiveTrumpetSelectCellEditSubtitle:(id)arg1;
- (void)editTrumpetAccount;
- (void)pushTrumpetEditorAfterPortrait:(id)arg1;
- (void)deleteTrumpetAccount;
- (void)doDeleteTrumpetAccount;
- (void)onClickMMFinderLiveTrumpetSelectCellContent:(id)arg1;
- (void)onClickPrivateMsgVisiableInfoSwitchCell:(id)arg1;
- (void)onClickIdentityPrivacyH5;
- (void)createTrumpetAccount;
- (void)pageSheetDidAppear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)trumpetSelectDidDoneBlock;
- (void)setTrumpetSelectDidDoneBlock:(id /* block */)arg1;
- (id /* block */)trumpetSelectDidSwitchIdentityBlock;
- (void)setTrumpetSelectDidSwitchIdentityBlock:(id /* block */)arg1;
- (BOOL)fromConnectMicApply;
- (void)setFromConnectMicApply:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)accountsTableViewManager;
- (void)setAccountsTableViewManager:(id)arg1;
- (long long)currentPrivacyType;
- (void)setCurrentPrivacyType:(long long)arg1;
- (id)selectedAccountType;
- (void)setSelectedAccountType:(id)arg1;
- (id)selectedPrivacyType;
- (void)setSelectedPrivacyType:(id)arg1;
- (id)isPrivateMsgVisiableInfoSwitchOn;
- (void)setIsPrivateMsgVisiableInfoSwitchOn:(id)arg1;
- (BOOL)isCreatingIdentity;
- (void)setIsCreatingIdentity:(BOOL)arg1;
- (void).cxx_destruct;
@end
