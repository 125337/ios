@interface MMBGMSelectedContentView : MMUIView <MMBGMSelectedTabBarViewDelegate, MMBGMSelectedTabManagerDelegate, MMBGMSelectedSearchViewDelegate, MMBGMChooseFinderFeedListViewDelegate, UIScrollViewDelegate>
{
    id <MMBGMSelectedContentViewDelegate> _delegate; // +0x8
    MMBGMPanelPublishContext * _publishContext; // +0x10
    long long _snsEditSource; // +0x18
    WCSearchBar * _searchBar; // +0x20
    MMBGMSelectedTabBarView * _tabBar; // +0x28
    UIScrollView * _scrollView; // +0x30
    MMBGMSelectedSearchView * _searchResultView; // +0x38
    NSMutableArray * _tabControllers; // +0x40
    NSMutableArray * _tabViewModels; // +0x48
    unsigned long long _currentTabIndex; // +0x50
    id <MMBGMSelectedMusicDataProtocol> _currentMusicData; // +0x58
    id <MMBGMSelectedMusicDataProtocol> _lastInsertedRecMusicFromOtherTab; // +0x60
    MMBGMSelectedConfig * _config; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 tabModel:(id)arg2 config:(id)arg3 delegate:(id)arg4;
- (void)setupWithTabModel:(id)arg1 config:(id)arg2;
- (void)setPublishContext:(id)arg1;
- (void)setSnsEditSource:(long long)arg1;
- (void)layoutSubviews;
- (void)addMusicData:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)setLocalImportedData:(id)arg1;
- (void)setBgmViewShow;
- (void)loadCurrentIndex;
- (unsigned long long)currentSelectedTabIndex;
- (void)selectMusicAtTabIndex:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (void)selectMusicAtTabIndex:(unsigned long long)arg1 index:(unsigned long long)arg2 shouldInvokeSelectedFunc:(BOOL)arg3;
- (void)setAllCellUnSelected;
- (void)switchToTabIndex:(unsigned long long)arg1;
- (void)autoSetSelectedCellPlayingState;
- (void)autoStopSelectedCellPlayingState;
- (void)selectFirstMusicOfCurrentTabIfNeeded;
- (void)addSearchSelectedResultIfNeed;
- (BOOL)startFocusFeedCellPlaying;
- (BOOL)stopFocusFeedCellPlaying;
- (void)bgmContentViewDidShow;
- (void)bgmContentVViewDidClose;
- (void)setAllFeedListViewAppear;
- (void)setAllFeedListViewDisAppear;
- (void)findAndSetMusicPlaying:(id)arg1;
- (void)updateCurrentPlayingMusicData:(id)arg1;
- (BOOL)isMusicOn;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)bgmSelectedTabBarView:(id)arg1 didSelectedIndex:(long long)arg2;
- (id)bgmSelectedTabManager:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3;
- (void)bgmSelectedTabManager:(id)arg1 didSelectedMusic:(id)arg2 atIndex:(unsigned long long)arg3 isTriggerByTap:(BOOL)arg4;
- (void)bgmSelectedTabManager:(id)arg1 didEditMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)bgmSelectedTabManager:(id)arg1 willShowMusic:(id)arg2 musicIndex:(unsigned long long)arg3;
- (unsigned long long)bgmSelectedTabManagerGetMaterialDuration:(id)arg1;
- (void)bgmSelectedTabManager:(id)arg1 didFavMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)bgmSelectedTabManager:(id)arg1 didUnfavMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)bgmSelectedTabManager:(id)arg1 didRemoveMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)bgmSelectedTabManagerGetCurrentMusicData;
- (void)bgmSelectedTabManagerDidTapLocalImport:(id)arg1;
- (void)bgmSelectedTabManager:(id)arg1 didTapLocalImportMore:(id)arg2;
- (id)onBgmSelectedSearchView:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3;
- (void)onBgmSelectedSearchView:(id)arg1 didSelectedMusic:(id)arg2 atIndex:(unsigned long long)arg3 isTriggerByTap:(BOOL)arg4;
- (void)onBgmSelectedSearchView:(id)arg1 didEditMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onBgmSelectedSearchView:(id)arg1 didFavMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onBgmSelectedSearchView:(id)arg1 didRemoveMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onBgmSelectedSearchView:(id)arg1 willShowMusic:(id)arg2 musicIndex:(unsigned long long)arg3;
- (void)onBgmSelectedSearchView:(id)arg1 didSearchWithKey:(id)arg2;
- (void)onBgmSelectedSearchViewDidClickCancel:(id)arg1;
- (unsigned long long)bgmSelectedSearchViewGetMaterialDuration:(id)arg1;
- (BOOL)bgmSelectedSearchViewIsShowingInView:(id)arg1;
- (void)onSelectedSearchViewWillStartPlayingVideo:(id)arg1;
- (void)onSelectedSearchViewWillStopPlayingVideo:(id)arg1;
- (void)bgmChooseFinderFeedListView:(id)arg1 didSelectedMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)bgmChooseFinderFeedListView:(id)arg1 didClickEditButtonWithMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)bgmChooseFinderFeedListViewIsShowingInView:(id)arg1;
- (unsigned long long)bgmChooseFinderFeedListViewGetMaterialDuration:(id)arg1;
- (void)bgmChooseFinderFeedListViewWillStartPlayingVideo:(id)arg1;
- (void)bgmChooseFinderFeedListViewWillStopPlayingVideo:(id)arg1;
- (void)handleMusicSelectActionForFavAndRecentlyPlayed:(id)arg1 tabIndex:(unsigned long long)arg2;
- (void)handleRecentPlayedTabAddDataActionWithMusicData:(id)arg1;
- (void)handleRecentPlayedTabRemoveDataActionWithMusicData:(id)arg1;
- (void)handleFavTabAddDataActionWithMusicData:(id)arg1 tabType:(unsigned long long)arg2 bgmListType:(unsigned long long)arg3;
- (void)handleFavTabRemoveDataActionWithMusicData:(id)arg1 tabType:(unsigned long long)arg2 bgmListType:(unsigned long long)arg3;
- (void)updateCellsWhenFavStateDidChangeWithWithMusicData:(id)arg1 tabType:(unsigned long long)arg2;
- (void)updateFavTabStateIfNeededWhenDidSelectedMusicInRec:(id)arg1;
- (void)reloadTabViewCellWithTargetTabMgr:(id)arg1 musicData:(id)arg2;
- (unsigned long long)bgmListTypeForTabType:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)publishContext;
- (long long)snsEditSource;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)tabBar;
- (void)setTabBar:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)searchResultView;
- (void)setSearchResultView:(id)arg1;
- (id)tabControllers;
- (void)setTabControllers:(id)arg1;
- (id)tabViewModels;
- (void)setTabViewModels:(id)arg1;
- (unsigned long long)currentTabIndex;
- (void)setCurrentTabIndex:(unsigned long long)arg1;
- (id)currentMusicData;
- (void)setCurrentMusicData:(id)arg1;
- (id)lastInsertedRecMusicFromOtherTab;
- (void)setLastInsertedRecMusicFromOtherTab:(id)arg1;
- (id)config;
- (void).cxx_destruct;
@end
