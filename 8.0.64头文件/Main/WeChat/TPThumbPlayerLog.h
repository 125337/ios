@interface TPThumbPlayerLog : NSObject
+ (void)setLogDelegate:(id)arg1;
+ (void)setLogLevel:(long long)arg1;
+ (void)logWithLevel:(long long)arg1 tag:(id)arg2 content:(id)arg3;
+ (id)getLogLevelName:(long long)arg1;
@end
