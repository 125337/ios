@interface MMFinderLiveTrumpetSelectSheet : MMPageSheetBaseView <MMFinderLiveTrumpetSelectCellDelegate, MMUIViewControllerExt>
{
    id /* block */ _trumpetSelectDidDoneBlock; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    id <MMFinderLiveTrumpetSelectSheetDelegate> _delegate; // +0x18
    MMUILabel * _accountsHeaderLabel; // +0x20
    WCTableViewManager * _accountsTableViewManager; // +0x28
    MMUILabel * _privacySettingHeaderLabel; // +0x30
    MMUIButton * _sectionTipsBtn; // +0x38
    WCTableViewManager * _privacySettingTableViewManager; // +0x40
    long long _currentPrivacyType; // +0x48
    NSNumber * _selectedAccountType; // +0x50
    NSNumber * _selectedPrivacyType; // +0x58
    NSNumber * _isPrivateMsgVisiableInfoSwitchOn; // +0x60
}
+ (id)showWithTaskId:(id)arg1 delegate:(id)arg2;
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;
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
- (void)configurePrivacyTableView;
- (long long)reloadPrivacySection;
- (id)makeHeaderViewWith:(id)arg1 topPading:(double)arg2;
- (void)refresh;
- (id)joinliveVisibleInfo;
- (id)liveTask;
- (double)tableCellHeight;
- (double)privacyTableCellHeight;
- (double)tableWidth;
- (void)onClickMMFinderLiveTrumpetSelectCellContent:(id)arg1;
- (void)onClickPrivateMsgVisiableInfoSwitchCell:(id)arg1;
- (void)onClickIdentityPrivacyH5;
- (void)createTrumpetAccount;
- (void)pageSheetDidAppear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id /* block */)trumpetSelectDidDoneBlock;
- (void)setTrumpetSelectDidDoneBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)accountsHeaderLabel;
- (void)setAccountsHeaderLabel:(id)arg1;
- (id)accountsTableViewManager;
- (void)setAccountsTableViewManager:(id)arg1;
- (id)privacySettingHeaderLabel;
- (void)setPrivacySettingHeaderLabel:(id)arg1;
- (id)sectionTipsBtn;
- (void)setSectionTipsBtn:(id)arg1;
- (id)privacySettingTableViewManager;
- (void)setPrivacySettingTableViewManager:(id)arg1;
- (long long)currentPrivacyType;
- (void)setCurrentPrivacyType:(long long)arg1;
- (id)selectedAccountType;
- (void)setSelectedAccountType:(id)arg1;
- (id)selectedPrivacyType;
- (void)setSelectedPrivacyType:(id)arg1;
- (id)isPrivateMsgVisiableInfoSwitchOn;
- (void)setIsPrivateMsgVisiableInfoSwitchOn:(id)arg1;
- (void).cxx_destruct;
@end
