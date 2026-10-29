@interface TXLiveBase : NSObject
{
    unique_ptr<liteav::live::TXLogCallbackWrapper, std::default_delete<liteav::live::TXLogCallbackWrapper>> log_callback_wrapper_; // +0x8
    shared_ptr<liteav::live::TXLiveBaseObserverImpl> _client; // +0x10
    unique_ptr<liteav::live::TXNtpServiceCallbackImpl, std::default_delete<liteav::live::TXNtpServiceCallbackImpl>> _ntp_service_callback; // +0x20
    NtpService * _ntp_service; // +0x28
    TXLiveAudioSessionDelegateWrapper * _audio_session_delegate_wrapper; // +0x30
    id <TXLiveBaseDelegate> _delegate; // +0x38
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
+ (void)setExternalDecoderFactory:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)onLicenceLoadNotification:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)onUpdateNetworkTime:(int)arg1 message:(id)arg2;
- (id)delegate;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

