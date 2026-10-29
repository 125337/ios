@interface MMFinderLiveNewAnchorTaskView : MMPageSheetBaseView <UICollectionViewDelegate, UICollectionViewDataSource, MMFinderLiveNewAnchorTaskViewModelDelegate>
{
    BOOL _shouldShowCompletePageAnchorNotice; // +0x8
    unsigned int _scene; // +0xc
    id /* block */ _actionBlock; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMFinderLiveNewAnchorTaskViewModel * _taskVM; // +0x20
    long long _curIndex; // +0x28
    WCFinderLiveStarterReporter * _starterReporter; // +0x30
    WCFinderLiveAnchorLogReporter * _liveReporter; // +0x38
    UIScrollView * _detailContainerView; // +0x40
    CAGradientLayer * _gradientLayer; // +0x48
    MMUIActivityIndicatorView * _loadingView; // +0x50
    UICollectionView * _taskCollectionView; // +0x58
    MMUIView * _statusView; // +0x60
    UICollectionView * _taskStatusCollectionView; // +0x68
    CAGradientLayer * _statusGradientLayer; // +0x70
}
- (id)initWithTaskId:(id)arg1 scene:(unsigned int)arg2;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)pageSheetDidRotation;
- (void)setupUI;
- (void)setupTaskContent;
- (void)setupTaskStatus;
- (void)layoutUI;
- (void)layoutTaskContent;
- (void)layoutTaskStatus;
- (id)rightNavButton;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dealloc;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)taskCellSize;
- (CGSize)statusCellSize;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onNewAnchorQuestUpdated:(id)arg1;
- (void)initData;
- (id)taskVM;
- (void)setShouldShowCompletePageAnchorNotice:(BOOL)arg1;
- (void)setCurIndex:(long long)arg1;
- (void)reportCard;
- (id)liveTask;
- (id)starterReporter;
- (id)liveReporter;
- (void)jumpRewardHomeWithJumpInfo:(id)arg1;
- (void)onRightButtonTapped;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (BOOL)shouldShowCompletePageAnchorNotice;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void)setTaskVM:(id)arg1;
- (long long)curIndex;
- (void)setStarterReporter:(id)arg1;
- (void)setLiveReporter:(id)arg1;
- (id)detailContainerView;
- (void)setDetailContainerView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)taskCollectionView;
- (void)setTaskCollectionView:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (id)taskStatusCollectionView;
- (void)setTaskStatusCollectionView:(id)arg1;
- (id)statusGradientLayer;
- (void)setStatusGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

