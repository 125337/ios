@interface MMBGMSelectedTabManager : NSObject <UITableViewDelegate, MMBGMSelectedTabViewModelDelegate, MMRefreshTableFooterDelegate, MMBGMSelectedTabTableViewCellDataReportSource, MMBGMSelectedTabTableViewCellDelegate, MMBGMTabManagerProtocol>
{
    BOOL _isAutoStopped; // +0x8
    id <MMBGMSelectedTabManagerDelegate> _delegate; // +0x10
    MMBGMSelectedTabViewModel * _viewModel; // +0x18
    MMBGMPanelPublishContext * _publishContext; // +0x20
    UITableView * _tableView; // +0x28
    WCTimeLineFooterView * _footerView; // +0x30
    UITableViewDiffableDataSource * _diffDataSource; // +0x38
    UILabel * _noMusicTipsLabel; // +0x40
    WCFinderAnimationLoadingView * _loadingView; // +0x48
    long long _currentIndex; // +0x50
}
- (id)initWithTabModel:(id)arg1;
- (void)autoSetSelectedCellPlayingState;
- (void)autoStopSelectedCellPlayingState;
- (void)selectFirstMusicIfNeeded;
- (void)selectMusicAtIndex:(unsigned long long)arg1;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (void)startLoadingAnimation;
- (void)manualSetCellAtIndex:(unsigned long long)arg1 isSelected:(BOOL)arg2;
- (void)onSwitchToThisPage:(BOOL)arg1;
- (CGRect)viewFrame;
- (BOOL)isLyricsCellType;
- (void)setSelfViewWithFrame:(CGRect)arg1 toSuperView:(id)arg2;
- (void)updateTableViewFrame:(CGRect)arg1;
- (void)reloadTableView;
- (void)applyDiffSnapshot;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onBgmCell:(id)arg1 didClickEditMusic:(id)arg2;
- (void)musicTabVMDataChange:(id)arg1;
- (void)handleMusicTabVMDataChange:(id)arg1;
- (unsigned long long)musicTabVMGetMaterialDuration:(id)arg1;
- (id)currentSelectedMusicData;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (unsigned long long)bgmSelectedTabTableViewCellGetTabType:(id)arg1;
- (id)bgmSelectedTabTableViewCellGetSearchWord:(id)arg1;
- (id)bgmSelectedTabTableViewCellGetPanelConfig:(id)arg1;
- (void)setAllCellUnSelected;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)diffDataSource;
- (void)setDiffDataSource:(id)arg1;
- (id)noMusicTipsLabel;
- (void)setNoMusicTipsLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (BOOL)isAutoStopped;
- (void)setIsAutoStopped:(BOOL)arg1;
- (void).cxx_destruct;
@end
