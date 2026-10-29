@interface MJTimeRulerViewLayout : NSObject
{
    vector<std::tuple<MJRulerMarkType, double, std::string>, std::allocator<std::tuple<MJRulerMarkType, double, std::string>>> _timeRulerMarks; // +0x8
    OMCSegmentSequenceTimeOffsetMapper * _timelineTimeOffsetMapper; // +0x20
    MJTimeScaleList _timeScaleList; // +0x28
}
- (id)initWithTimelineTimeOffsetMapper:(id)arg1 frameRate:(float)arg2;
- (void *)timeRulerMarks;
- (void)updateTimeRulerMarksWithTimelineVisibleRect:(const CGRect *)arg1;
- (void)adjustTimeScaleWithSegmentMappers:(id)arg1 adjustState:(unsigned long long)arg2;
- (id)timelineTimeOffsetMapper;
- (MJTimeScaleList)timeScaleList;
- (void)setTimeScaleList:(MJTimeScaleList)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

