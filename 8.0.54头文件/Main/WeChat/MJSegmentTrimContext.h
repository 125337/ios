@interface MJSegmentTrimContext : NSObject
{
    map<CMTime, MJTrimSnapInfo *, CMTimeComparator, std::allocator<std::pair<const CMTime, MJTrimSnapInfo *>>> _snapInfos; // +0x8
    struct _originalTimeRange; // +0x20
    MCOffsetRange _originalOffsetRange; // +0x50
    BOOL _shouldSnapToVisualAnchoredSegments; // +0x60
    MJStorylineViewModel * _storylineVM; // +0x68
    MJElementSegmentViewModel * _trimmingSegmentVM; // +0x70
    id <OMCTimelineTimeOffsetValueMapper><OMCTimelineTimeOffsetRangeMapper> _timeOffsetMapper; // +0x78
    OMCSegmentTimeOffsetMapper * _trimmingSegmentTimeOffsetMapper; // +0x80
    NSMutableArray * _anchoredSegmentSnapTimes; // +0x88
    double _snapDistance; // +0x90
}
- (id)initWithStorylineVM:(id)arg1 segmentVM:(id)arg2 timeOffsetMapper:(id)arg3 segmentTimeOffsetMapper:(id)arg4 shouldSnapToVisualAnchoredSegments:(BOOL)arg5;
- (unsigned long long)trimmingEdge;
- (id)snapInfoForTargetOffset:(double)arg1;
- (id)snapInfoWithTranslation:(CGPoint)arg1;
- (id)storylineVM;
- (id)trimmingSegmentVM;
- (id)timeOffsetMapper;
- (id)trimmingSegmentTimeOffsetMapper;
- (BOOL)shouldSnapToVisualAnchoredSegments;
- (id)anchoredSegmentSnapTimes;
- (double)snapDistance;
- (void)setSnapDistance:(double)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

