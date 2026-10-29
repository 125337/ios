@interface WCFinderFeedPickerPreviewListViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderPickerListTableViewCellDelegate, WCFinderFeedListTransitionHelperBehavior>
{
    BOOL _canScrollToFirstAppearIndex; // +0x68
    WCFinderFeedPickerParams * _params; // +0x70
    id <WCFinderFeedPickerPreviewListViewControllerDelegate> _delegate; // +0x78
    WCFinderFeedListView * _feedListView; // +0x80
    id <WCFinderFeedPickerPreviewListViewModelProtocol> _viewModel; // +0x88
    unsigned long long _firstAppearFeedIndex; // +0x90
    id /* block */ _pushCustomVCBlock; // +0x98
    MMUIButton * _doneBtn; // +0xa0
    UIView * _line; // +0xa8
    UIButton * _moreFeedTipsBtn; // +0xb0
}
- (id)initWithPickerTabModel:(id)arg1 selectedIndex:(unsigned long long)arg2 pushCustomVCBlock:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)setupSubViews;
- (BOOL)useTransparentNavibar;
- (void)scrollToIndex:(long long)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)onReturn:(id)arg1;
- (void)onBack;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (BOOL)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (BOOL)isInSubScene;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewDidEndDecelerating:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderPickerListTableViewCellDidClickDesctiption:(id)arg1 contentVM:(id)arg2;
- (void)finderPickerListTableViewCellTriggerAntiAddictCheckLogic;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)transitionHelperFetchCurrentPlayTid;
- (id)params;
- (void)setParams:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (unsigned long long)firstAppearFeedIndex;
- (void)setFirstAppearFeedIndex:(unsigned long long)arg1;
- (BOOL)canScrollToFirstAppearIndex;
- (void)setCanScrollToFirstAppearIndex:(BOOL)arg1;
- (id /* block */)pushCustomVCBlock;
- (void)setPushCustomVCBlock:(id /* block */)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)line;
- (void)setLine:(id)arg1;
- (id)moreFeedTipsBtn;
- (void)setMoreFeedTipsBtn:(id)arg1;
- (void).cxx_destruct;
@end

