@interface WCFinderLiveTabStreamPageScrollState : NSObject
{
    BOOL _isTabVisible; // +0x8
    BOOL _isTabVisibleByScroll; // +0x9
    BOOL _isDirectionChanged; // +0xa
    BOOL _isAnimatingToggleTabVisibility; // +0xb
    double _lastContentOffset; // +0x10
    double _accumulatedOffset; // +0x18
}
- (id)init;
- (void)reset;
- (void)updateWithDelta:(double)arg1;
- (BOOL)shouldToggleTabWithDelta:(double)arg1 accumulatedOffsetLimit:(double)arg2;
- (double)lastContentOffset;
- (void)setLastContentOffset:(double)arg1;
- (double)accumulatedOffset;
- (void)setAccumulatedOffset:(double)arg1;
- (BOOL)isTabVisible;
- (void)setIsTabVisible:(BOOL)arg1;
- (BOOL)isTabVisibleByScroll;
- (void)setIsTabVisibleByScroll:(BOOL)arg1;
- (BOOL)isDirectionChanged;
- (void)setIsDirectionChanged:(BOOL)arg1;
- (BOOL)isAnimatingToggleTabVisibility;
- (void)setIsAnimatingToggleTabVisibility:(BOOL)arg1;
@end
