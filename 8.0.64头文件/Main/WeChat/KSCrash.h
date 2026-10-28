@interface KSCrash : NSObject
{
    BOOL _searchQueueNames; // +0x8
    BOOL _introspectMemory; // +0x9
    BOOL _addConsoleLogToReport; // +0xa
    BOOL _printPreviousLog; // +0xb
    BOOL _shouldPrintVMSummary; // +0xc
    BOOL _shouldPrintJSCType; // +0xd
    BOOL _ksLoggerEnabled; // +0xe
    BOOL _matrixKSLoggerEnabled; // +0xf
    BOOL _coreDumpEnabledAtCrash; // +0x10
    BOOL _coreDumpEnabledAtNonCrash; // +0x11
    int _deleteBehaviorAfterSendAll; // +0x14
    int _monitoring; // +0x18
    int _demangleLanguages; // +0x1c
    int _maxReportCount; // +0x20
    id <KSCrashReportFilter> _sink; // +0x28
    NSDictionary * _userInfo; // +0x30
    double _deadlockWatchdogInterval; // +0x38
    void * * _onCrash; // +0x40
    void * * _onHandleSignalCallBack; // +0x48
    void * * _onWritePointThread; // +0x50
    void * * _onWritePointThreadRepeatNumber; // +0x58
    void * * _onWriteProfileCallBack; // +0x60
    void * * _onWritePointCpuHighThread; // +0x68
    void * * _onWritePointCpuHighThreadCount; // +0x70
    void * * _onWritePointCpuHighThreadValue; // +0x78
    NSString * _bundleName; // +0x80
    NSString * _basePath; // +0x88
    NSArray * _doNotIntrospectClasses; // +0x90
    void * * _uncaughtExceptionHandler; // +0x98
    unsigned long long _userID; // +0xa0
    void * * _onInnerHandleSignalCallBack; // +0xa8
    void * * _onWriteLockTraceCallBack; // +0xb0
}
+ (void)load;
+ (void)initialize;
+ (id)sharedInstance;
+ (void)setCustomFullVersion:(id)arg1 shortVersion:(id)arg2;
+ (void)subscribeToNotifications;
+ (void)classDidBecomeLoaded;
+ (void)applicationDidBecomeActive;
+ (void)applicationWillResignActive;
+ (void)applicationDidEnterBackground;
+ (void)applicationWillEnterForeground;
+ (void)applicationWillTerminate;
- (id)init;
- (id)initWithBasePath:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)setMonitoring:(int)arg1;
- (void)setDeadlockWatchdogInterval:(double)arg1;
- (void)setSearchQueueNames:(BOOL)arg1;
- (void)setOnCrash:(void * *)arg1;
- (void)setOnHandleSignalCallBack:(void * *)arg1;
- (void)setOnInnerHandleSignalCallBack:(void * *)arg1;
- (void)setOnWritePointThread:(void * *)arg1;
- (void)setOnWritePointThreadRepeatNumber:(void * *)arg1;
- (void)setOnWriteProfileCallBack:(void * *)arg1;
- (void)setOnWriteLockTraceCallBack:(void * *)arg1;
- (void)setOnWritePointCpuHighThread:(void * *)arg1;
- (void)setOnWritePointCpuHighThreadCount:(void * *)arg1;
- (void)setOnWritePointCpuHighThreadValue:(void * *)arg1;
- (void)setIntrospectMemory:(BOOL)arg1;
- (BOOL)catchZombies;
- (void)setCatchZombies:(BOOL)arg1;
- (void)setDoNotIntrospectClasses:(id)arg1;
- (void)setMaxReportCount:(int)arg1;
- (void)setShouldPrintVMSummary:(BOOL)arg1;
- (void)setShouldPrintJSCType:(BOOL)arg1;
- (void)setKsLoggerEnabled:(BOOL)arg1;
- (void)setMatrixKSLoggerEnabled:(BOOL)arg1;
- (void)setCoreDumpEnabledAtCrash:(BOOL)arg1;
- (void)setCoreDumpEnabledAtNonCrash:(BOOL)arg1;
- (void)setUserID:(unsigned long long)arg1;
- (unsigned int)lastJSCType;
- (id)systemInfo;
- (BOOL)install;
- (void)sendAllReportsWithCompletion:(id /* block */)arg1;
- (void)deleteAllReports;
- (void)reportUserException:(id)arg1 reason:(id)arg2 language:(id)arg3 lineOfCode:(id)arg4 stackTrace:(id)arg5 logAllThreads:(BOOL)arg6 enableSnapshot:(BOOL)arg7 terminateProgram:(BOOL)arg8 writeCpuUsage:(BOOL)arg9 dumpFilePath:(id)arg10 dumpType:(int)arg11;
- (double)activeDurationSinceLastCrash;
- (double)backgroundDurationSinceLastCrash;
- (int)launchesSinceLastCrash;
- (int)sessionsSinceLastCrash;
- (double)activeDurationSinceLaunch;
- (double)backgroundDurationSinceLaunch;
- (int)sessionsSinceLaunch;
- (BOOL)crashedLastLaunch;
- (int)reportCount;
- (void)sendReports:(id)arg1 onCompletion:(id /* block */)arg2;
- (id)loadCrashReportJSONWithID:(long long)arg1;
- (void)doctorReport:(id)arg1;
- (id)reportWithID:(long long)arg1;
- (id)allReports;
- (id)crashReportFileNameWithID:(id)arg1;
- (id)coreDumpFileNameWithID:(id)arg1;
- (id)pathToCrashReportWithID:(id)arg1;
- (id)pathToCrashReportWithID:(id)arg1 withStorePath:(id)arg2;
- (id)pathToCoreDumpWithID:(id)arg1 withStorePath:(id)arg2;
- (id)allReportID;
- (id)allCoreDumpID;
- (id)allReportIDWithPath:(id)arg1;
- (id)allReportIDWithPath:(id)arg1 extension:(id)arg2;
- (id)reportIDFromFilename:(id)arg1 extension:(id)arg2;
- (id)loadCrashReportJSONWithStringID:(id)arg1 error:(id *)arg2;
- (id)reportWithStringID:(id)arg1 error:(id *)arg2;
- (void)deleteReportWithID:(id)arg1;
- (void)deleteReportWithID:(id)arg1 withStorePath:(id)arg2;
- (void)setAddConsoleLogToReport:(BOOL)arg1;
- (void)setPrintPreviousLog:(BOOL)arg1;
- (id)nullTerminated:(id)arg1;
- (id)sink;
- (void)setSink:(id)arg1;
- (int)deleteBehaviorAfterSendAll;
- (void)setDeleteBehaviorAfterSendAll:(int)arg1;
- (int)monitoring;
- (double)deadlockWatchdogInterval;
- (BOOL)searchQueueNames;
- (void * *)onCrash;
- (void * *)onHandleSignalCallBack;
- (void * *)onWritePointThread;
- (void * *)onWritePointThreadRepeatNumber;
- (void * *)onWriteProfileCallBack;
- (void * *)onWritePointCpuHighThread;
- (void * *)onWritePointCpuHighThreadCount;
- (void * *)onWritePointCpuHighThreadValue;
- (id)bundleName;
- (void)setBundleName:(id)arg1;
- (id)basePath;
- (void)setBasePath:(id)arg1;
- (BOOL)introspectMemory;
- (id)doNotIntrospectClasses;
- (int)demangleLanguages;
- (void)setDemangleLanguages:(int)arg1;
- (BOOL)addConsoleLogToReport;
- (BOOL)printPreviousLog;
- (int)maxReportCount;
- (void * *)uncaughtExceptionHandler;
- (void)setUncaughtExceptionHandler:(void * *)arg1;
- (BOOL)shouldPrintVMSummary;
- (BOOL)shouldPrintJSCType;
- (BOOL)ksLoggerEnabled;
- (BOOL)matrixKSLoggerEnabled;
- (BOOL)coreDumpEnabledAtCrash;
- (BOOL)coreDumpEnabledAtNonCrash;
- (unsigned long long)userID;
- (void * *)onInnerHandleSignalCallBack;
- (void * *)onWriteLockTraceCallBack;
- (void).cxx_destruct;
@end
