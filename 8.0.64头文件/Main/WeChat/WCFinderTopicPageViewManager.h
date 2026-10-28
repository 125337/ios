@interface WCFinderTopicPageViewManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewMonitorDelegate, WCFinderTopicPageViewModelDelegate>
{
    id <WCFinderTopicPageViewManagerDelegate> _delegate; // +0x8
    WCFinderFeedFlowView * _feedFlowView; // +0x10
    WCFinderTopicPageViewModel * _viewModel; // +0x18
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> * _currentViewController; // +0x20
}
- (id)initWithTopicParams:(id)arg1 eventTabInfo:(id)arg2 filterIndex:(unsigned long long)arg3 view:(id)arg4 InViewController:(id)arg5;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)finderTopicReloadAllDataWithPrefetched:(BOOL)arg1;
- (void)finderTopicAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderTopicNoMoreData;
- (void)finderTopicInvalidWithErrorCode:(int)arg1;
- (void)finderTopicGetReviseFeedCount:(unsigned int)arg1;
- (void)reportFeedStreamClickWithFeedFlowView:(id)arg1 selectedIndexPath:(id)arg2;
- (id)genFeedReportInfoWithEventCode:(long long)arg1 tid:(id)arg2;
- (void)reportClickActionInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (void).cxx_destruct;
@end
