@interface WCFinderCollectionHalfScreenViewController : MMUIHalfScreenViewController <UITableViewDelegate, WCFinderRefreshTableFooterViewDelegate, EGORefreshTableHeaderDelegate, WCFinderHalfScreenProtocol, WCFinderCollectionFeedListViewControllerDelegate, WCFinderStreamProfileDragBarViewDelegate, WCFinderFeedContentTextClickActionDelegate, WCFinderCollectionHalfDescHeaderDelegate, WCFinderPaymentBottomViewDelegate, WCFinderPaidCollectionConsumeLogicDelegate>
{
    BOOL _headerViewRefreshing; // +0x68
    BOOL _shouldShowHighlight; // +0x69
    BOOL _arrivedFromEpisode; // +0x6a
    id <WCFinderCollectionHalfScreenViewControllerDelegate> _collectionDelegate; // +0x70
    id /* block */ _beforePushVCBlock; // +0x78
    id /* block */ _afterPopVCBlock; // +0x80
    UIView * _containerView; // +0x88
    WCFinderStreamProfileDragBarView * _dragBarView; // +0x90
    UIView * _fixedLineContainer; // +0x98
    UIView * _scrollableContainer; // +0xa0
    UITableView * _tableView; // +0xa8
    WCFinderCollectionHalfHeaderRefreshView * _headerRefreshView; // +0xb0
    UIView * _emptyHeaderView; // +0xb8
    WCFinderCollectionHalfDescHeader * _descHeader; // +0xc0
    WCFinderRefreshTableFooterView * _footerView; // +0xc8
    WCFinderAnimationLoadingView * _loadingView; // +0xd0
    WCFinderPaymentBottomView * _bottomPaymentView; // +0xd8
    WCFinderCollectionFeedListViewModel * _viewModel; // +0xe0
    double _heightRatio; // +0xe8
    UITableViewDiffableDataSource * _dataSource; // +0xf0
    WCFinderPaidCollectionConsumeLogic * _courseConsumeLogic; // +0xf8
    NSString * _targetTidWhenStartConsume; // +0x100
}
- (id)initWithViewModel:(id)arg1;
- (id)params;
- (void)baseInit;
- (BOOL)useTransparentNavibar;
- (BOOL)isForbidPanGesture;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (double)getMaxHalfScreenHeight;
- (void)autoPop;
- (double)customTopViewHeight;
- (void)setupUI;
- (void)setupDatasource;
- (void)layoutUI;
- (void)tryScrollToFromEpisode;
- (void)showRetryView;
- (void)retryEmptyFetchAction:(id)arg1;
- (void)fetchFirstPageWithAnimation;
- (void)adjustTableViewBottomInset;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_setupReportWithCell:(id)arg1 contentVM:(id)arg2 indexPah:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)findPreviewNavigationVC;
- (void)dismissSelfAndPresentingVC;
- (id)fromCommentVC;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)startPaidCollectionConsumeWithTargetTid:(id)arg1;
- (void)handleConsumeSuccess;
- (void)_reportContentReportBtnExpose;
- (void)_reportContentReportBtnClick;
- (BOOL)needCloseOnOrientationChanged;
- (void)doClickCloseWithNeedAnimated:(BOOL)arg1 action:(long long)arg2;
- (id)dragBarView;
- (id)createTableView;
- (id)descHeader;
- (id)headerRefreshView;
- (id)emptyHeaderView;
- (id)footerView;
- (id)loadingView;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)dragBarViewWillBegin:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(BOOL)arg2;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (void)collectionHalfDescHeaderDidClickMoreButton:(id)arg1;
- (void)collectionHalfDescHeaderHeightUpdate:(id)arg1;
- (void)onPaymentBottomViewClickConfirmButton;
- (void)onPaidCollectionConsumeLogicPurchaseCourseSuccessWithMsg:(id)arg1;
- (void)onViewModelFeedArrayChanged:(id)arg1 context:(id)arg2;
- (void)updatePollingState;
- (void)updateBottomHeaderView;
- (void)updateTopHeaderView;
- (id)collectionDelegate;
- (void)setCollectionDelegate:(id)arg1;
- (id /* block */)beforePushVCBlock;
- (void)setBeforePushVCBlock:(id /* block */)arg1;
- (id /* block */)afterPopVCBlock;
- (void)setAfterPopVCBlock:(id /* block */)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void)setDragBarView:(id)arg1;
- (id)fixedLineContainer;
- (void)setFixedLineContainer:(id)arg1;
- (id)scrollableContainer;
- (void)setScrollableContainer:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void)setHeaderRefreshView:(id)arg1;
- (void)setEmptyHeaderView:(id)arg1;
- (void)setDescHeader:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)bottomPaymentView;
- (void)setBottomPaymentView:(id)arg1;
- (BOOL)headerViewRefreshing;
- (void)setHeaderViewRefreshing:(BOOL)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)shouldShowHighlight;
- (void)setShouldShowHighlight:(BOOL)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (BOOL)arrivedFromEpisode;
- (void)setArrivedFromEpisode:(BOOL)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)courseConsumeLogic;
- (void)setCourseConsumeLogic:(id)arg1;
- (id)targetTidWhenStartConsume;
- (void)setTargetTidWhenStartConsume:(id)arg1;
- (void).cxx_destruct;
@end

