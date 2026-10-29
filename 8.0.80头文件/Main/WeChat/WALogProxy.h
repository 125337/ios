@interface WALogProxy : NSObject <IWALogService>
+ (BOOL)shouldLog:(int)arg1;
+ (BOOL)shouldEnableDebugLog;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 message:(id)arg7;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 format:(id)arg7;
+ (void)silentCrash:(id)arg1;
+ (void)customDump:(id)arg1;
+ (void)asyncCustomDump:(id)arg1;
@end
