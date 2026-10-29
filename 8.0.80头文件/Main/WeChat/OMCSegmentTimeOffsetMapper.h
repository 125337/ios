@interface OMCSegmentTimeOffsetMapper : NSObject <OMCTimelineTimeOffsetValueMapper>
{
    SharedPtr<XLinearValueMapper<XTMTime, double>> _time2OffsetMapper; // +0x8
    SharedPtr<XLinearValueMapper<double, XTMTime>> _offset2TimeMapper; // +0x10
    MCOffsetRange _pixelOffsetRange; // +0x18
    MCOffsetRange _pointOffsetRange; // +0x28
    XTMTimeRange _backingTimeRange; // +0x38
}
- (id)init;
- (struct)timeRange;
- (void)rebuildWithTimeRange:(struct)arg1 pointOffsetRange:(MCOffsetRange)arg2;
- (struct)timeForPointOffset:(double)arg1;
- (double)pointOffsetForTime:(struct)arg1;
- (struct)deltaTimeForDeltaPointOffset:(double)arg1;
- (id)description;
- (MCOffsetRange)pixelOffsetRange;
- (MCOffsetRange)pointOffsetRange;
- (XTMTimeRange)backingTimeRange;
- (SharedPtr<XLinearValueMapper<XTMTime, double>>)time2OffsetMapper;
- (SharedPtr<XLinearValueMapper<double, XTMTime>>)offset2TimeMapper;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
