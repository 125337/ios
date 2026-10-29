@interface FlutterPreAttachTimingRecorder : NSObject
{
    NSMutableDictionary * _timings; // +0x8
    NSMutableDictionary * _startTimes; // +0x10
    BOOL _transferred; // +0x18
}
- (id)init;
- (void)recordTiming:(id)arg1;
- (void)recordTimingWithTimestamp:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)startDuration:(id)arg1;
- (void)endDuration:(id)arg1;
- (id)timings;
- (long long)durationFrom:(id)arg1 to:(id)arg2;
- (void)clearAndMarkTransferred;
- (BOOL)isTransferred;
- (void)reset;
- (id)summary;
- (void).cxx_destruct;
@end
