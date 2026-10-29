@interface MJElementSegmentViewModel : MJSegmentViewModel
{
    OMCElementSegment * _elementSegment; // +0x8
    struct _trimmingOriginalDuration; // +0x10
    struct _lastTrimmingDeltaTime; // +0x28
    BOOL _isTrimming; // +0x40
    BOOL _isTransInOverlapped; // +0x41
    BOOL _isTransOutOverlapped; // +0x42
    unsigned long long _trimmingEdge; // +0x48
    unsigned long long _trimmingBehavior; // +0x50
    double _trimmingDeltaWidth; // +0x58
    id <OMCLayerSpatialAdjustable> _layerSpatialAdjustable; // +0x60
}
- (id)initWithElementSegment:(id)arg1;
- (BOOL)syncWithSegment:(id)arg1;
- (void)syncWithElementSegmentImpl;
- (BOOL)isCuttableAtPresentationTime:(struct)arg1;
- (BOOL)isContentRangeAdjustableCurrently;
- (void)beginTrimmingWithEdge:(unsigned long long)arg1;
- (BOOL)applyTrimmingWithDeltaTime:(struct)arg1;
- (BOOL)applyTrimmingWithSnapTime:(struct)arg1;
- (BOOL)trimLeadingEdgeWithDeltaTime:(struct)arg1;
- (BOOL)trimTrailingEdgeWithDeltaTime:(struct)arg1;
- (BOOL)trimLeadingEdgeWithSnapTime:(struct)arg1;
- (BOOL)trimTrailingEdgeWithSnapTime:(struct)arg1;
- (void)endTrimming;
- (BOOL)canContinueTrimming;
- (BOOL)setDurationByChangingStartTime:(struct)arg1;
- (BOOL)setDurationByChangingEndTime:(struct)arg1;
- (BOOL)setStartTimeKeepingDuration:(struct)arg1;
- (void)expandHeadToOrigin;
- (void)expandTailToOrigin;
- (struct)transInDuration;
- (struct)transOutDuration;
- (BOOL)isHeadExpandable;
- (BOOL)isTailExpandable;
- (struct)headExpandableDuration;
- (struct)tailExpandableDuration;
- (struct)totalDurationIncludingExpandable;
- (BOOL)isHeadCompressible;
- (BOOL)isTailCompressible;
- (struct)headCompressibleDuration;
- (struct)tailCompressibleDuration;
- (struct)contentTimeRange;
- (struct)contentOriginalDuration;
- (BOOL)hasContentDescSegment;
- (id)contentDescSegment;
- (struct)mapToAbsoluteTimeFromDeltaTime:(struct)arg1;
- (id)description;
- (BOOL)isTrimming;
- (void)setIsTrimming:(BOOL)arg1;
- (unsigned long long)trimmingEdge;
- (unsigned long long)trimmingBehavior;
- (double)trimmingDeltaWidth;
- (void)setTrimmingDeltaWidth:(double)arg1;
- (BOOL)isTransInOverlapped;
- (void)setIsTransInOverlapped:(BOOL)arg1;
- (BOOL)isTransOutOverlapped;
- (void)setIsTransOutOverlapped:(BOOL)arg1;
- (id)layerSpatialAdjustable;
- (void)setLayerSpatialAdjustable:(id)arg1;
- (void).cxx_destruct;
@end
