@interface BackgroundTask : NSObject
+ (void)backgroundTaskHold;
+ (void)backgroundTaskRelease;
+ (void)run;
+ (void)p_reportCostTime:(double)arg1 lowPowerMode:(BOOL)arg2;
+ (void)notifySuspendOnMainThread;
@end
