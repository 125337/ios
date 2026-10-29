@interface OMCStoryline : NSObject
{
    OMCTimeline * _timeline; // +0x8
}
- (id)initWithTimeline:(id)arg1;
- (SharedPtr<XMSStoryline>)backingStoryline;
- (struct)presentationStartTime;
- (struct)presentationDuration;
- (struct)presentationTimeRange;
- (BOOL)hasMovieTitleSegment;
- (id)movieTitleSegment;
- (BOOL)hasMusicSegment;
- (id)musicSegment;
- (unsigned long long)segmentCount;
- (id)segmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSegment:(id)arg1;
- (unsigned long long)count;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)segmentIDAtIndex:(unsigned long long)arg1;
- (id)segmentWithID:(id)arg1;
- (BOOL)containsStorySegment:(id)arg1;
- (id)storySegmentAtTime:(struct)arg1;
- (id)allStorySegments;
- (id)allTransitionSegments;
- (BOOL)checkIfHasDifferentClipSegmentForMediaFilePath:(id)arg1;
- (unsigned long long)numberOfAudialSegmentLanes;
- (id)segmentIDsOnAudialLaneIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfVisualSegmentLanes;
- (id)segmentIDsOnVisualLaneIndex:(unsigned long long)arg1;
- (BOOL)hasVideoTag;
- (void)setVideoTagDesc:(id)arg1;
- (id)description;
- (id)timeline;
- (void).cxx_destruct;
@end

