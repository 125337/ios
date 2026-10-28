@interface Matrix : NSObject
{
    MatrixBuilder * _builder; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)addMatrixBuilder:(id)arg1;
- (void)startPlugins;
- (void)stopPlugins;
- (id)getPlugins;
- (id)getPluginWithTag:(id)arg1;
- (void)reportIssueComplete:(id)arg1 success:(BOOL)arg2;
- (unsigned long long)lastRebootType;
- (unsigned long long)appLaunchTime;
- (unsigned long long)lastAppLaunchTime;
- (void)setUserScene:(id)arg1;
- (id)userSceneOfLastRun;
- (BOOL)isAfterLastLaunchUserRebootDevice;
- (BOOL)checkXPCReboot;
- (void)notifyAppBackgroundFetch;
- (void)notifyAppWillSuspend;
- (id)builder;
- (void)setBuilder:(id)arg1;
- (void).cxx_destruct;
@end
