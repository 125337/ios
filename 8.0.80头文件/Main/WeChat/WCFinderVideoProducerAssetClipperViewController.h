@interface WCFinderVideoProducerAssetClipperViewController : WCFinderVideoProducerBaseViewControllerFragment <WCFinderVideoProducerBaseSheetViewDelegate, SightLocalVideoImageSliderDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _isMJAppLauncherEnabled; // +0x70
    BOOL _isAssetAdjustmentOptimizationEnabled; // +0x71
    BOOL _isAssetReorderEnabled; // +0x72
    BOOL _serverClipRangeCommitPending; // +0x73
    BOOL _requestedAssetAdjustmentInteractionEnabled; // +0x74
    BOOL _isSliderProgrammaticUpdateInProgress; // +0x75
    id <WCFinderVideoProducerAssetClipperDelegate> _delegate; // +0x78
    WCFinderVideoProducerBaseSheetView * _sheetView; // +0x80
    UICollectionView * _cvAssetBarView; // +0x88
    SightLocalVideoImageSlider * _sliderView; // +0x90
    UILongPressGestureRecognizer * _assetReorderLongPressGesture; // +0x98
    UIView * _assetReorderSnapshotView; // +0xa0
    CADisplayLink * _assetReorderAutoScrollDisplayLink; // +0xa8
    WCFinderVideoProducerDataSource * _cellVMData; // +0xb0
    NSIndexPath * _selectedIndexPath; // +0xb8
    NSIndexPath * _assetReorderingIndexPath; // +0xc0
    OMJID * _serverClipSkimmingSegmentID; // +0xc8
    unsigned long long _sliderProgrammaticUpdateGeneration; // +0xd0
    CGPoint _assetReorderTouchPointInView; // +0xd8
}
- (void)dealloc;
- (void)onRelayoutViews;
- (double)getContentHeightWhenShowing;
- (void)setViewTop:(double)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setIsAssetReorderEnabled:(BOOL)arg1;
- (void)resetDataWithClipSegmentListList:(id)arg1;
- (BOOL)resetDataWithComposingClipSegmentList:(id)arg1;
- (BOOL)resetDataWithClipSegmentListList:(id)arg1 orderedAssetInfoList:(id)arg2;
- (BOOL)resetDataWithComposingClipSegmentList:(id)arg1 orderedAssetInfoList:(id)arg2;
- (id)getAllCellVMList;
- (id)getAllComposingClipSegmentIDList;
- (double)getAssetClipperShowingHeight;
- (BOOL)isServerClipMode;
- (void)selectFirstAssetClip;
- (void)refreshAssetForSlotToken:(id)arg1;
- (void)setAssetAdjustmentInteractionEnabled:(BOOL)arg1;
- (void)onClickTopActionBarLeftButton:(id)arg1;
- (void)onClickTopActionBarRightButton:(id)arg1;
- (void)imageSlider:(id)arg1 startFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(id)arg1 playFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(id)arg1 endFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(id)arg1 didStopSlidingAtTime:(float)arg2 isStartFlag:(BOOL)arg3;
- (BOOL)imageSliderCanMoveStartAndEndFlag:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)prepareAssetReorderGestureIfNeeded;
- (void)onAssetReorderLongPress:(id)arg1;
- (void)updateAssetReorderSnapshotCenterAtPoint:(CGPoint)arg1;
- (void)updateAssetReorderAutoScroll;
- (void)onAssetReorderAutoScrollDisplayLink:(id)arg1;
- (double)assetReorderAutoScrollVelocityAtPoint:(CGPoint)arg1;
- (void)stopAssetReorderAutoScroll;
- (void)moveReorderingAssetIfNeededAtPoint:(CGPoint)arg1;
- (void)moveAssetItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)finishAssetReorder;
- (void)updateCellOrdersAndSelectedIndexPath;
- (void)updateAssetReorderGestureEnabled;
- (BOOL)shouldEnableAssetReorderGesture;
- (void)_onShowMJAppLauncherButton;
- (void)_onClickMJAppLauncherButton:(id)arg1;
- (void)skimServerClipForCellVM:(id)arg1 toTimeSec:(double)arg2;
- (void)finishServerClipSkimmingForCellVM:(id)arg1 startTimeSec:(double)arg2;
- (void)resetServerClipRangeRequestState;
- (void)updateAssetAdjustmentInteractionState;
- (void)_safeScrollToItemAtIndex:(id)arg1;
- (BOOL)_isIndexPathValid:(id)arg1;
- (void)_seekSegmentForCellVM:(id)arg1 toTimeSec:(double)arg2;
- (void)_playSegmentForCellVM:(id)arg1 startAtTimeSec:(double)arg2;
- (void)_showSliderViewForCellVM:(id)arg1;
- (void)_prepareSliderViewForAsset:(id)arg1 cellViewModel:(id)arg2 withPictureDetection:(id /* block */)arg3 videoDetection:(id /* block */)arg4 errorHandler:(id /* block */)arg5;
- (void)_updateSliderViewWithPictureImage:(id)arg1 cellViewModel:(id)arg2 sliderTimeRange:(struct)arg3 completion:(id /* block */)arg4;
- (void)_updateSliderViewWithVideoAVAsset:(id)arg1 cellViewModel:(id)arg2 sliderTimeRange:(struct)arg3 completion:(id /* block */)arg4;
- (void)_hideSliderView;
- (unsigned long long)beginSliderProgrammaticUpdate;
- (void)finishSliderProgrammaticUpdateWithGeneration:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)cancelSliderProgrammaticUpdate;
- (BOOL)shouldIgnoreServerClipSliderCallback;
- (BOOL)isSelectedCellVM:(id)arg1;
- (void)_onCellAtIndex:(id)arg1 changedSelectTo:(BOOL)arg2 manually:(BOOL)arg3;
- (BOOL)appendClipSegmentList:(id)arg1 orderedAssetInfoList:(id)arg2;
- (BOOL)appendComposingClipSegmentList:(id)arg1 orderedAssetInfoList:(id)arg2;
- (void)appendLegacyClipSegmentList:(id)arg1;
- (BOOL)appendLegacyComposingClipSegmentList:(id)arg1;
- (void)_onDataChanged;
- (id)_errorWithCode:(long long)arg1;
- (id)cellVMData;
- (void)_relayoutView;
- (void)_initView;
- (void)_initSheetView;
- (void)_initAssetBarView;
- (void)_initClipperView;
- (void)_initMJAppLauncherButton;
- (double)_getSheetViewHeight;
- (double)_getSheetViewContentheight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isMJAppLauncherEnabled;
- (void)setIsMJAppLauncherEnabled:(BOOL)arg1;
- (BOOL)isAssetAdjustmentOptimizationEnabled;
- (void)setIsAssetAdjustmentOptimizationEnabled:(BOOL)arg1;
- (BOOL)isAssetReorderEnabled;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)cvAssetBarView;
- (void)setCvAssetBarView:(id)arg1;
- (id)sliderView;
- (void)setSliderView:(id)arg1;
- (id)assetReorderLongPressGesture;
- (void)setAssetReorderLongPressGesture:(id)arg1;
- (id)assetReorderSnapshotView;
- (void)setAssetReorderSnapshotView:(id)arg1;
- (id)assetReorderAutoScrollDisplayLink;
- (void)setAssetReorderAutoScrollDisplayLink:(id)arg1;
- (void)setCellVMData:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)assetReorderingIndexPath;
- (void)setAssetReorderingIndexPath:(id)arg1;
- (CGPoint)assetReorderTouchPointInView;
- (void)setAssetReorderTouchPointInView:(CGPoint)arg1;
- (id)serverClipSkimmingSegmentID;
- (void)setServerClipSkimmingSegmentID:(id)arg1;
- (BOOL)serverClipRangeCommitPending;
- (void)setServerClipRangeCommitPending:(BOOL)arg1;
- (BOOL)requestedAssetAdjustmentInteractionEnabled;
- (void)setRequestedAssetAdjustmentInteractionEnabled:(BOOL)arg1;
- (BOOL)isSliderProgrammaticUpdateInProgress;
- (void)setIsSliderProgrammaticUpdateInProgress:(BOOL)arg1;
- (unsigned long long)sliderProgrammaticUpdateGeneration;
- (void)setSliderProgrammaticUpdateGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
