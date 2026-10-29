@interface CompatReporter : NSObject
+ (id)getCurrentThreadStackTrace;
+ (long long)rollingForKey:(id)arg1;
+ (long long)rollingForKey:(id)arg1 withDefBase:(long long)arg2;
+ (long long)getRollingBaseForKey:(id)arg1;
+ (long long)getRollingBaseForKey:(id)arg1 withDefBase:(long long)arg2;
+ (BOOL)rollingForSamplingLess;
+ (BOOL)rolling:(long long)arg1;
+ (id)formatFrame:(void *)arg1 index:(int)arg2;
+ (id)getUUIDForImage:(const char *)arg1;
+ (id)getUUIDFromHeader:(const mach_header *)arg1;
+ (void)reportCommonWithStack:(int)arg1 bizName:(id)arg2 stack:(id)arg3 extra:(id)arg4 commKeys:(id)arg5;
+ (id)convertReport:(id)arg1;
+ (id)convertReportWithBlock:(id /* block */)arg1 extra:(id)arg2;
+ (id)formatStack:(id)arg1;
+ (void)realPostKvData:(int)arg1 bizType:(int)arg2 bizName:(id)arg3 proc:(id)arg4 stack:(id)arg5 extras:(id)arg6 key1:(id)arg7 key2:(id)arg8 key3:(id)arg9 key4:(id)arg10 key5:(id)arg11;
@end
