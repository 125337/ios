@interface WCFinderColumnSwipeEduCoordinator : NSObject
{
    WCFinderColumnTableViewCell * _cell; // +0x8
    WCFinderColumnSwipeEduView * _swipeEduView; // +0x10
    unsigned long long _swipeEduAnimToken; // +0x18
    double _swipeEduCollectionExtraWidth; // +0x20
    double _swipeEduCollectionAppliedExtraWidth; // +0x28
}
+ (void)resetShownColumnIdsForDebug;
- (id)initWithCell:(id)arg1;
- (BOOL)applyCollectionRawFrame:(CGRect)arg1 outBusinessSizeChanged:(BOOL *)arg2 outBusinessSizeDeltaAbs:(CGSize *)arg3;
- (void)tryShowIfNeeded;
- (void)dismissAndMarkLearnedIfNeeded;
- (void)resetSync;
- (void)_teardownAnimationSync;
- (id)_showEduViewWithTitle:(id)arg1 columnId:(id)arg2;
- (void)_showWithTitle:(id)arg1 currentShowCount:(unsigned int)arg2 columnId:(id)arg3;
- (void)_markLearned;
- (void)_applyExtraWidthIncremental;
- (void)_startCollectionShiftForEduView:(id)arg1;
- (void)_resetTransformAnimated:(BOOL)arg1;
- (void)_restoreExtraWidthIfNeeded;
- (id)cell;
- (void)setCell:(id)arg1;
- (id)swipeEduView;
- (void)setSwipeEduView:(id)arg1;
- (unsigned long long)swipeEduAnimToken;
- (void)setSwipeEduAnimToken:(unsigned long long)arg1;
- (double)swipeEduCollectionExtraWidth;
- (void)setSwipeEduCollectionExtraWidth:(double)arg1;
- (double)swipeEduCollectionAppliedExtraWidth;
- (void)setSwipeEduCollectionAppliedExtraWidth:(double)arg1;
- (void).cxx_destruct;
@end
