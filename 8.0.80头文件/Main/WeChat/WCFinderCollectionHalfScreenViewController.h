@interface WCFinderCollectionHalfScreenViewController : MMUIHalfScreenViewController <UITableViewDelegate, WCFinderRefreshTableFooterViewDelegate, EGORefreshTableHeaderDelegate, WCFinderHalfScreenProtocol, WCFinderCollectionFeedListViewControllerDelegate, WCFinderStreamProfileDragBarViewDelegate, WCFinderFeedContentTextClickActionDelegate, WCFinderCollectionHalfDescHeaderDelegate, WCFinderPaymentBottomViewDelegate, WCFinderPaidCollectionConsumeLogicDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, MMScrollActionSheetDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _arrivedFromEpisode; // +0x70
    id <WCFinderCollectionHalfScreenViewControllerDelegate> _collectionDelegate; // +0x78
    id /* block */ _beforePushVCBlock; // +0x80
    id /* block */ _afterPopVCBlock; // +0x88
    UIView * _containerView; // +0x90
    WCFinderStreamProfileDragBarView * _dragBarView; // +0x98
    UIView * _fixedLineContainer; // +0xa0
    UIView * _scrollableContainer; // +0xa8
    UITableView * _tableView; // +0xb0
    WCFinderCollectionHalfHeaderRefreshView * _headerRefreshView; // +0xb8
    UIView * _emptyHeaderView; // +0xc0
    WCFinderCollectionHalfDescHeader * _descHeader; // +0xc8
    WCFinderRefreshTableFooterView * _footerView; // +0xd0
    WCFinderAnimationLoadingView * _loadingView; // +0xd8
    WCFinderPaymentBottomView * _bottomPaymentView; // +0xe0
    MMScrollActionSheet * _shareActionSheet; // +0xe8
    ForwardMessageLogicController * _forwardController; // +0xf0
    WCFinderLeftOvalTipsView * _watchHistoryTipsView; // +0xf8
    WCFinderCollectionFeedListViewModel * _viewModel; // +0x100
    double _heightRatio; // +0x108
    NSString * _tidForJumpBreakPage; // +0x110
    UITableViewDiffableDataSource * _dataSource; // +0x118
    WCFinderPaidCollectionConsumeLogic * _courseConsumeLogic; // +0x120
    NSString * _targetTidWhenStartConsume; // +0x128
}
+ (unsigned long long)feedSortIdInUnpaidCollectionForVM:(id)arg1;
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
- (double)halfScreenLayoutWidth;
- (void)updateDuoHalfScreenLayout;
- (void)setupUI;
- (void)setupDatasource;
- (void)layoutUI;
- (void)tryScrollToFromEpisode;
- (void)tryScrollToEpisodeTid:(id)arg1 animated:(BOOL)arg2;
- (void)_setupPageReport;
- (void)showRetryView;
- (void)retryEmptyFetchAction:(id)arg1;
- (void)fetchFirstPageWithAnimation;
- (void)adjustTableViewBottomInset;
- (void)_setupReportWithCell:(id)arg1 contentVM:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)findPreviewNavigationVC;
- (void)dismissSelfAndPresentingVC;
- (id)fromCommentVC;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)showPreviewOnlyTips;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (BOOL)triggerJumpToBreakPage:(id)arg1 isRollingUp:(BOOL)arg2;
- (void)startPaidCollectionConsumeWithTargetTid:(id)arg1;
- (void)handleConsumeSuccess;
- (void)_reportContentReportBtnExpose;
- (BOOL)needCloseOnOrientationChanged;
- (void)doClickCloseWithNeedAnimated:(BOOL)arg1 action:(long long)arg2;
- (id)dragBarView;
- (id)createTableView;
- (id)descHeader;
- (id)headerRefreshView;
- (id)emptyHeaderView;
- (id)footerView;
- (id)loadingView;
- (void)setupWatchHistoryTipsView;
- (void)updateWatchHistoryTipsInNextRunLoop;
- (void)updateWatchHistoryTips;
- (id)getHalfContainerView;
- (id)getCurTargetRatioValue;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)dragBarViewWillBegin:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(BOOL)arg2;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (void)collectionHalfDescHeaderDidClickLegalIcon:(id)arg1;
- (void)collectionHalfDescHeaderDidClickMoreButton:(id)arg1;
- (void)_showForwardActionSheet;
- (void)_showComplaintActionSheet;
- (BOOL)collectionHalfDescHeaderEnableFavourite:(id)arg1;
- (void)collectionHalfDescHeaderDidClickShareButton:(id)arg1;
- (void)collectionHalfDescHeaderDidClickFavouriteButton:(id)arg1;
- (void)collectionHalfDescHeaderHeightUpdate:(id)arg1;
- (id)reportParamsForCollectionHalfDescHeader:(id)arg1;
- (void)_shareToChat:(id)arg1;
- (void)_shareToMoment;
- (void)_favoritesCollection;
- (id)_forwardMessage;
- (id)_momentItem;
- (id)_shareItem;
- (id)_uploadTask;
- (BOOL)_isPaidCollection;
- (BOOL)isSmartCollection;
- (id)_generalReportParamsContainFeedCount:(BOOL)arg1;
- (void)_reportShareSheetItemEvent:(id)arg1 viewID:(id)arg2;
- (void)_reportForwardWithController:(id)arg1 result:(unsigned long long)arg2;
- (void)onPaymentBottomViewClickConfirmButton;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onPaidCollectionConsumeLogicPurchaseCourseSuccessWithMsg:(id)arg1;
- (void)_pullFirstPageFinish;
- (void)onViewModelFeedArray:(id)arg1 change:(id)arg2;
- (BOOL)isTableViewEmpty;
- (void)updatePollingState;
- (void)updateBottomHeaderView;
- (void)updateTopHeaderView;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
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
- (id)shareActionSheet;
- (void)setShareActionSheet:(id)arg1;
- (id)forwardController;
- (void)setForwardController:(id)arg1;
- (id)watchHistoryTipsView;
- (void)setWatchHistoryTipsView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (BOOL)arrivedFromEpisode;
- (void)setArrivedFromEpisode:(BOOL)arg1;
- (id)tidForJumpBreakPage;
- (void)setTidForJumpBreakPage:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)courseConsumeLogic;
- (void)setCourseConsumeLogic:(id)arg1;
- (id)targetTidWhenStartConsume;
- (void)setTargetTidWhenStartConsume:(id)arg1;
- (void).cxx_destruct;
@end
