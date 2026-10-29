@interface WCFinderFollowLiveOftenReadVM : NSObject
{
    BOOL _continueFlag; // +0x8
    BOOL _isLoading; // +0x9
    BOOL _hasShownOnFirstEnter; // +0xa
    BOOL _isFold; // +0xb
    BOOL _isFoldBubblePersistent; // +0xc
    BOOL _hasPendingPresentation; // +0xd
    BOOL _tabBubbleOccluding; // +0xe
    int _commentScene; // +0x10
    NSArray * _dataArray; // +0x18
    FinderStreamOftenReadBar * _oftenReadBar; // +0x20
    NSData * _lastBuffer; // +0x28
    unsigned long long _totalLives; // +0x30
    unsigned long long _pendingPresentation; // +0x38
    NSMutableDictionary * _reportedExposeTimestamps; // +0x40
}
- (id)initWithCommentScene:(int)arg1;
- (void)reset;
- (BOOL)shouldHideLiveBarWithTabRefreshLoading:(BOOL)arg1;
- (void)onTabBubbleOcclusionChanged:(BOOL)arg1;
- (unsigned long long)consumePresentationToApplyForBarVisible:(BOOL)arg1;
- (BOOL)onTabRefreshWillStart:(unsigned long long)arg1;
- (unsigned long long)refreshTriggerFromHeaderMode:(unsigned long long)arg1;
- (void)onSilentFirstEnterRefreshWillStart;
- (void)_pendPresentationForCurrentRefresh;
- (BOOL)_effectiveIsFoldForBar:(id)arg1;
- (BOOL)_effectiveIsFoldBubblePersistentForBar:(id)arg1;
- (BOOL)_isSameOftenReadBar:(id)arg1;
- (void)reloadWithOftenReadBar:(id)arg1;
- (unsigned long long)recordExposeReportTimeForObjectId:(unsigned long long)arg1;
- (id)itemVMForFeedId:(id)arg1;
- (BOOL)removeItemWithTid:(id)arg1;
- (void)_pruneReportedExposeRecords;
- (id)_buildItemVMsFromItems:(id)arg1;
- (void)fetchMoreWithCompletion:(id /* block */)arg1;
- (void)refreshWithCompletion:(id /* block */)arg1;
- (void)_requestWithPullType:(int)arg1 completion:(id /* block */)arg2;
- (id)reportedExposeTimestamps;
- (int)commentScene;
- (id)dataArray;
- (void)setDataArray:(id)arg1;
- (id)oftenReadBar;
- (void)setOftenReadBar:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (unsigned long long)totalLives;
- (void)setTotalLives:(unsigned long long)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)hasShownOnFirstEnter;
- (void)setHasShownOnFirstEnter:(BOOL)arg1;
- (BOOL)isFold;
- (void)setIsFold:(BOOL)arg1;
- (BOOL)isFoldBubblePersistent;
- (void)setIsFoldBubblePersistent:(BOOL)arg1;
- (BOOL)hasPendingPresentation;
- (void)setHasPendingPresentation:(BOOL)arg1;
- (unsigned long long)pendingPresentation;
- (void)setPendingPresentation:(unsigned long long)arg1;
- (BOOL)tabBubbleOccluding;
- (void)setTabBubbleOccluding:(BOOL)arg1;
- (void)setReportedExposeTimestamps:(id)arg1;
- (void).cxx_destruct;
@end
