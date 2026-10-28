@interface KSUPnPEventRecord : NSObject
{
    double _startTime; // +0x8
    double _endTime; // +0x10
    NSError * _error; // +0x18
}
- (double)duration;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
@end
