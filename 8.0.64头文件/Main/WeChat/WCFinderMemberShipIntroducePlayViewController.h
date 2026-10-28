@interface WCFinderMemberShipIntroducePlayViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedListViewReportDelegate, WCFinderFeedListViewMinimizeDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell, WCFinderMemberShipPaymentGuideTableViewCellDelegate, WCFinderMemberShipConsumeViewModelDelegate>
{
    WCFinderFeedListView * _feedListView; // +0x70
    WCFinderFeedContentVM * _preVCData; // +0x78
    WCFinderShareCustomTransition * _animator; // +0x80
    WCFinderMemberShipIntroducePlayViewModel * _viewModel; // +0x88
    WCFinderMemberShipPreviewListViewModel * _previewListViewModel; // +0x90
    WCFinderMemberShipConsumeViewModel * _consumeViewModel; // +0x98
    WCFinderMemberShipIntroduceListData * _headerData; // +0xa0
    unsigned long long _currentFocusIndex; // +0xa8
}
- (id)initWithContentVMs:(id)arg1 currentIndex:(unsigned long long)arg2 listdata:(id)arg3 feedType:(int)arg4 finderUsername:(id)arg5 entranceSource:(unsigned long long)arg6;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)deleteContentVM:(id)arg1;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (BOOL)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (BOOL)isInSubScene;
- (BOOL)finderFeedListViewShowsMoreButton:(id)arg1;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)minimizePageBizKey;
- (BOOL)canShowAutoScrollItem;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 scrollViewWillEndDraggingWithVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)showToastWithTargetContentOffset:(CGPoint)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)doShareAnimation;
- (id)getCustomTransitionAnimator:(BOOL)arg1;
- (void)updateTransitionAnimator:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)onConfirmButtonClicked;
- (id)getCurrentViewController;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)preVCData;
- (void)setPreVCData:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)previewListViewModel;
- (void)setPreviewListViewModel:(id)arg1;
- (id)consumeViewModel;
- (void)setConsumeViewModel:(id)arg1;
- (id)headerData;
- (void)setHeaderData:(id)arg1;
- (unsigned long long)currentFocusIndex;
- (void)setCurrentFocusIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
