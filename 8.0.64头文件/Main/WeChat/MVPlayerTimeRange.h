@interface MVPlayerTimeRange : NSObject
{
    double _startTimeInSecond; // +0x8
    double _durationInSecond; // +0x10
    NSSet * _videoIdentifiers; // +0x18
}
- (id)init;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2;
- (BOOL)isValid;
- (double)startTimeInSecond;
- (void)setStartTimeInSecond:(double)arg1;
- (double)durationInSecond;
- (void)setDurationInSecond:(double)arg1;
- (id)videoIdentifiers;
- (void)setVideoIdentifiers:(id)arg1;
- (void).cxx_destruct;
@end
