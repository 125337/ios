@interface MJTransitionSegmentViewModel : MJSegmentViewModel
{
    OMCTransitionSegment * _transitionSegment; // +0x8
    BOOL _isBlankTransition; // +0x10
    BOOL _isOverlapped; // +0x11
    BOOL _isTransitionEnabled; // +0x12
}
- (id)initWithTransitionSegment:(id)arg1;
- (BOOL)syncWithSegment:(id)arg1;
- (void)syncWithTransitionSegmentImpl;
- (void)syncWithMutationEntry:(id)arg1;
- (id)transitionID;
- (id)transitionDesc;
- (void)setTransitionDesc:(id)arg1;
- (id)description;
- (BOOL)isBlankTransition;
- (void)setIsBlankTransition:(BOOL)arg1;
- (BOOL)isOverlapped;
- (BOOL)isTransitionEnabled;
- (void)setIsTransitionEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

