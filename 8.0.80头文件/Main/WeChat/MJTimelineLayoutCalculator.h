@interface MJTimelineLayoutCalculator : NSObject <MJTimelineLayoutDataSource>
{
    MJTimelineViewModel * _timelineVM; // +0x8
    UIScrollView * _timelineView; // +0x10
    MJTimelineLayout * _backingLayout; // +0x18
    UIEdgeInsets _timelineViewContentInsets; // +0x20
}
- (id)reusableAttributesForSegmentVM:(id)arg1 inRect:(CGRect)arg2;
- (pair<std::vector<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>, std::vector<MJTileReusableAttributes *>>)reusableAttributesForSegmentVM:(id)arg1 withShiftingOffset:(double)arg2 originalAttributes:(id)arg3 inRect:(CGRect)arg4;
- (id)initWithTimelineVM:(id)arg1 visibleSegmentTypes:(id)arg2;
- (void)dealloc;
- (MCOffsetRange)yOffsetRangeForContent;
- (MCOffsetRange)yOffsetRangeForStoryline;
- (MCOffsetRange)xOffsetRangeForStoryline;
- (CGRect)frameForSegmentWithID:(id)arg1;
- (void)markLayoutDirty;
- (void)calculateLayout;
- (void)calculateLayoutIfNeeded;
- (id)segmentTimeOffsetMapperForSegmentWithID:(id)arg1;
- (CGSize)timelineViewContentSize;
- (unsigned int)waveformSampleCountForSegmentWithID:(id)arg1;
- (BOOL)shouldHideSegmentWithID:(id)arg1;
- (id)targetAnchoredSegmentForMovingSegmentWithID:(id)arg1 frame:(CGRect)arg2;
- (id)targetStoryContentSegmentForMovingSegmentWithFrame:(CGRect)arg1;
- (BOOL)isLayoutDirty;
- (id)storylineTimeOffsetMapper;
- (void)setTimelineViewContentInsets:(UIEdgeInsets)arg1;
- (double)timeOffsetScale;
- (CGRect)timelineViewBounds;
- (void)syncWithMutationInfo:(id)arg1 options:(unsigned long long)arg2;
- (id)timelineVM;
- (id)timelineView;
- (void)setTimelineView:(id)arg1;
- (UIEdgeInsets)timelineViewContentInsets;
- (id)backingLayout;
- (void).cxx_destruct;
@end
