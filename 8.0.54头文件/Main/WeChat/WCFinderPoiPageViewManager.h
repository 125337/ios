@interface WCFinderPoiPageViewManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewMonitorDelegate, WCFinderPoiPageViewModelDelegate, WCFinderNearbyFlowViewControllerDelegate, WCFinderFeedDetailViewControllerDelegate, ServiceAuthExt>
{
    BOOL _enableZoomAnimator; // +0x8
    WCFinderFeedFlowView * _feedFlowView; // +0x10
    WCFinderPoiPageViewModel * _viewModel; // +0x18
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> * _currentViewController; // +0x20
    NSIndexPath * _serviceAuthBlockedIndexPath; // +0x28
    WCFinderNoMoreView * _tipsView; // +0x30
    CGPoint _targetContentOffset; // +0x38
}
- (id)initWithPoiParams:(id)arg1 tabInfo:(id)arg2 tabIndex:(unsigned long long)arg3 filterIndex:(unsigned long long)arg4 DataArray:(id)arg5 lastBuffer:(id)arg6 continueFlag:(BOOL)arg7 view:(id)arg8 InViewController:(id)arg9 nearbyFlag:(BOOL)arg10 nearbyInfo:(id)arg11 prefetchCount:(unsigned long long)arg12;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)tipsView;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 indexPathOfTid:(id)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didClickFeedItemWithIndexPath:(id)arg1 feedFlowView:(id)arg2;
- (void)finderFeedFlowViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)finderPoiReloadAllData:(id)arg1;
- (void)finderPoiAppendDataFrom:(long long)arg1 toIndex:(long long)arg2 viewModel:(id)arg3;
- (void)finderPoiNoMoreData:(id)arg1;
- (void)finderPoiInvalidWithErrorCode:(int)arg1 viewModel:(id)arg2;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)streamReportUDFKV:(id)arg1;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (CGPoint)targetContentOffset;
- (void)setTargetContentOffset:(CGPoint)arg1;
- (BOOL)enableZoomAnimator;
- (void)setEnableZoomAnimator:(BOOL)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)serviceAuthBlockedIndexPath;
- (void)setServiceAuthBlockedIndexPath:(id)arg1;
- (void)setTipsView:(id)arg1;
- (void).cxx_destruct;
@end

