@interface QMCLogger : NSObject
+ (void)info:(id)arg1 message:(id)arg2;
+ (void)success:(id)arg1 message:(id)arg2;
+ (void)error:(id)arg1 message:(id)arg2;
+ (void)error:(id)arg1 message:(id)arg2 error:(id)arg3;
+ (void)warn:(id)arg1 message:(id)arg2;
+ (void)debug:(id)arg1 message:(id)arg2;
+ (BOOL)isConsoleLogEnabled;
@end
