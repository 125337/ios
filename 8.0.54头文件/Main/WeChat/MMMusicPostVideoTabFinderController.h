@interface MMMusicPostVideoTabFinderController : MMMusicPostVideoTabBaseController <MMMusicSearchVideoControllerDelegate, MMMusicSearchVideoControllerDataSource, MMMusicPostVideoBasePageDelegate, MMMusicFinderVideoTabViewDelegate, MMMusicPostVideoTabFinderBaseControllerDataSource>
{
    MMMusicSearchVideoController * _searchController; // +0x8
    MMScrollView * _scrollView; // +0x10
    NSMutableArray * _arrPageInfo; // +0x18
    MMMusicFinderVideoTabView * _tabView; // +0x20
    MMMusicMVModel * _mvModel; // +0x28
    MMMusicInfo * m_musicInfo; // +0x30
    double _currEposideDuration; // +0x38
    long long _curTabIndex; // +0x40
    BOOL _canMultiSelect; // +0x48
    id <MMMusicPostVideoTabFinderControllerDataSource> _dataSource; // +0x50
    id <MMMusicPostVideoTabFinderControllerDelegate> _delegate; // +0x58
}
- (id)initWithViewController:(id)arg1 mvModel:(id)arg2 canMultiSelect:(BOOL)arg3;
- (id)arrPanGestures;
- (void)updateCanMultiSelect:(BOOL)arg1;
- (void)setCurrEposideDuration:(double)arg1;
- (void)updateCurrEposideDuration:(double)arg1;
- (void)updateDataSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)arg1;
- (BOOL)isDurationEnoughAndShowTipsIfNotEnough:(id)arg1;
- (void)initViews:(id)arg1;
- (void)initPageInfo;
- (void)layoutWithFrame:(CGRect)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)enterTabFinderControllerSearchMode;
- (void)resignTabFinderControllerSearchResponder;
- (void)onSearch:(id)arg1;
- (void)onEnterSearchMode;
- (void)onExitSearchMode;
- (void)onSelectSearchResultVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVCAcquireBlock:(id /* block */)arg3 contentOffsetResetBlock:(id /* block */)arg4;
- (void)mmMusicSearchVideoController:(id)arg1 onSearchFinderCellSelectedBtnChecked:(id)arg2;
- (void)onSwitchToThisPage:(BOOL)arg1;
- (void)handleTabSelected:(long long)arg1;
- (void)onPageSelectVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVCAcquireBlock:(id /* block */)arg3 contentOffsetResetBlock:(id /* block */)arg4;
- (void)mmMusicPostVideoTabFinderBasePageController:(id)arg1 onTabFinderCellSelectedBtnChecked:(id)arg2;
- (id)tabFinderBaseGetSelectedArr;
- (id)searchVideoSelectedArr;
- (id)generatePreviewDataSource;
- (id)generatePreviewDataSourceFromDataViewModel:(id)arg1;
- (void)reloadVisibleCellSelectedStatus;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)canMultiSelect;
- (void)setCanMultiSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end

