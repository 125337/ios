@interface WCFinderFollowLiveOftenReadCoordinator : NSObject
{
    int _commentScene; // +0x8
    id <WCFinderFollowLiveOftenReadCoordinatorDelegate> _delegate; // +0x10
    WCFinderFullFeedFollowViewController * _host; // +0x18
    WCFinderFollowLiveOftenReadView * _barView; // +0x20
}
+ (BOOL)_shouldOccludeLiveBarForTabBubbleType:(unsigned long long)arg1;
- (id)feedVM;
- (id)initWithHost:(id)arg1 commentScene:(int)arg2;
- (void)setupView;
- (void)updateDisplay;
- (void)updateDisplaySyncTabBubble:(BOOL)arg1;
- (void)reloadSort;
- (void)prepareForRefreshWithMode:(unsigned long long)arg1;
- (void)handleWillTransitionToLandscape;
- (void)handlePortraitTransitionCompleted;
- (void)adjustPortraitUIIfNeeded;
- (void)_restoreBarAfterPortraitIfNeeded;
- (void)_updateTableViewLayoutIfNeeded;
- (BOOL)_shouldOccludeByTabBubbleOnHost:(id)arg1;
- (void)handleTabBubbleDidEnqueue:(unsigned long long)arg1;
- (void)handleTabBubbleDidDismiss:(unsigned long long)arg1;
- (void)handleHostScrollViewDidScroll;
- (void)_syncCollapsedBubbleVisibilityIfNeeded;
- (void)_notifyApplyExpandedTableViewLayoutWithBottom:(double)arg1;
- (void)_notifyResetTableViewLayout;
- (void)_hideBarIfNeeded;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)barView;
- (void)setBarView:(id)arg1;
- (void).cxx_destruct;
@end
