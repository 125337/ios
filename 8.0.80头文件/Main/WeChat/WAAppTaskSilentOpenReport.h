@interface WAAppTaskSilentOpenReport : NSObject
+ (void)reportTriggerSilentOpen;
+ (void)reportColdLaunchSilentOpen;
+ (void)reportHotLaunchSilentOpen;
+ (void)reportLaunchSilentOpen;
+ (void)reportLaunchWhenSilentOpenNotFinished;
+ (void)reportLaunchSilentOpenTriggerReLaunch;
+ (void)reportLaunchSilentOpenNotTriggerRelaunch;
+ (void)reportHotLaunchSilentOpenRelaunchInBackground;
+ (void)reportLaunchWhenSilentRelaunchNotFinished;
@end
