@interface RingToneSettingViewController : MMUIViewController <RingToneSettingHeaderViewDelegate, MMRefreshTableFooterDelegate, UITableViewDelegate, UITableViewDataSource, VideoRingExclusiveFriendsViewModelDelegate, SelectContactsViewControllerDelegate, RingToneExclusiveFriendTableViewCellDelegate, VideRingModifyExt, IVOIPWindowExt>
{
    AnyPromise * _preload_friendsRingPromise; // +0x68
    AnyPromise * _preload_globalRingPromise; // +0x70
    MMTableView * _tableView; // +0x78
    VideoRingExclusiveFriendsViewModel * _viewModel; // +0x80
    RingToneSettingHeaderView * _tableHeaderView; // +0x88
    WCTimeLineFooterView * _footerView; // +0x90
    RingToneMixPlayer * _player; // +0x98
    long long _activeIndex; // +0xa0
    VideoRingMediaModel * _cropingMedia; // +0xa8
    RingToneDetail * _cropingRing; // +0xb0
    VideoRingNetProvider * _provider; // +0xb8
    RingToneHomePageActionReporter_23612 * _reporter; // +0xc0
    RingTonePickerViewController * _pickerVC; // +0xc8
    RingToneVideoFeedViewController * _pickerVC2; // +0xd0
}
- (id)initWithFromChennel:(unsigned long long)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initHistoryItem;
- (void)jumpToHistoryList;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (void)initFooterView;
- (void)fetchNextPage;
- (void)reloadTableData;
- (void)loadGlobalRingData;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onHeaderViewAddExclusiveRingTap;
- (void)onHeaderViewSwitchButtonTap;
- (void)pickNewGlobalRing;
- (void)onHeaderViewPlayButtonTap:(BOOL)arg1;
- (void)onHeaderViewJumpFinder:(id)arg1;
- (void)onHeaderViewJumpPlayer:(id)arg1;
- (void)resetRingToDefault;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onDataChangedForIndex:(long long)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (BOOL)hideFavourContactCandidate;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onExistContactDidSelected:(id)arg1;
- (void)onExclusiveRingSwitch:(id)arg1;
- (void)onExclusiveRingPlay:(id)arg1 isToPlay:(BOOL)arg2;
- (void)onExclusiveRingJumpFinder:(id)arg1;
- (void)onGlobalRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)onExclusiveRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)checkFirstSetRingTone;
- (void)checkShowRingbackSwitch;
- (void)onVoipWindowDidAppear;
- (id)preload_friendsRingPromise;
- (void)setPreload_friendsRingPromise:(id)arg1;
- (id)preload_globalRingPromise;
- (void)setPreload_globalRingPromise:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (long long)activeIndex;
- (void)setActiveIndex:(long long)arg1;
- (id)cropingMedia;
- (void)setCropingMedia:(id)arg1;
- (id)cropingRing;
- (void)setCropingRing:(id)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)pickerVC;
- (void)setPickerVC:(id)arg1;
- (id)pickerVC2;
- (void)setPickerVC2:(id)arg1;
- (void).cxx_destruct;
@end

