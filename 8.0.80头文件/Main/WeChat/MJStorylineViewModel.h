@interface MJStorylineViewModel : NSObject
{
    struct _durationBeforeSync; // +0x8
    BOOL _containsImageStorySegment; // +0x20
    OMCStoryline * _storyline; // +0x28
    id <MJMovieComposingContext> _composingContext; // +0x30
    NSMutableOrderedSet * _segmentVMs; // +0x38
    NSMutableOrderedSet * _storySegmentVMs; // +0x40
    NSMutableOrderedSet * _storyElementSegmentVMs; // +0x48
    UBValueSignal * _durationDidChangeSignal; // +0x50
    double _viewHeight; // +0x58
    NSMapTable * _segmentVMsByID; // +0x60
}
- (id)initWithStoryline:(id)arg1 viewHeight:(double)arg2 composingContext:(id)arg3;
- (void)dealloc;
- (void)initSegmentVMs;
- (BOOL)isEmpty;
- (struct)startTime;
- (struct)duration;
- (struct)timeRange;
- (struct)expandedDuration;
- (void)updateDurationSilently:(BOOL)arg1;
- (BOOL)containsSegmentVMWithID:(id)arg1;
- (id)segmentVMWithID:(id)arg1;
- (BOOL)containsSegmentVMWithType:(unsigned long long)arg1;
- (BOOL)containsSegmentVMWithType:(unsigned long long)arg1 atTime:(struct)arg2;
- (BOOL)intersectSegmentVMWithType:(unsigned long long)arg1 atTimeRange:(struct)arg2 excudeSegmentID:(id)arg3;
- (long long)intersectedSegmentVMCountWithType:(unsigned long long)arg1 atTimeRange:(struct)arg2 excudeSegmentID:(id)arg3;
- (id)storyElementSegmentVMAtTime:(struct)arg1;
- (id)nearstStoryClipSegmentToAtTime:(struct)arg1;
- (id)nearstAnchoredClipSegmentAtTime:(struct)arg1;
- (id)nearstAnchoredSegmentAtTime:(struct)arg1 withType:(unsigned long long)arg2;
- (id)nearstNextAnchoredSegmentAtTime:(struct)arg1 withType:(unsigned long long)arg2;
- (id)syncWithTimelineMutation:(id)arg1;
- (id)internalInsertSegmentVM:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)internalRemoveSegmentVM:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)internalUpdateSegmentVM:(id)arg1 withMutationInfo:(id)arg2;
- (void)syncAfterUndoRedo;
- (BOOL)isStorySegmentVM:(id)arg1;
- (BOOL)isAnchoredSegmentVM:(id)arg1;
- (id)previousStoryElementSegment:(id)arg1;
- (id)nextStoryElementSegment:(id)arg1;
- (id)previousStorySegmentVM:(id)arg1;
- (id)nextStorySegmentVM:(id)arg1;
- (void)updateTransitionRelatedProperties;
- (void)updateCommonProperties;
- (id)description;
- (id)storyline;
- (id)composingContext;
- (id)segmentVMs;
- (void)setSegmentVMs:(id)arg1;
- (id)storySegmentVMs;
- (void)setStorySegmentVMs:(id)arg1;
- (id)storyElementSegmentVMs;
- (void)setStoryElementSegmentVMs:(id)arg1;
- (BOOL)containsImageStorySegment;
- (void)setContainsImageStorySegment:(BOOL)arg1;
- (id)durationDidChangeSignal;
- (double)viewHeight;
- (id)segmentVMsByID;
- (void)setSegmentVMsByID:(id)arg1;
- (void).cxx_destruct;
@end
