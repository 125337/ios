@interface WCVideoProducerAssetClipperViewController : WCVideoProducerBaseViewControllerFragment <WCVideoProducerBaseSheetViewDelegate, SightLocalVideoImageSliderDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _isMJAppLauncherEnabled; // +0x68
    id <WCVideoProducerAssetClipperDelegate> _delegate; // +0x70
    WCVideoProducerBaseSheetView * _sheetView; // +0x78
    UICollectionView * _cvAssetBarView; // +0x80
    SightLocalVideoImageSlider * _sliderView; // +0x88
    WCVideoProducerDataSource * _cellVMData; // +0x90
    NSIndexPath * _selectedIndexPath; // +0x98
}
- (void)dealloc;
- (void)onRelayoutViews;
- (double)getContentHeightWhenShowing;
- (void)setViewTop:(double)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)resetDataWithClipSegmentListList:(id)arg1;
- (id)getAllCellVMList;
- (double)getAssetClipperShowingHeight;
- (void)selectFirstAssetClip;
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
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)_onShowMJAppLauncherButton;
- (void)_onClickMJAppLauncherButton:(id)arg1;
- (void)_safeScrollToItemAtIndex:(id)arg1;
- (BOOL)_isIndexPathValid:(id)arg1;
- (void)_seekSegmentForCellVM:(id)arg1 toTimeSec:(double)arg2;
- (void)_playSegmentForCellVM:(id)arg1 startAtTimeSec:(double)arg2;
- (void)_showSliderViewForCellVM:(id)arg1;
- (void)_prepareSliderViewForAsset:(id)arg1 withPictureDetection:(id /* block */)arg2 videoDetection:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)_updateSliderViewWithPictureImage:(id)arg1 assetId:(id)arg2 sliderTimeRange:(struct)arg3 completion:(id /* block */)arg4;
- (void)_updateSliderViewWithVideoAVAsset:(id)arg1 assetId:(id)arg2 sliderTimeRange:(struct)arg3 completion:(id /* block */)arg4;
- (void)_hideSliderView;
- (BOOL)_isSelectedCellVMContainsAssetId:(id)arg1;
- (void)_onCellAtIndex:(id)arg1 changedSelectTo:(BOOL)arg2 manually:(BOOL)arg3;
- (void)_appendClipSgementList:(id)arg1;
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
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)cvAssetBarView;
- (void)setCvAssetBarView:(id)arg1;
- (id)sliderView;
- (void)setSliderView:(id)arg1;
- (void)setCellVMData:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (void).cxx_destruct;
@end

