@interface YtSDKLogger : NSObject
+ (void)registerLoggerListener:(id /* block */)arg1 withNativeLog:(BOOL)arg2;
+ (BOOL)needNativeLog;
+ (void)logDebug:(id)arg1;
+ (void)logInfo:(id)arg1;
+ (void)logWarnning:(id)arg1;
+ (void)logError:(id)arg1;
+ (void)showLog:(long long)arg1 withMessage:(id)arg2;
@end
