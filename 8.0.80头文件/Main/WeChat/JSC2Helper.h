@interface JSC2Helper : NSObject
+ (BOOL)osVersionInWhiteList:(id)arg1;
+ (BOOL)osVersionInBlackList:(id)arg1;
+ (BOOL)systemCanHook;
+ (BOOL)abtestCanHook;
+ (BOOL)abtestCanEnableByteCode;
+ (BOOL)canGlobalHook;
+ (BOOL)enableFastGC;
+ (void)enableXPC;
+ (BOOL)shouldOSLogTrace;
+ (BOOL)shouldOSLogStore;
+ (void)enableOSLogTrace;
+ (BOOL)enableOSLogRedirect;
+ (BOOL)enableOSLogTraceHook;
+ (void)enableFPSAdjust;
+ (void)setupOptions;
+ (void)commonSetup;
+ (void)enableLogEvaluateDetail;
+ (BOOL)hasJSCRun;
+ (BOOL)isErrorOrRunning;
+ (int)errCode;
+ (void)startHook;
+ (void)startHook2;
+ (void)hook;
+ (void)hook2;
+ (void)checkClasses;
+ (void)enableCEvaluateJSScriptIfNeeded;
@end
