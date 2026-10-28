@interface TXLiveBase : NSObject
{
    shared_ptr<liteav::live::TXLiveBaseObserverImpl> _client; // +0x8
    unique_ptr<liteav::live::TXNtpTimeManagerCallbackImpl, std::default_delete<liteav::live::TXNtpTimeManagerCallbackImpl>> _ntp_time_manager_callback; // +0x18
    NtpTimeManager * _ntp_time_manager; // +0x20
    TXCustomHttpDNSDelegateImpl * _custom_httpDNS_delegate_impl; // +0x28
    id <TXLiveBaseDelegate> _delegate; // +0x30
}
+ (id)sharedInstance;
+ (int)setGlobalEnv:(const char *)arg1;
+ (void)setLogLevel:(long long)arg1;
+ (void)setConsoleEnabled:(BOOL)arg1;
+ (void)setAppVersion:(id)arg1;
+ (void)setAudioSessionDelegate:(id)arg1;
+ (id)getSDKVersionStr;
+ (id)getPituSDKVersion;
+ (void)setAppID:(id)arg1;
+ (void)setLicenceURL:(id)arg1 key:(id)arg2;
+ (void)setUserId:(id)arg1;
+ (id)getLicenceInfo;
+ (long long)updateNetworkTime;
+ (long long)getNetworkTimestamp;
+ (void)enableCustomHttpDNS:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)onLicenceLoadNotification:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)onUpdateNetworkTime:(int)arg1 message:(id)arg2;
- (id)delegate;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
