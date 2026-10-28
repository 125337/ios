@interface MMBGMSelectedSearchResultView : MMUIView <MMBGMSearchViewModelDelegate, UITableViewDelegate, MMRefreshTableFooterDelegate, MMBGMSelectedTabTableViewCellDataReportSource, MMBGMSelectedTabTableViewCellDelegate, UITableViewDataSource, MMBGMSelectedSearchResultViewProtocol>
{
    id <MMBGMSelectedSearchResultViewDelegate> _delegate; // +0x8
    MMBGMSearchViewModel * _viewModel; // +0x10
    UITableView * _tableView; // +0x18
    UITableViewDiffableDataSource * _diffDataSource; // +0x20
    WCTimeLineFooterView * _footerView; // +0x28
    long long _currentIndex; // +0x30
    MMBGMPanelPublishContext * _publishContext; // +0x38
    MMBGMSelectedConfig * _config; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)setup;
- (void)setupView;
- (void)setupData;
- (void)unSelectedAllItem;
- (void)autoSetSelectedCellPlayingState;
- (void)autoStopSelectedCellPlayingState;
- (void)selectFirstMusicIfNeeded;
- (void)selectMusicAtIndex:(unsigned long long)arg1;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (BOOL)isLyricsCellType;
- (void)applyDiffSnapshot;
- (id)currentSelectedmusicData;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onBgmSearchViewModelDataChange:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onBgmSearchViewModel:(id)arg1 didSearchWithKey:(id)arg2;
- (unsigned long long)bgmSearchViewModelGetMaterialDuration:(id)arg1;
- (unsigned long long)bgmSelectedTabTableViewCellGetTabType:(id)arg1;
- (id)bgmSelectedTabTableViewCellGetSearchWord:(id)arg1;
- (id)bgmSelectedTabTableViewCellGetPanelConfig:(id)arg1;
- (void)onBgmCell:(id)arg1 didClickEditMusic:(id)arg2;
- (void)setPublishContext:(id)arg1;
- (void)reset;
- (void)resetCurrentIndex;
- (BOOL)startSearchMusicWithKey:(id)arg1;
- (void)startFooterViewLoading;
- (void)stopFooterViewLoading;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)diffDataSource;
- (void)setDiffDataSource:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)publishContext;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
