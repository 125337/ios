@interface MMBGMSelectedTabManager : NSObject <UITableViewDelegate, MMBGMSelectedTabViewModelDelegate, MMRefreshTableFooterDelegate, MMBGMSelectedTabTableViewCellDataReportSource, MMBGMSelectedTabTableViewCellDelegate, MMBGMTabManagerProtocol>
{
    BOOL _isAutoStopped; // +0x8
    id <MMBGMSelectedTabManagerDelegate> _delegate; // +0x10
    MMBGMSelectedTabViewModel * _viewModel; // +0x18
    MMBGMPanelPublishContext * _publishContext; // +0x20
    long long _snsEditSource; // +0x28
    long long _currentIndex; // +0x30
    UITableView * _tableView; // +0x38
    WCTimeLineFooterView * _footerView; // +0x40
    UITableViewDiffableDataSource * _diffDataSource; // +0x48
    MMBGMSelectedEmptyStateView * _emptyStateView; // +0x50
    WCFinderAnimationLoadingView * _loadingView; // +0x58
}
- (id)initWithTabModel:(id)arg1;
- (void)autoSetSelectedCellPlayingState;
- (void)autoStopSelectedCellPlayingState;
- (void)selectFirstMusicIfNeeded;
- (void)selectMusicAtIndex:(unsigned long long)arg1;
- (void)selectMusicAtIndex:(unsigned long long)arg1 shouldInvokeSelectedFunc:(BOOL)arg2;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (void)startLoadingAnimation;
- (void)manualSetCellAtIndex:(unsigned long long)arg1 isSelected:(BOOL)arg2;
- (void)onSwitchToThisPage;
- (CGRect)viewFrame;
- (BOOL)isLyricsCellType;
- (BOOL)isLocalImportHeaderData:(id)arg1;
- (BOOL)isLocalImportEntranceData:(id)arg1;
- (BOOL)shouldSkipMusicDataForDefaultSelection:(id)arg1;
- (BOOL)handleLocalImportSelectionIfNeededWithMusicData:(id)arg1;
- (id)configuredTabCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)configuredLocalImportHeaderCellWithTableView:(id)arg1 indexPath:(id)arg2 localData:(id)arg3;
- (id)configuredLocalImportCellWithTableView:(id)arg1 indexPath:(id)arg2 localData:(id)arg3;
- (id)configuredMusicCellWithTableView:(id)arg1 indexPath:(id)arg2 data:(id)arg3;
- (void)setSelfViewWithFrame:(CGRect)arg1 toSuperView:(id)arg2;
- (void)updateTableViewFrame:(CGRect)arg1;
- (void)reloadTableView;
- (void)reloadTableViewCellAtIndex:(unsigned long long)arg1;
- (void)applyDiffSnapshot;
- (void)refreshAfterLocalImportDataChanged;
- (id)normalEmptyTipString;
- (BOOL)shouldShowLocalImportEmptyState;
- (void)updateEmptyStateWithViewModel:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onBgmCell:(id)arg1 didClickEditMusic:(id)arg2;
- (void)onBgmCell:(id)arg1 didFavMusicData:(id)arg2;
- (void)onBgmCell:(id)arg1 didUnfavMusicData:(id)arg2;
- (void)musicTabVMDataChange:(id)arg1;
- (void)handleMusicTabVMDataChange:(id)arg1;
- (unsigned long long)musicTabVMGetMaterialDuration:(id)arg1;
- (id)currentSelectedMusicData;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (unsigned long long)bgmSelectedTabTableViewCellGetTabType:(id)arg1;
- (id)bgmSelectedTabTableViewCellGetSearchWord:(id)arg1;
- (id)bgmSelectedTabTableViewCellGetPanelConfig:(id)arg1;
- (void)setAllCellUnSelected;
- (void)forceDeselectAllVisibleCells;
- (void)configAddMusicEntranceReportForView:(id)arg1;
- (void)clearAddMusicEntranceReportForView:(id)arg1;
- (id)genAddMusicEntranceReportDict;
- (void)setupTabReportInfoWithEventID:(id)arg1;
- (void)setupCellRemoveActionReportInfoWithEventID:(id)arg1 musicData:(id)arg2;
- (id)genReportDict;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (long long)snsEditSource;
- (void)setSnsEditSource:(long long)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)diffDataSource;
- (void)setDiffDataSource:(id)arg1;
- (id)emptyStateView;
- (void)setEmptyStateView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)isAutoStopped;
- (void)setIsAutoStopped:(BOOL)arg1;
- (void).cxx_destruct;
@end
