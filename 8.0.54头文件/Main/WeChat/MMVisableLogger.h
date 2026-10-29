@interface MMVisableLogger : NSObject
+ (void)__setupSwiftUIDSO;
+ (void)logWithLevel:(unsigned long long)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 printXLog:(BOOL)arg6 format:(id)arg7;
+ (void)__onLogWithType:(unsigned long long)arg1 module:(id)arg2 file:(id)arg3 line:(int)arg4 func:(id)arg5 message:(id)arg6;
+ (void)setupSwiftUISO;
+ (void *)getSwiftUIMachHeader;
@end

