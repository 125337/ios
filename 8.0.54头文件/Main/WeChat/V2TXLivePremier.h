@interface V2TXLivePremier : NSObject <V2TXLivePremier>
+ (id)getSDKVersionStr;
+ (void)setObserver:(id)arg1;
+ (long long)setLogConfig:(id)arg1;
+ (long long)setEnvironment:(const char *)arg1;
+ (void)setLicence:(id)arg1 key:(id)arg2;
+ (long long)setSocks5Proxy:(id)arg1 port:(long long)arg2 username:(id)arg3 password:(id)arg4;
+ (long long)callExperimentalAPI:(id)arg1;
+ (long long)isSupportHDR:(id)arg1;
@end

