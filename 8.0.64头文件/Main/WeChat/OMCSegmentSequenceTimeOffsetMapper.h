@interface OMCSegmentSequenceTimeOffsetMapper : NSObject <OMCTimelineTimeOffsetValueMapper, OMCTimelineTimeOffsetRangeMapper>
{
    BOOL _isSequenceEmpty; // +0x8
    BOOL _isSequenceMapperDirty; // +0x9
    NSArray * _segmentViewMappers; // +0x10
    id <OMCSegmentSequenceTimeOffsetMapperDataSource> _dataSource; // +0x18
    SharedPtr<XPiecewiseValueMapper<XTMTime, double, kDoubleNan>> _time2OffsetMapper; // +0x20
    SharedPtr<XPiecewiseValueMapper<double, XTMTime, kTMInvalidTime>> _offset2TimeMapper; // +0x28
    NSMapTable * _pointOffsetRangesByTimeRange; // +0x30
    NSMapTable * _timeRangesByPointOffsetRange; // +0x38
    MCOffsetRange _pixelOffsetRangeBoundary; // +0x40
    MCOffsetRange _pointOffsetRangeBoundary; // +0x50
    XTMTimeRange _backingTimeRangeBoundary; // +0x60
}
- (id)init;
- (struct)timeForPointOffset:(double)arg1;
- (double)pointOffsetForTime:(struct)arg1;
- (XTMTime)backingTimeForPointOffset:(double)arg1;
- (double)pointOffsetForBackingTime:(const void *)arg1;
- (double)pixelOffsetForBackingTimeOutOfBoundary:(const void *)arg1;
- (struct)timeRangeForPointOffsetRange:(MCOffsetRange)arg1;
- (MCOffsetRange)pointOffsetRangeForTimeRange:(struct)arg1;
- (XTMTimeRange)backingTimeRangeForPointOffsetRange:(MCOffsetRange)arg1;
- (MCOffsetRange)pointOffsetRangeForBackingTimeRange:(const void *)arg1;
- (void)markSequenceMapperDirty;
- (void)rebuildIfNeeded;
- (void)rebuild;
- (struct)timeRangeBoundary;
- (void)setIsSequenceMapperDirty:(BOOL)arg1;
- (id)segmentViewMappers;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (BOOL)isSequenceEmpty;
- (void)setIsSequenceEmpty:(BOOL)arg1;
- (BOOL)isSequenceMapperDirty;
- (MCOffsetRange)pixelOffsetRangeBoundary;
- (MCOffsetRange)pointOffsetRangeBoundary;
- (XTMTimeRange)backingTimeRangeBoundary;
- (void)setBackingTimeRangeBoundary:(XTMTimeRange)arg1;
- (SharedPtr<XPiecewiseValueMapper<XTMTime, double, kDoubleNan>>)time2OffsetMapper;
- (void)setTime2OffsetMapper:(SharedPtr<XPiecewiseValueMapper<XTMTime, double, kDoubleNan>>)arg1;
- (SharedPtr<XPiecewiseValueMapper<double, XTMTime, kTMInvalidTime>>)offset2TimeMapper;
- (void)setOffset2TimeMapper:(SharedPtr<XPiecewiseValueMapper<double, XTMTime, kTMInvalidTime>>)arg1;
- (id)pointOffsetRangesByTimeRange;
- (void)setPointOffsetRangesByTimeRange:(id)arg1;
- (id)timeRangesByPointOffsetRange;
- (void)setTimeRangesByPointOffsetRange:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
