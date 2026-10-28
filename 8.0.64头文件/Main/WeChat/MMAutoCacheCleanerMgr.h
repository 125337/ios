@interface MMAutoCacheCleanerMgr : MMUserService <MMUIViewControllerExt, MMServiceProtocol>
{
    BOOL _cancelled; // +0x8
    BOOL _isLeaving4Tabs; // +0x9
    BOOL _running; // +0xa
    NSObject<OS_dispatch_queue> * _workQueue; // +0x10
    NSArray * _entranceVCs; // +0x18
    NSArray * _exitVCs; // +0x20
    unsigned long long _nextCheckTime; // +0x28
    id <MMCacheCleaner> _currentCleaner; // +0x30
    NSString * _deviceId; // +0x38
}
+ (id)bizCleaners;
+ (id)bizProperties;
+ (unsigned long long)scanSizeForPaths:(id)arg1 cancellation:(BOOL *)arg2;
+ (long long)scanTimeThresholdForPaths:(id)arg1 andSize:(long long)arg2 cancellation:(BOOL *)arg3;
+ (unsigned long long)deleteAllForPaths:(id)arg1 beforeTime:(long long)arg2 withDirs:(BOOL)arg3 cancellation:(BOOL *)arg4;
+ (void)reportType:(long long)arg1 actualCleaned:(long long)arg2 typedSize:(long long)arg3 targetSize:(long long)arg4 result:(int)arg5 time:(double)arg6;
+ (id)cacheClassifyToString:(int)arg1;
+ (long long)getTime;
+ (BOOL)isVC:(id)arg1 kindOfClasses:(id)arg2;
- (id)init;
- (void)reportScanningType:(int)arg1 size:(long long)arg2;
- (void)reportScanningType:(int)arg1 uiSize:(long long)arg2;
- (void)reportScanningType:(int)arg1 size:(long long)arg2 uiSize:(long long)arg3;
- (void)reportCleannedType:(int)arg1 sizeBefore:(long long)arg2 uiSizeBefore:(long long)arg3 cleanedSize:(long long)arg4 reason:(int)arg5 cancelled:(BOOL)arg6;
- (unsigned long long)scanAndClean;
- (void)tryStartScan;
- (void)start;
- (void)cancel;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (BOOL)isLeaving4Tabs;
- (void)setIsLeaving4Tabs:(BOOL)arg1;
- (id)entranceVCs;
- (void)setEntranceVCs:(id)arg1;
- (id)exitVCs;
- (void)setExitVCs:(id)arg1;
- (unsigned long long)nextCheckTime;
- (void)setNextCheckTime:(unsigned long long)arg1;
- (BOOL)running;
- (void)setRunning:(BOOL)arg1;
- (id)currentCleaner;
- (void)setCurrentCleaner:(id)arg1;
- (id)deviceId;
- (void)setDeviceId:(id)arg1;
- (void).cxx_destruct;
@end
