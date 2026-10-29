@interface _TtC6WeChat22WCFinderInterestFeedVC : MMUIViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedBaseViewControllerProtocol>
{
     vm; // +0x8
     appearance; // +0x10
     $__lazy_storage_$_feedFlowView; // +0x18
}
- (void)finderFeedFlowViewFooterClickNavToRec;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (id)finderFeedFlowViewAutoPlayParams:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (void)finderFeedFlowViewStateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)init:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)navigationBarBlurEffect;
- (void)willAppear;
- (void)viewDidLoad;
- (void)popSelf;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end

