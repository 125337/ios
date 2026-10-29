@interface WCFinderInspirationSquareTabVC : MMUIViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedFlowViewAdapterDeleagte, WCFinderFeedFlowViewMonitorDelegate>
{
    WCFinderFeedFlowView * _flowView; // +0x70
    WCFinderFeedFlowViewAdapter * _flowViewAdapter; // +0x78
    WCFinderInspirationSquareStreamViewModel * _viewmodel; // +0x80
}
- (BOOL)shouldSetUp;
- (void)setUpViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)feedFlowViewAdapter:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (id)feedFlowViewAdapterBypassReportDictToSingleStream:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 configCellReport:(id)arg2 indexPath:(id)arg3;
- (id)flowView;
- (void)setFlowView:(id)arg1;
- (id)flowViewAdapter;
- (void)setFlowViewAdapter:(id)arg1;
- (id)viewmodel;
- (void)setViewmodel:(id)arg1;
- (void).cxx_destruct;
@end
