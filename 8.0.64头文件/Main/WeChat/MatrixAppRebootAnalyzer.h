@interface MatrixAppRebootAnalyzer : NSObject
+ (void)installAppRebootAnalyzer;
+ (void)checkRebootType;
+ (BOOL)isAfterLastLaunchUserRebootDevice;
+ (unsigned long long)lastRebootType;
+ (unsigned long long)appLaunchTime;
+ (unsigned long long)lastAppLaunchTime;
+ (void)notifyAppQuitByExit;
+ (void)notifyAppQuitByUser;
+ (void)notifyAppEnterForeground;
+ (void)notifyAppEnterBackground;
+ (void)notifyAppBackgroundFetch;
+ (void)notifyAppWillSuspend;
+ (void)setUserScene:(id)arg1;
+ (id)userSceneOfLastRun;
+ (void)isForegroundMainThreadBlock:(BOOL)arg1;
+ (void)setDumpFileName:(id)arg1;
+ (id)lastDumpFileName;
+ (BOOL)checkXPCReboot;
+ (unsigned long long)checkXPCLagFile:(unsigned long long)arg1 withDate:(id)arg2;
+ (BOOL)isAppChange;
+ (BOOL)isOSChange;
+ (unsigned long long)getSystemLaunchTimeStamp;
+ (BOOL)isOSReboot;
@end
