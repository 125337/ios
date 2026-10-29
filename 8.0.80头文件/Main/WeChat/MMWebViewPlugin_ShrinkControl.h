@interface MMWebViewPlugin_ShrinkControl : MMWebViewPluginBase
{
    BOOL _isBottomBarShow; // +0x8
    BOOL _shouldHandleScrollEvent; // +0x9
    unsigned int _unTrackScrollingNum; // +0xc
    double _offsetYWhenDraggingBegin; // +0x10
    double _offsetYWhenLastDidScroll; // +0x18
    CGSize _lastWebScrollContentSize; // +0x20
}
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)handleWebPageStateChanged:(CGSize)arg1;
- (void)handleWebScrollViewWillBeginDragging:(id)arg1;
- (void)handleWebScrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint)arg3;
- (void)handleWebScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)handleWebScrollViewWillBeginDecelerating:(id)arg1;
- (void)handleWebScrollViewDidScroll:(id)arg1;
- (void)handleWebScrollViewDidEndDecelerating:(id)arg1;
- (void)handleWebScrollViewDidEndScrollingAnimation:(id)arg1;
- (BOOL)isScrollViewExceedsTop:(id)arg1;
- (BOOL)scrollViewShouldShrink:(id)arg1;
- (BOOL)isScrollViewExceedsBottom:(id)arg1;
- (double)shrinkRateWithCurrentScrollView:(id)arg1;
- (BOOL)isBottomBarShow;
- (void)setIsBottomBarShow:(BOOL)arg1;
- (BOOL)shouldHandleScrollEvent;
- (void)setShouldHandleScrollEvent:(BOOL)arg1;
- (double)offsetYWhenDraggingBegin;
- (void)setOffsetYWhenDraggingBegin:(double)arg1;
- (double)offsetYWhenLastDidScroll;
- (void)setOffsetYWhenLastDidScroll:(double)arg1;
- (CGSize)lastWebScrollContentSize;
- (void)setLastWebScrollContentSize:(CGSize)arg1;
- (unsigned int)unTrackScrollingNum;
- (void)setUnTrackScrollingNum:(unsigned int)arg1;
@end
