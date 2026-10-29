@interface WCFinderDynamicFriendTabViewController : WCFinderHighEntropyBaseViewController <WCFinderDynamicFriendTabViewModelDelegate, IMMFontMgrExt>
{
    BOOL _usesEntranceData; // +0x70
    BOOL _didStartInitialRequest; // +0x71
    BOOL _hasReportCreateEvent; // +0x72
    WCFinderDynamicTabInfo * _tabInfo; // +0x78
    WCFinderDynamicFriendTabViewModel * _feedVM; // +0x80
    unsigned long long _pageInType; // +0x88
    NSString * _pendingDislikeConfirmTid; // +0x90
}
- (double)preferredBottomInsetForStandardOverlay;
- (id)initWithTabInfo:(id)arg1;
- (void)setHighEntropyAdditionalTopInset:(double)arg1;
- (void)updateHighEntropyTableViewFrame;
- (double)feedVisibleTopInset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setUpTableView;
- (void)updateSubtabTopSpacer;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onFontSizeChange;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)consumeEntranceDataIfNeeded;
- (BOOL)startInitialRequestIfNeeded;
- (void)onSubStreamDataChanged;
- (void)onSubStreamDataAppendFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onSubStreamFetchSuccess;
- (void)onSubStreamFetchError;
- (void)onSubStreamNoMoreData;
- (void)onFeedVMDataWillRemoved:(id)arg1;
- (void)onFeedVMDataChangedAtIndexPath:(id)arg1 contentVM:(id)arg2 animated:(BOOL)arg3;
- (void)onFeedVMDataChanged;
- (void)onFeedServerFetchSuccess;
- (id)feedTLVCCurrentForceTid;
- (BOOL)isFeedValidToShowInSession:(id)arg1;
- (void)addSessionExposeInfo:(id)arg1;
- (void)refreshHeadOnScrolltoTop:(long long)arg1;
- (void)highEntropyDidTriggerTopRefreshLoadingEnterRefresh:(BOOL)arg1 isTopRefresh:(BOOL)arg2;
- (void)highEntropyNotifyTopRefreshActionByUser:(BOOL)arg1 isTopRefresh:(BOOL)arg2;
- (BOOL)triggerRefreshLogic:(long long)arg1 toTab:(long long)arg2;
- (void)markNeedReloadTeenagerModeChange;
- (unsigned long long)highEntropySectionNums;
- (id)highEntropyContentVMAtSection:(long long)arg1;
- (id)highEntropyCommonViewModel;
- (id)highEntropyRecommendFeedVM;
- (BOOL)highEntropyCanFetchNextPage;
- (void)highEntropyFetchNextPage;
- (BOOL)highEntropyNoMoreData;
- (void)highEntropyDidClickFoldedPlaceholder:(id)arg1;
- (void)highEntropyDidDislikeContentVM:(id)arg1;
- (void)onFinderFeedDislikeConfirmed:(id)arg1;
- (void)onFinderFeedDislikeCancelled:(id)arg1;
- (int)feedViewControllerScene;
- (BOOL)shouldHandleFriendLikeRedDotAnimation;
- (id)timelineTabViewController;
- (long long)currentVCTabType;
- (void)setUpNoMoreFooterView;
- (void)resetFooterViewNormal;
- (void)layoutNoMoreFooterView;
- (void)transferToRecommend;
- (void)resetFooterViewNormalIfNeeded;
- (id)tabInfo;
- (void)setTabInfo:(id)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (BOOL)usesEntranceData;
- (void)setUsesEntranceData:(BOOL)arg1;
- (unsigned long long)pageInType;
- (void)setPageInType:(unsigned long long)arg1;
- (BOOL)didStartInitialRequest;
- (void)setDidStartInitialRequest:(BOOL)arg1;
- (BOOL)hasReportCreateEvent;
- (void)setHasReportCreateEvent:(BOOL)arg1;
- (id)pendingDislikeConfirmTid;
- (void)setPendingDislikeConfirmTid:(id)arg1;
- (void).cxx_destruct;
@end
