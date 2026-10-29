@interface MMFinderLiveKTVReporter : NSObject
{
    NSMutableDictionary * _logRecordDict; // +0x8
    double _logInterval; // +0x10
}
+ (id)createKeyWithTarget:(id)arg1 sel:(id)arg2 business:(id)arg3;
- (id)init;
- (BOOL)tryFreqLogForTarget:(id)arg1 sel:(id)arg2 business:(id)arg3;
- (BOOL)tryFreqLogForTarget:(id)arg1 sel:(id)arg2 business:(id)arg3 interval:(double)arg4;
- (id)logRecordDict;
- (void)setLogRecordDict:(id)arg1;
- (double)logInterval;
- (void)setLogInterval:(double)arg1;
- (void).cxx_destruct;
@end

