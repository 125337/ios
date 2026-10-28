@interface MainFrameUnreadReporter : NSObject
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
}
- (id)init;
- (void)tryReportSessionTimes;
- (void)reportJumpToNextSession:(id)arg1 timestamp:(unsigned long long)arg2;
- (long long)getReportSessionTypeFor:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end
