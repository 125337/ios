@interface WCVideoProducerTemplateFlowViewController : WCVideoProducerBaseViewControllerFragment <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCVideoProducerLoadMoreViewDelegate>
{
    BOOL _isHangingStyleEnabled; // +0x68
    BOOL _canRecreateWhileLoading; // +0x69
    BOOL _isMJAppLauncherEnabled; // +0x6a
    BOOL _isRequesting; // +0x6b
    BOOL _isScrolling; // +0x6c
    BOOL _isScrolledByCode; // +0x6d
    id <WCVideoProducerTemplateFlowDelegate> _delegate; // +0x70
    long long _itemCountPerRow; // +0x78
    double _cellVisibleRateThresholdForAutoPlay; // +0x80
    WCUnhittableView * _proxyRootView; // +0x88
    UIView * _contentContainerView; // +0x90
    UIView * _contentContainerBackgroundView; // +0x98
    UIView * _topBarContainerView; // +0xa0
    UIButton * _finishButton; // +0xa8
    UIButton * _cancelButton; // +0xb0
    UICollectionView * _cvTemplateFlow; // +0xb8
    WCVideoProducerLoadMoreView * _loadMoreView; // +0xc0
    UIPanGestureRecognizer * _topBarSlideGesture; // +0xc8
    double _topBarSlideBeginViewTop; // +0xd0
    WCVideoProducerDataSource * _cellVMData; // +0xd8
    NSIndexPath * _selectedIndex; // +0xe0
    NSMutableSet * _playingIndexPathSet; // +0xe8
    MJVideoTemplate * _originalTemplate; // +0xf0
    CGPoint _topBarSlideBeginPoint; // +0xf8
}
- (id)initWithContainerFrame:(CGRect)arg1;
- (void)dealloc;
- (void)onRelayoutViews;
- (double)getContentHeightWhenShowing;
- (void)setViewTop:(double)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (double)getTemplateFlowShowingHeight;
- (double)getTemplateFlowHangingHeight;
- (void)animateHangingWithCompletion:(id /* block */)arg1;
- (void)selectTemplateById:(id)arg1;
- (void)updateOriginalTemplate:(id)arg1;
- (void)resetDataWithTemplateList:(id)arg1;
- (long long)itemCountPerRow;
- (BOOL)useTransparentNavibar;
- (BOOL)hidesStatusBar;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)loadView;
- (void)onScrolledToLoading;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)_safeScrollToItemAtIndex:(id)arg1;
- (BOOL)_isIndexPathValid:(id)arg1;
- (void)_updateLoadMoreViewState:(unsigned long long)arg1 isError:(BOOL)arg2;
- (void)_startPlayingCellDemo;
- (void)_stopPlayingCellDemoForIndexPathSet:(id)arg1;
- (void)_ensureLoadMoreCellVMForInitialState:(unsigned long long)arg1;
- (void)_onClickCancelButton:(id)arg1;
- (void)_onClickFinishButton:(id)arg1;
- (void)_registerTopBarSlideGesture;
- (void)_unregisterTopBarSlideGesture;
- (void)_onTopBarPanGesture:(id)arg1;
- (void)_onSlideTopBarMoveToY:(double)arg1;
- (void)_onSlideTopBarFinishedWithDiff:(double)arg1;
- (void)_onScrollFinished;
- (BOOL)_isCellView:(id)arg1 visibleInCollectionView:(id)arg2 threshold:(double)arg3;
- (id)_sortCellViewByIndexPath:(id)arg1;
- (void)_onCellAtIndex:(id)arg1 changedSelectTo:(BOOL)arg2 manually:(BOOL)arg3;
- (void)_initFirstPageData;
- (void)_requestLoadMore;
- (void)_resetCellVMDataWithTemplateList:(id)arg1;
- (void)_appendMJAppLauncherTemplate;
- (void)_appendTemplateList:(id)arg1;
- (void)_onDataChangedWithCompletion:(id /* block */)arg1;
- (void)_updateCellChangingStatus;
- (id)_changingTemplate;
- (id)cellVMData;
- (void)_relayoutView;
- (void)_initView;
- (void)_initBackgroundCloseView;
- (void)_initContentView;
- (void)_initContentContainerBackgroundView;
- (void)_initContentContainerView;
- (void)_initTopBarView;
- (void)_initFlowListView;
- (double)_getContentHeightWithoutSafeArea;
- (double)_getContentHeightForShowing;
- (double)_getContentHeightForHanging;
- (double)_getHeightThresholdForAnimating;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isHangingStyleEnabled;
- (void)setIsHangingStyleEnabled:(BOOL)arg1;
- (void)setItemCountPerRow:(long long)arg1;
- (double)cellVisibleRateThresholdForAutoPlay;
- (void)setCellVisibleRateThresholdForAutoPlay:(double)arg1;
- (BOOL)canRecreateWhileLoading;
- (void)setCanRecreateWhileLoading:(BOOL)arg1;
- (BOOL)isMJAppLauncherEnabled;
- (void)setIsMJAppLauncherEnabled:(BOOL)arg1;
- (id)proxyRootView;
- (void)setProxyRootView:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)contentContainerBackgroundView;
- (void)setContentContainerBackgroundView:(id)arg1;
- (id)topBarContainerView;
- (void)setTopBarContainerView:(id)arg1;
- (id)finishButton;
- (void)setFinishButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)cvTemplateFlow;
- (void)setCvTemplateFlow:(id)arg1;
- (id)loadMoreView;
- (void)setLoadMoreView:(id)arg1;
- (id)topBarSlideGesture;
- (void)setTopBarSlideGesture:(id)arg1;
- (CGPoint)topBarSlideBeginPoint;
- (void)setTopBarSlideBeginPoint:(CGPoint)arg1;
- (double)topBarSlideBeginViewTop;
- (void)setTopBarSlideBeginViewTop:(double)arg1;
- (void)setCellVMData:(id)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (BOOL)isScrolling;
- (void)setIsScrolling:(BOOL)arg1;
- (id)selectedIndex;
- (void)setSelectedIndex:(id)arg1;
- (BOOL)isScrolledByCode;
- (void)setIsScrolledByCode:(BOOL)arg1;
- (id)playingIndexPathSet;
- (void)setPlayingIndexPathSet:(id)arg1;
- (id)originalTemplate;
- (void)setOriginalTemplate:(id)arg1;
- (void).cxx_destruct;
@end

