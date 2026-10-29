@interface TingAudioTraceLog : NSObject
{
    NSMutableArray * _traceLogs; // +0x8
    double _realPlayedTime; // +0x10
    double _previousStartTime; // +0x18
}
- (id)init;
- (id)traceLogs;
- (void)makeRecordWith:(int)arg1 currentTime:(double)arg2 playRate:(float)arg3;
- (id)logStrings;
- (void)setTraceLogs:(id)arg1;
- (double)realPlayedTime;
- (void)setRealPlayedTime:(double)arg1;
- (double)previousStartTime;
- (void)setPreviousStartTime:(double)arg1;
- (void).cxx_destruct;
@end
