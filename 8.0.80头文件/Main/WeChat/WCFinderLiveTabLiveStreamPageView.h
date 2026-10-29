@interface WCFinderLiveTabLiveStreamPageView : WCFinderTabPageView
{
    BOOL _enableScrollShowTabWhenNotPinned; // +0x8
    BOOL _isSwitchingTab; // +0x9
    WCFinderLiveTabStreamPageScrollState * _scrollState; // +0x10
}
- (id)scrollState;
- (void)linkedContentOffsetYDidChange:(id)arg1;
- (BOOL)isFlowBouncingBottom;
- (BOOL)handleTabScrollToggleWithCurrentOffset:(double)arg1 delta:(double)arg2;
- (double)calculateScrollThreshold;
- (void)forceTabVisible;
- (void)flowScrollToTop;
- (void)updateTabContainerPositionWithCurrentOffset:(double)arg1 oldTabContainerBottom:(double)arg2;
- (void)setIsTabVisible:(BOOL)arg1;
- (BOOL)isTabVisible;
- (void)toggleTabVisible:(BOOL)arg1 currentOffsetY:(double)arg2 threshold:(double)arg3;
- (void)updateContentTopInset;
- (void)resetScrollTracking;
- (void)onWillSwitchPageWithType:(unsigned long long)arg1;
- (void)onDidSwitchPage;
- (void)reload;
- (BOOL)enableScrollShowTabWhenNotPinned;
- (void)setEnableScrollShowTabWhenNotPinned:(BOOL)arg1;
- (void)setScrollState:(id)arg1;
- (BOOL)isSwitchingTab;
- (void)setIsSwitchingTab:(BOOL)arg1;
- (void).cxx_destruct;
@end
