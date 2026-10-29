@interface WCFinderPageViewContainer : MMScrollView <WCFinderFeedFlowViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _delayPageViewCreateTime; // +0x10
    BOOL _lazyLoadingDisabled; // +0x11
    BOOL _allowContentInsetChangeWhenPageIsNotAtTop; // +0x12
    id <WCFinderPageViewContainerDelegate> _containerDelegate; // +0x18
    double _contentTopInset; // +0x20
    double _linkedContentOffsetY; // +0x28
    double _topOffsetWhenHover; // +0x30
    unsigned long long _selectedIndex; // +0x38
    unsigned long long _selectedFilterIndex; // +0x40
    unsigned long long _pageViewCount; // +0x48
    NSMutableDictionary * _index2ViewDict; // +0x50
    unsigned long long _dragCount; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)removeObserverForFlowView:(id)arg1;
- (void)addObserverForFlowView:(id)arg1;
- (void)reset;
- (id)pageViewAtIndex:(unsigned long long)arg1;
- (void)scrollToTop;
- (void)initContainer;
- (void)addPageView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removePageViewAtIndex:(unsigned long long)arg1;
- (void)adjustPageViewContentOffset:(id)arg1;
- (void)displayPageViewAtIndex:(unsigned long long)arg1;
- (void)callDelegateIfNeedForPageViewSwithToIndex:(unsigned long long)arg1;
- (void)loadAllPageView;
- (void)setupPageViewAtIndex:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)index2ViewDict;
- (void)setLinkedContentOffsetY:(double)arg1;
- (void)setContentTopInset:(double)arg1;
- (void)setPageViewCount:(unsigned long long)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedFilterIndex:(unsigned long long)arg1;
- (void)checkDidSwitchToTargetIndex;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)setLazyLoadingDisabled:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg1;
- (double)contentTopInset;
- (double)linkedContentOffsetY;
- (double)topOffsetWhenHover;
- (void)setTopOffsetWhenHover:(double)arg1;
- (unsigned long long)selectedIndex;
- (unsigned long long)selectedFilterIndex;
- (unsigned long long)pageViewCount;
- (BOOL)delayPageViewCreateTime;
- (void)setDelayPageViewCreateTime:(BOOL)arg1;
- (BOOL)lazyLoadingDisabled;
- (BOOL)allowContentInsetChangeWhenPageIsNotAtTop;
- (void)setAllowContentInsetChangeWhenPageIsNotAtTop:(BOOL)arg1;
- (void)setIndex2ViewDict:(id)arg1;
- (unsigned long long)dragCount;
- (void)setDragCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

