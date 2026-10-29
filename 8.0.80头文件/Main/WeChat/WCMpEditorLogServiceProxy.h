@interface WCMpEditorLogServiceProxy : NSObject <IMpLogService>
+ (BOOL)shouldLog:(unsigned long long)arg1;
+ (void)logWithLevel:(unsigned long long)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 message:(id)arg7;
@end
