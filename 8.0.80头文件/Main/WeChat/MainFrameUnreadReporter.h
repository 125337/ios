@interface MainFrameUnreadReporter : NSObject
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
}
+ (long long)getXlabType;
- (id)init;
- (void)tryReportSessionTimes;
- (void)reportMainTabAction:(long long)arg1 jumpSession:(id)arg2;
- (long long)getReportSessionTypeFor:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end
