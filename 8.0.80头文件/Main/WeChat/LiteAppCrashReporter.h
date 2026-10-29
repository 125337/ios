@interface LiteAppCrashReporter : NSObject
{
    NSMutableArray * _datas; // +0x8
    id /* block */ _currentLiteAppChangedBlock; // +0x10
    id /* block */ _crashReportExtraInfoChangedBlock; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (void)addLiteApp:(id)arg1;
- (void)removeLiteApp:(id)arg1;
- (id)crashReportExtraInfo;
- (id)currentLiteApp;
- (void)setCurrentLiteAppChangedNotificationBlock:(id /* block */)arg1;
- (void)setCrashReportExtraInfoChangedNotificationBlock:(id /* block */)arg1;
- (id)datas;
- (void)setDatas:(id)arg1;
- (id /* block */)currentLiteAppChangedBlock;
- (void)setCurrentLiteAppChangedBlock:(id /* block */)arg1;
- (id /* block */)crashReportExtraInfoChangedBlock;
- (void)setCrashReportExtraInfoChangedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
