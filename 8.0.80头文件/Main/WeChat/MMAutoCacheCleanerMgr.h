@interface MMAutoCacheCleanerMgr : MMUserService <MMUIViewControllerExt, MMServiceProtocol>
{
    BOOL _cancelled; // +0x8
    BOOL _isLeaving4Tabs; // +0x9
    BOOL _running; // +0xa
    int _cancelRetryCount; // +0xc
    int _finderRetryCount; // +0x10
    NSObject<OS_dispatch_queue> * _workQueue; // +0x18
    NSArray * _entranceVCs; // +0x20
    NSArray * _exitVCs; // +0x28
    long long _fullyStartTime; // +0x30
    NSArray * _typedScannedSize; // +0x38
    NSArray * _cacheClassificationSize; // +0x40
    NSArray * _bizCleaners; // +0x48
    NSString * _sessionId; // +0x50
    unsigned long long _nextCheckTime; // +0x58
    id <MMCacheCleaner> _currentCleaner; // +0x60
    NSString * _deviceId; // +0x68
}
+ (id)bizCleaners;
+ (id)bizProperties;
+ (unsigned long long)scanSizeForPaths:(id)arg1 sleepTimeUs:(int)arg2 cancellation:(BOOL *)arg3;
+ (long long)scanTimeThresholdForPaths:(id)arg1 andSize:(long long)arg2 cancellation:(BOOL *)arg3;
+ (unsigned long long)deleteAllForPaths:(id)arg1 beforeTime:(long long)arg2 withDirs:(BOOL)arg3 cancellation:(BOOL *)arg4;
+ (void)reportType:(long long)arg1 actualCleaned:(long long)arg2 typedSize:(long long)arg3 targetSize:(long long)arg4 result:(int)arg5 time:(double)arg6 subtypeSizeBefore:(id)arg7 cleanedSubtypeSize:(id)arg8;
+ (id)cacheClassifyToString:(int)arg1;
+ (long long)getTime;
+ (long long)getIntervalExpt;
+ (BOOL)isVC:(id)arg1 kindOfClasses:(id)arg2;
- (id)init;
- (void)reportScanningType:(int)arg1 size:(long long)arg2 session:(id)arg3;
- (void)reportScanningType:(int)arg1 uiSize:(long long)arg2 session:(id)arg3;
- (void)reportScanningType:(int)arg1 size:(long long)arg2 uiSize:(long long)arg3 typedSize:(id)arg4 session:(id)arg5;
- (void)reportCleannedType:(int)arg1 sizeBefore:(long long)arg2 uiSizeBefore:(long long)arg3 cleanedSize:(long long)arg4 typedSizeBefore:(id)arg5 typedCleanedSize:(id)arg6 reason:(int)arg7 cancelled:(BOOL)arg8 session:(id)arg9 targetSizeStr:(id)arg10;
- (void)resetTypedScannedSize;
- (unsigned long long)scanAndClean;
- (unsigned long long)forceStartScan;
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
- (long long)fullyStartTime;
- (void)setFullyStartTime:(long long)arg1;
- (int)cancelRetryCount;
- (void)setCancelRetryCount:(int)arg1;
- (id)typedScannedSize;
- (void)setTypedScannedSize:(id)arg1;
- (id)cacheClassificationSize;
- (void)setCacheClassificationSize:(id)arg1;
- (id)bizCleaners;
- (void)setBizCleaners:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)nextCheckTime;
- (void)setNextCheckTime:(unsigned long long)arg1;
- (int)finderRetryCount;
- (void)setFinderRetryCount:(int)arg1;
- (BOOL)running;
- (void)setRunning:(BOOL)arg1;
- (id)currentCleaner;
- (void)setCurrentCleaner:(id)arg1;
- (id)deviceId;
- (void)setDeviceId:(id)arg1;
- (void).cxx_destruct;
@end
