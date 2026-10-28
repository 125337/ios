@interface MMBGMSearchResultContainerView : MMUIView <MMBGMSelectedSearchResultViewDelegate, MMBGMSelectedTabBarViewDelegate, UIScrollViewDelegate, MMBGMChooseFinderFeedListViewDelegate>
{
    id <MMBGMSearchResultContainerViewDelegate> _delegate; // +0x8
    UIScrollView * _scrollView; // +0x10
    NSMutableArray * _searchResultViews; // +0x18
    MMBGMSelectedTabBarView * _tabBar; // +0x20
    long long _currentTabIndex; // +0x28
    MMBGMSelectedConfig * _config; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)setup;
- (void)setupViews;
- (void)setupLayout;
- (void)setupData;
- (void)setPublishContext:(id)arg1;
- (void)reset;
- (void)resetAllTabIndex;
- (void)resetCurrentTabIndex;
- (void)unSelectedAllItem;
- (void)autoStopSelectedCellPlayingState;
- (void)autoSetSelectedCellPlayingState;
- (void)selectFirstMusicIfNeeded;
- (void)selectMusicAtIndex:(unsigned long long)arg1;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (id)currentSelectedmusicData;
- (void)startCurrentTabFooterLoading;
- (void)stopCurrentTabFooterLoading;
- (BOOL)startSearchWithKey:(id)arg1;
- (id)currentSearchResultView;
- (id)getCurrentSearchWord;
- (void)setHidden:(BOOL)arg1;
- (void)setFeedSearchResultViewAppearIfNeeded;
- (void)setFeedSearchResultViewDisApperaIfNeeded;
- (void)setFeedSearchResultViewShowUp;
- (void)setFeedSearchResultViewCloseDown;
- (void)_updateScrollViewOffset;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)bgmSelectedSearchResultViewGetSearchWord:(id)arg1;
- (void)onBgmSelectedSearchResultView:(id)arg1 didSelectedMusic:(id)arg2 atIndex:(unsigned long long)arg3 isTriggerByTap:(BOOL)arg4;
- (void)onBgmSelectedSearchResultView:(id)arg1 didEditMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)onBgmSelectedSearchResultView:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3;
- (void)onBgmSelectedSearchResultView:(id)arg1 willShowMusic:(id)arg2 musicIndex:(unsigned long long)arg3;
- (unsigned long long)bgmSelectedSearchResultViewGetMaterialDuration:(id)arg1;
- (void)onBgmSelectedSearchResultView:(id)arg1 didSearchWithKey:(id)arg2;
- (void)onBgmSelectedSearchResultViewWillBeginDragging:(id)arg1;
- (void)bgmSelectedTabBarView:(id)arg1 didSelectedIndex:(long long)arg2;
- (void)bgmChooseFinderFeedListView:(id)arg1 didSelectedMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)bgmChooseFinderFeedListView:(id)arg1 didClickEditButtonWithMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)bgmChooseFinderFeedListViewIsShowingInView:(id)arg1;
- (unsigned long long)bgmChooseFinderFeedListViewGetMaterialDuration:(id)arg1;
- (void)bgmChooseFinderFeedListViewWillStartPlayingVideo:(id)arg1;
- (void)bgmChooseFinderFeedListViewWillStopPlayingVideo:(id)arg1;
- (void)bgmChooseFinderFeedListViewWillBeginDragging:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)searchResultViews;
- (void)setSearchResultViews:(id)arg1;
- (id)tabBar;
- (void)setTabBar:(id)arg1;
- (long long)currentTabIndex;
- (void)setCurrentTabIndex:(long long)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
