@interface WCFinderHotWordsFeedFlowViewController : MMUIViewController <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderHotWordsFeedViewModelDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderHotWordsFeedViewModel * _viewModel; // +0x68
    WCFinderFeedFlowView * _feedFlowView; // +0x70
}
- (id)initWithTriggerInfo:(id)arg1 streamScene:(int)arg2;
- (void)viewDidLoad;
- (void)setupFeedFlowView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)linkTopicVM:(id)arg1 fetchDataFinishWithAppendDataWithRange:(_NSRange)arg2;
- (void)linkTopicVMStateChanged:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (void).cxx_destruct;
@end

