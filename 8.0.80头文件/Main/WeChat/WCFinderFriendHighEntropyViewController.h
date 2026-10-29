@interface WCFinderFriendHighEntropyViewController : WCFinderHighEntropyBaseViewController <WCFinderFeedRecommendVMDelegate>
{
    BOOL _hasReportCreateEvent; // +0x70
    WCFinderFeedRecommendVM * _feedVM; // +0x78
    WCFinderFriendLikeFoldedViewController * _cachedFriendLikeFoldedVC; // +0x80
    NSString * _pendingDislikeConfirmTid; // +0x88
}
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (long long)currentVCTabType;
- (BOOL)shouldHandleFriendLikeRedDotAnimation;
- (void)willDisappear;
- (void)onFeedVMDataChanged;
- (void)onFeedVMDataAppend:(id)arg1;
- (void)onFeedVMDataAppendFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onFeedVMDataWillRemoved:(id)arg1;
- (long long)sectionForTid:(id)arg1;
- (void)onFeedVMDataDeleteWithIndexSet:(id)arg1;
- (void)onFeedVMDataChangedWithDeletedIndexSet:(id)arg1;
- (void)onFeedVMDataChangedByPublish:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onFeedVMDataFetchSuccess;
- (void)onFeedServerFetchSuccess;
- (void)onFeedServerFetchHistorySuccess:(BOOL)arg1;
- (void)onFeedVMDataPullRefreshStopLoading;
- (void)onFeedVMDataPullRefreshNoMore;
- (void)onFeedVMDataFootRefreshNoMore;
- (void)onFeedVMDataFootRefreshError;
- (void)onFeedVMDataLocalEmpty;
- (void)onFeedVMDataPullRefreshError:(unsigned long long)arg1;
- (void)onFeedVMDataChangedAtIndexPath:(id)arg1 contentVM:(id)arg2 animated:(BOOL)arg3;
- (BOOL)WCFinderFeedRecommendVMIsSelected;
- (void)tabViewControllerSelectionDidChange:(BOOL)arg1;
- (void)triggerSelectLogic;
- (void)handleDataReportLogicViewShow;
- (void)triggerDeselectLogic;
- (BOOL)willLeaveFinderSceneAfterDisappear;
- (BOOL)triggerRefreshLogic:(long long)arg1 toTab:(long long)arg2;
- (void)markNeedReloadTeenagerModeChange;
- (int)feedViewControllerScene;
- (void)resetFooterViewNormalIfNeeded;
- (id)currentHighEntropyFocusTidForAppendProtect;
- (BOOL)restoreHighEntropyFocusAfterAppendWithTid:(id)arg1;
- (long long)sectionForContentVM:(id)arg1;
- (BOOL)shouldReportHighEntropyFluency;
- (id)friendHighEntropyFluencyReportKey;
- (void)onVideoWithMediaId:(id)arg1 preloadStartTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(id)arg1 preloadFinishTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(id)arg1 startPlayTime:(unsigned long long)arg2;
- (unsigned long long)highEntropySectionNums;
- (id)highEntropyContentVMAtSection:(long long)arg1;
- (id)highEntropyCommonViewModel;
- (id)highEntropyRecommendFeedVM;
- (BOOL)highEntropyCanFetchNextPage;
- (BOOL)highEntropyNoMoreData;
- (void)highEntropyDidClickFoldedPlaceholder:(id)arg1;
- (void)highEntropyDidDislikeContentVM:(id)arg1;
- (void)onFinderFeedDislikeConfirmed:(id)arg1;
- (void)onFinderFeedDislikeCancelled:(id)arg1;
- (void)highEntropyDidTriggerTopRefreshLoadingEnterRefresh:(BOOL)arg1 isTopRefresh:(BOOL)arg2;
- (void)highEntropyNotifyTopRefreshActionByUser:(BOOL)arg1 isTopRefresh:(BOOL)arg2;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (id)cachedFriendLikeFoldedVC;
- (void)setCachedFriendLikeFoldedVC:(id)arg1;
- (BOOL)hasReportCreateEvent;
- (void)setHasReportCreateEvent:(BOOL)arg1;
- (id)pendingDislikeConfirmTid;
- (void)setPendingDislikeConfirmTid:(id)arg1;
- (void).cxx_destruct;
@end
