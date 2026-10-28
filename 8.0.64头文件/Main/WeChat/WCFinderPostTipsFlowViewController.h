@interface WCFinderPostTipsFlowViewController : MMPageSheetBaseViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderStreamProfilePostTipsFeedFlowViewModelDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderStreamProfilePostTipsFeedFlowViewModel * _viewModel; // +0x70
    UILabel * _titleLabel; // +0x78
    UILabel * _reasonLabel; // +0x80
    UIButton * _postButton; // +0x88
    WCFinderFeedFlowView * _feedFlowView; // +0x90
    unsigned long long _enterTimeMS; // +0x98
    id /* block */ _clickPostButtonBlock; // +0xa0
}
- (id)initWithPostTipsInfo:(id)arg1;
- (double)pageSheetContentHeight;
- (void)viewDidLoad;
- (void)setupData;
- (void)setupPageSheetConfig;
- (void)setupSubView;
- (int)commentScene;
- (unsigned long long)getCurrentViewState;
- (id)genReportDict;
- (void)onClickPostButton;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)streamProfilePostTipsVMDataDidChange;
- (int)streamProfilePostTipsVMGetCommentScene;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)reasonLabel;
- (void)setReasonLabel:(id)arg1;
- (id)postButton;
- (void)setPostButton:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (unsigned long long)enterTimeMS;
- (void)setEnterTimeMS:(unsigned long long)arg1;
- (id /* block */)clickPostButtonBlock;
- (void)setClickPostButtonBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
