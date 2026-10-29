@interface MMBGMSelectedContentView : MMUIView <MMBGMSelectedTabBarViewDelegate, MMBGMSelectedTabManagerDelegate, MMBGMSelectedSearchViewDelegate, MMBGMCategoryDetailViewDelegate, UIScrollViewDelegate>
{
    id <MMBGMSelectedContentViewDelegate> _delegate; // +0x8
    MMBGMPanelPublishContext * _publishContext; // +0x10
    WCSearchBar * _searchBar; // +0x18
    MMBGMSelectedTabBarView * _tabBar; // +0x20
    UIScrollView * _scrollView; // +0x28
    MMBGMSelectedSearchView * _searchResultView; // +0x30
    NSMutableArray * _tabControllers; // +0x38
    NSMutableArray * _tabViewModels; // +0x40
    MMBGMCategoryDetailView * _categoryDetailView; // +0x48
    unsigned long long _currentTabIndex; // +0x50
    id <MMBGMSelectedMusicDataProtocol> _currentMusicData; // +0x58
}
- (id)initWithFrame:(CGRect)arg1 tabModel:(id)arg2 config:(id)arg3;
- (void)setupWithtabModel:(id)arg1 config:(id)arg2;
- (void)setPublishContext:(id)arg1;
- (void)layoutSubviews;
- (void)addMusicData:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)setBgmViewShow;
- (void)loadCurrentIndex;
- (unsigned long long)currentSelectedTabIndex;
- (void)selectMusicAtTabIndex:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (void)setAllCellUnSelected;
- (void)switchToTabIndex:(unsigned long long)arg1;
- (void)autoSetSelectedCellPlayingState;
- (void)autoStopSelectedCellPlayingState;
- (void)selectFirstMusicOfCurrentTabIfNeeded;
- (void)addSearchSelectedResultIfNeed;
- (void)findAndSetMusicPlaying:(id)arg1;
- (void)updateCurrentPlayingMusicData:(id)arg1;
- (BOOL)isMusicOn;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)bgmSelectedTabBarView:(id)arg1 didSelectedIndex:(long long)arg2;
- (id)bgmSelectedTabManager:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3;
- (void)bgmSelectedTabManager:(id)arg1 didSelectedMusic:(id)arg2 atIndex:(unsigned long long)arg3 isTriggerByTap:(BOOL)arg4;
- (void)bgmSelectedTabManager:(id)arg1 willShowMusic:(id)arg2 musicIndex:(unsigned long long)arg3;
- (id)bgmSelectedTabManagerGetCurrentMusicData;
- (id)onBgmSelectedSearchView:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3;
- (void)onBgmSelectedSearchView:(id)arg1 didSelectedMusic:(id)arg2 atIndex:(unsigned long long)arg3 isTriggerByTap:(BOOL)arg4;
- (void)onBgmSelectedSearchView:(id)arg1 willShowMusic:(id)arg2 musicIndex:(unsigned long long)arg3;
- (void)onBgmSelectedSearchView:(id)arg1 didSearchWithKey:(id)arg2;
- (void)onBgmSelectedSearchView:(id)arg1 didClickSelectedMusicCategory:(id)arg2;
- (void)onBgmSelectedSearchViewDidClickCancel:(id)arg1;
- (void)bgmCategoryDetailViewDidClickCloseButton;
- (void)bgmCategoryDetailViewDidSelectedMusic:(id)arg1 atIndex:(unsigned long long)arg2 isTriggerByTap:(BOOL)arg3;
- (id)bgmCategoryDetailGetCurrentSelectedMusicData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)publishContext;
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
- (id)categoryDetailView;
- (void)setCategoryDetailView:(id)arg1;
- (unsigned long long)currentTabIndex;
- (void)setCurrentTabIndex:(unsigned long long)arg1;
- (id)currentMusicData;
- (void)setCurrentMusicData:(id)arg1;
- (void).cxx_destruct;
@end

