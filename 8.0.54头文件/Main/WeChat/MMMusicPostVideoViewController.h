@interface MMMusicPostVideoViewController : MMUIHalfScreenViewController <MMMusicPostVideoTabViewDelegate, MMMusicPostVideoTabFinderControllerDelegate, MMMusicPostVideoTabFinderControllerDataSource, MMMusicPostVideoBasePageDelegate, MMMusicPostVideoTabAlbumControllerDelegate, MMMusicPostVideoTabAlbumControllerDataSource>
{
    MMMusicPostVideoTabView * _tabView; // +0x68
    MMScrollView * _scrollView; // +0x70
    NSMutableArray * _arrPageInfo; // +0x78
    unsigned long long _curMode; // +0x80
    long long _curTabIndex; // +0x88
    CGPoint startLocation; // +0x90
    MMUIButton * m_searchBtn; // +0xa0
    BOOL isInFinderSearchMode; // +0xa8
    MMMusicMVModel * _mvModel; // +0xb0
    BOOL _canAlbumShowPhoto; // +0xb8
    BOOL _canMultiSelect; // +0xb9
    id <MMMusicPostVideoVCDataSource> _postVideoDataSource; // +0xc0
    id <MMMusicPostVideoDelegate> _postVideoDelegate; // +0xc8
    double _minDuration; // +0xd0
    MMMusicPostVideoTabAlbumController * _tabAlbumVC; // +0xd8
    MMMusicPostVideoTabFinderController * _tabFinderVC; // +0xe0
}
+ (double)getHeightByMode:(unsigned long long)arg1;
- (id)initWithMVModel:(id)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)currentSelectedViewController;
- (void)setMode:(unsigned long long)arg1;
- (void)setMode:(unsigned long long)arg1 alongside:(id /* block */)arg2 completion:(id /* block */)arg3;
- (BOOL)isFullScreenMode;
- (void)setModeWithoutAnim:(unsigned long long)arg1;
- (void)setEditModeWithoutAnim;
- (void)setHalfModeWithoutAnim;
- (void)initView;
- (void)initPageInfo;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)setCurrEposideDuration:(double)arg1;
- (void)updateCurrEposideDuration:(double)arg1;
- (void)updateDataSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)arg1;
- (void)setCanMultiSelect:(BOOL)arg1;
- (void)setCanAlbumShowPhoto:(BOOL)arg1;
- (void)setMinDuration:(double)arg1;
- (void)reload;
- (void)reloadVisibleCellSelectedStatus;
- (void)onSelectLocalVideoAsset:(id)arg1 thumbImage:(id)arg2 thumbFrameInVCAcquireBlock:(id /* block */)arg3 contentOffsetResetBlock:(id /* block */)arg4;
- (void)onTabAlbumVCShortVideoTaken:(id)arg1 localIdentifier:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)mmMusicPostVideoTabAlbumController:(id)arg1 onLocalVideoAssetSelectedBtnChecked:(id)arg2;
- (void)onTabAlbumAssetsChange:(id)arg1;
- (id)tabAlbumGetSelectedArr;
- (void)onTabFinderSearch:(id)arg1;
- (void)onEnterTabFinderSearchMode;
- (void)enterSearchModeHeight;
- (void)onExitTabFinderSearchMode;
- (void)onSelectFinderResultVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVCAcquireBlock:(id /* block */)arg3 contentOffsetResetBlock:(id /* block */)arg4;
- (void)onSelectFinderSearchResultVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVCAcquireBlock:(id /* block */)arg3 contentOffsetResetBlock:(id /* block */)arg4;
- (void)mmMusicPostVideoTabFinderController:(id)arg1 onFinderCellSelectedBtnChecked:(id)arg2;
- (id)tabFinderGetSelectedArr;
- (void)handleTabSelected:(long long)arg1 tabConfig:(id)arg2 manualyTappedType:(unsigned long long)arg3 doubleClicked:(BOOL)arg4;
- (void)handleSearchBtnTap;
- (void)onPageSelectVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVCAcquireBlock:(id /* block */)arg3 contentOffsetResetBlock:(id /* block */)arg4;
- (void)doClickCloseWithNeedAnimated:(BOOL)arg1 action:(long long)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onTapGes:(id)arg1;
- (void)onPanGes:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)generatePreviewDataSoruce;
- (id)postVideoDataSource;
- (void)setPostVideoDataSource:(id)arg1;
- (id)postVideoDelegate;
- (void)setPostVideoDelegate:(id)arg1;
- (BOOL)canAlbumShowPhoto;
- (BOOL)canMultiSelect;
- (double)minDuration;
- (id)tabAlbumVC;
- (void)setTabAlbumVC:(id)arg1;
- (id)tabFinderVC;
- (void)setTabFinderVC:(id)arg1;
- (void).cxx_destruct;
@end

