@interface MagicEcsNirvanaReportUtil : NSObject
+ (void)reportWithMBAppInfo:(int)arg1 value:(int)arg2 mbAppInfo:(id)arg3;
+ (void)reportWithMBAppInfo:(int)arg1 value:(int)arg2 mbAppInfo:(id)arg3 extraData:(id)arg4;
+ (void)report:(int)arg1 value:(int)arg2 extraData:(id)arg3;
+ (id)reportDataToString:(id)arg1;
@end
