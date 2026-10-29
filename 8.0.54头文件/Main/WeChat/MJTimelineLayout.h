@interface MJTimelineLayout : NSObject <OMCSegmentSequenceTimeOffsetMapperDataSource>
{
    MCOffsetRange _contentYOffsetRange; // +0x8
    MCOffsetRange _storylineYOffsetRange; // +0x18
    map<long, MCOffsetRange, std::less<long>, std::allocator<std::pair<const long, MCOffsetRange>>> _audialLaneYOffsetRangeMap; // +0x28
    map<long, MCOffsetRange, std::less<long>, std::allocator<std::pair<const long, MCOffsetRange>>> _visualLaneYOffsetRangeMap; // +0x40
    set<MCSegmentType, std::less<MCSegmentType>, std::allocator<MCSegmentType>> _visibleSegmentTypes; // +0x58
    NSMutableArray * _arrangedAudialSegments; // +0x70
    NSMutableArray * _arrangedVisualSegments; // +0x78
    NSMapTable * _segmentFrameMap; // +0x80
    NSMapTable * _segmentMappersByID; // +0x88
    BOOL _isLayoutDirty; // +0x90
    id <MJTimelineLayoutDataSource> _dataSource; // +0x98
    MJTimelineViewModel * _timelineVM; // +0xa0
    OMCSegmentSequenceTimeOffsetMapper * _storylineTimeOffsetMapper; // +0xa8
    double _storylineYOffset; // +0xb0
    OMJID * _blankMapperID; // +0xb8
    UIEdgeInsets _timelineViewContentInsets; // +0xc0
}
- (void)calcVerticalLayout;
- (void)arrangeSegments;
- (void)arrangeSegmentsOverlapEnabled;
- (void)arrangeSegmentsOverlapDisabled;
- (id)segmentViewMappersForSegmentVMs:(id)arg1;
- (vector<double, std::allocator<double>>)calcWidthsForSegmentVMs:(id)arg1;
- (id)initWithTimelineViewModel:(id)arg1 visibleSegmentTypes:(id)arg2;
- (CGSize)timelineViewContentSize;
- (MCOffsetRange)yOffsetRangeForContent;
- (MCOffsetRange)yOffsetRangeForStoryline;
- (MCOffsetRange)xOffsetRangeForStoryline;
- (CGRect)frameForSegmentWithID:(id)arg1;
- (void)calculateLayoutIfNeeded;
- (void)calculateLayout;
- (void)resetCache;
- (void)markLayoutDirty;
- (void)internalCalculateLayout;
- (id)segmentViewMappersForSequenceMapper:(id)arg1;
- (double)timeOffsetScaleForSequenceMapper:(id)arg1;
- (BOOL)shouldUseTimeOffsetScaleForSequenceMapper:(id)arg1;
- (id)segmentTimeOffsetMapperForSegmentWithID:(id)arg1;
- (id)internalSegmentMapperForSegmentWithID:(id)arg1;
- (void)pruneSegmentMappersByIDs:(id)arg1;
- (id)targetAnchoredSegmentForMovingSegmentWithID:(id)arg1 frame:(CGRect)arg2;
- (id)targetStoryContentSegmentForMovingSegmentWithFrame:(CGRect)arg1;
- (void)calcSegmentFrames;
- (BOOL)isStorylineEmpty;
- (unsigned long long)audialLaneCount;
- (unsigned long long)visualLaneCount;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)timelineVM;
- (BOOL)isLayoutDirty;
- (void)setIsLayoutDirty:(BOOL)arg1;
- (id)storylineTimeOffsetMapper;
- (UIEdgeInsets)timelineViewContentInsets;
- (void)setTimelineViewContentInsets:(UIEdgeInsets)arg1;
- (double)storylineYOffset;
- (void)setStorylineYOffset:(double)arg1;
- (id)blankMapperID;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

