@interface WCFinderColumnSwipeGuideCoordinator : NSObject
{
    BOOL _isTrackingHorizontalDrag; // +0x8
    WCFinderColumnTableViewCell * _cell; // +0x10
    WCFinderColumnSwipeGuideView * _guideView; // +0x18
    double _dragBeginOffsetX; // +0x20
}
+ (double)playTimeMilestone;
- (id)initWithCell:(id)arg1;
- (void)tryShowOnPlayTimeMilestone;
- (void)tryShowOnPlayToEnd;
- (void)tryShowOnReturnFromInner;
- (void)handleHorizontalDragBeginInScrollView:(id)arg1;
- (void)handleHorizontalScrollInScrollView:(id)arg1;
- (void)resetSync;
- (void)_markColumnConsumedAndDismissWithReason:(id)arg1;
- (void)_tryShowWithTrigger:(id)arg1;
- (BOOL)_showGuideViewWithCell:(id)arg1;
- (id)cell;
- (void)setCell:(id)arg1;
- (id)guideView;
- (void)setGuideView:(id)arg1;
- (BOOL)isTrackingHorizontalDrag;
- (void)setIsTrackingHorizontalDrag:(BOOL)arg1;
- (double)dragBeginOffsetX;
- (void)setDragBeginOffsetX:(double)arg1;
- (void).cxx_destruct;
@end
