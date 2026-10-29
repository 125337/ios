@interface MMLiveSquareGuideView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMFinderLiveMgrExt, UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _squarePrefetchPerformed; // +0x8
    BOOL _dataLoading; // +0x9
    id /* block */ _closeActionBlock; // +0x10
    id /* block */ _goSquareActionBlock; // +0x18
    id /* block */ _goLiveActionBlock; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    MMTimer * _refreshRecommendTimer; // +0x30
    MMTimer * _refreshSquareTimer; // +0x38
    WCFinderNavLiveStreamPreFetchParams * _prefetchParams; // +0x40
    NSMutableArray * _recommendItems; // +0x48
    NSData * _jumpNavliveBuffer; // +0x50
    UIView * _dialogView; // +0x58
    MMUILabel * _title; // +0x60
    UIButton * _leaveBtn; // +0x68
    UIButton * _stopShowBtn; // +0x70
    MMUILabel * _moreLiveLabel; // +0x78
    MMUILabel * _goSquareLabel; // +0x80
    MMUIImageView * _arrowImageView; // +0x88
    UICollectionView * _videoCollectionView; // +0x90
}
- (id)initWithTaskId:(id)arg1;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)pageSheetDidRotation;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setupUI;
- (void)layoutUI;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)liveTask;
- (CGSize)cellSize;
- (void)processRecommendItem:(id)arg1;
- (void)preloadRecommendItem;
- (void)stopPreloadRecommondItem;
- (void)loadRecommendItemCGI:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)initSquareJumpPrefetch;
- (void)startSquareJumpPrefetch;
- (void)stopPrefetchLiveStream;
- (void)refreshPrefetchData:(unsigned int)arg1;
- (void)onEnterForeground;
- (void)onClickedLeave;
- (void)onClickedStopShow;
- (void)onClickedGoSquare;
- (void)onClickedGoLive:(long long)arg1;
- (id)audienceLogReporter;
- (id /* block */)closeActionBlock;
- (void)setCloseActionBlock:(id /* block */)arg1;
- (id /* block */)goSquareActionBlock;
- (void)setGoSquareActionBlock:(id /* block */)arg1;
- (id /* block */)goLiveActionBlock;
- (void)setGoLiveActionBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)refreshRecommendTimer;
- (void)setRefreshRecommendTimer:(id)arg1;
- (id)refreshSquareTimer;
- (void)setRefreshSquareTimer:(id)arg1;
- (BOOL)squarePrefetchPerformed;
- (void)setSquarePrefetchPerformed:(BOOL)arg1;
- (id)prefetchParams;
- (void)setPrefetchParams:(id)arg1;
- (id)recommendItems;
- (void)setRecommendItems:(id)arg1;
- (id)jumpNavliveBuffer;
- (void)setJumpNavliveBuffer:(id)arg1;
- (BOOL)dataLoading;
- (void)setDataLoading:(BOOL)arg1;
- (id)dialogView;
- (void)setDialogView:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)leaveBtn;
- (void)setLeaveBtn:(id)arg1;
- (id)stopShowBtn;
- (void)setStopShowBtn:(id)arg1;
- (id)moreLiveLabel;
- (void)setMoreLiveLabel:(id)arg1;
- (id)goSquareLabel;
- (void)setGoSquareLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)videoCollectionView;
- (void)setVideoCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

