@interface TXYLog : NSObject
+ (void)updateLogSwitch;
+ (void)logWithLine:(unsigned long long)arg1 method:(id)arg2 type:(long long)arg3 format:(id)arg4;
+ (void)logWithLine:(unsigned long long)arg1 method:(id)arg2 time:(id)arg3 format:(id)arg4;
+ (id)timeFormat;
+ (void)printTimeWith:(id)arg1;
@end
