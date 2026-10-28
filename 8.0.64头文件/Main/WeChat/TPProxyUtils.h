@interface TPProxyUtils : NSObject
+ (id)convertProxyDownloadParamWithUrl:(id)arg1 defaultDownlType:(long long)arg2 paramData:(id)arg3 httpHeader:(id)arg4 proxyConfig:(id)arg5;
+ (void)setObjectToExtraInfo:(id)arg1 withParamData:(id)arg2;
+ (void)setNumberToExtraInfo:(id)arg1 withParamData:(id)arg2;
+ (unsigned long long)convertToProxyPlayCallBackMsg:(int)arg1;
+ (BOOL)isOnlineUrl:(id)arg1;
@end
