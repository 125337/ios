@interface JSC2Helper : NSObject
+ (void)hookJSValue:(Class)arg1;
+ (BOOL)osVersionInWhiteList:(id)arg1;
+ (BOOL)osVersionInBlackList:(id)arg1;
+ (BOOL)systemCanHook;
+ (BOOL)abtestCanHook;
+ (BOOL)abtestCanEnableByteCode;
+ (BOOL)jsc2Hooked;
+ (BOOL)isOSAvailable;
+ (BOOL)canGlobalHook;
+ (void)fixA15GCCrash;
+ (BOOL)enableFastGC;
+ (void)enableXPC;
+ (BOOL)shouldOSLogTrace;
+ (BOOL)shouldOSLogStore;
+ (void)enableOSLogTrace;
+ (BOOL)enableOSLogRedirect;
+ (BOOL)enableOSLogTraceHook;
+ (BOOL)enableWebKitLogStore;
+ (BOOL)fetchOSLogWithDate:(id)arg1 subsystem:(id)arg2 limit:(long long)arg3 includingXPC:(BOOL)arg4;
+ (BOOL)fetchOSLogWithDate:(id)arg1 subsystems:(id)arg2 limit:(long long)arg3 includingXPC:(BOOL)arg4;
+ (void)setupOptions;
+ (void)commonSetup;
+ (void)enableLogEvaluateDetail;
+ (void)startHook;
+ (void)hook;
+ (void)checkClasses;
+ (void)enableCEvaluateJSScriptIfNeeded;
@end

