@interface V2TXLivePremier : NSObject <V2TXLivePremier>
+ (id)getSDKVersionStr;
+ (void)setObserver:(id)arg1;
+ (long long)setLogConfig:(id)arg1;
+ (long long)setEnvironment:(const char *)arg1;
+ (void)setLicence:(id)arg1 key:(id)arg2;
+ (long long)setSocks5Proxy:(id)arg1 port:(long long)arg2 username:(id)arg3 password:(id)arg4 config:(id)arg5;
+ (long long)enableAudioCaptureObserver:(BOOL)arg1 format:(id)arg2;
+ (long long)enableAudioPlayoutObserver:(BOOL)arg1 format:(id)arg2;
+ (long long)enableVoiceEarMonitorObserver:(BOOL)arg1;
+ (void)setUserId:(id)arg1;
+ (long long)callExperimentalAPI:(id)arg1;
@end
