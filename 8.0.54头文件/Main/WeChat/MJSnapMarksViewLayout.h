@interface MJSnapMarksViewLayout : NSObject
{
    vector<std::tuple<MJRulerMarkType, double, std::string>, std::allocator<std::tuple<MJRulerMarkType, double, std::string>>> _snapMarks; // +0x8
    OMCSegmentSequenceTimeOffsetMapper * _timelineTimeOffsetMapper; // +0x20
    NSArray * _snapTimes; // +0x28
    CGRect _timelineVisibleRect; // +0x30
}
- (id)initWithTimelineTimeOffsetMapper:(id)arg1 snapTimes:(id)arg2;
- (void *)snapMarks;
- (void)updateSnapMarksWithSnapTimes:(id)arg1;
- (void)updateSnapMarksWithTimelineVisibleRect:(const CGRect *)arg1;
- (BOOL)isValidTimelineVisibleRect:(const CGRect *)arg1;
- (id)timelineTimeOffsetMapper;
- (id)snapTimes;
- (void)setSnapTimes:(id)arg1;
- (CGRect)timelineVisibleRect;
- (void)setTimelineVisibleRect:(CGRect)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

