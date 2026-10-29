@interface WcPayChatActionReportor : NSObject
+ (void)report:(unsigned long long)arg1 businessType:(unsigned long long)arg2 chatUsername:(id)arg3;
+ (BOOL)isWxPayPlugin:(id)arg1;
+ (void)reportMsgMenu:(id)arg1 chatUsername:(id)arg2;
+ (void)reportTextMenu:(id)arg1 chatUsername:(id)arg2;
+ (void)reportTextMenuClick:(unsigned long long)arg1 chatUsername:(id)arg2;
+ (void)reportInputTool:(unsigned long long)arg1 chatUsername:(id)arg2;
@end
