@interface MainFrameUnreadReporter : NSObject
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
}
- (id)init;
- (void)tryReportSessionTimes;
- (void)reportDoubleClickWithUnreadCount:(long long)arg1 nextSession:(id)arg2;
- (void)reportSingleClickWithUnreadCount:(long long)arg1;
- (long long)getReportSessionTypeFor:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end

