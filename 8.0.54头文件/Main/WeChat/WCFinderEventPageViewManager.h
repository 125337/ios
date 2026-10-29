@interface WCFinderEventPageViewManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderEventPageViewModelDelegate, WCFinderFeedFlowViewLayoutDelegate>
{
    id <WCFinderEventPageViewManagerDelegate> _delegate; // +0x8
    WCFinderFeedFlowView * _feedFlowView; // +0x10
    WCFinderEventPageViewModel * _viewModel; // +0x18
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> * _currentViewController; // +0x20
}
- (id)initWithTopicParams:(id)arg1 eventTabInfo:(id)arg2 filterIndex:(unsigned long long)arg3 view:(id)arg4 InViewController:(id)arg5 byPassInfo:(id)arg6;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (void)finderEventFeedOrderChanged;
- (void)finderEventReceiveFirstPageWithPrefetched:(BOOL)arg1;
- (void)finderEventReloadAllData;
- (void)finderEventAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderEventNoMoreData;
- (void)finderEventInvalidWithErrorCode:(int)arg1;
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

