@interface OMCTransitionSegment : OMCSegment <OMCTransitionAdjustable>
- (id)transitionDesc;
- (void)setTransitionDesc:(id)arg1;
- (struct)duration;
- (void)setDuration:(struct)arg1;
- (BOOL)isTransitionEnabled;
- (BOOL)isBlankTransition;
- (struct)usableDurationRange;
- (SharedPtr<XMSTransitionSegment>)backingTransitionSegment;
@end

