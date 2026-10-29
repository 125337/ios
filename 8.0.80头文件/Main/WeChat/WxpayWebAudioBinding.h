@interface WxpayWebAudioBinding : NSObject <wxAudioFileLoaderDelegate, wxAudioStateDelegate>
{
    id <WxpayWxAudioInstance> _wxAudioNative; // +0x8
    NSMutableSet * _playingAudioEngineSet; // +0x10
    unsigned long long _pendingReleaseToken; // +0x18
    double _lastPlayRequestTime; // +0x20
    NSString * _activeFocusSessionId; // +0x28
    NSLock * _stateLock; // +0x30
    BOOL _isBound; // +0x38
    BOOL _isDestroyed; // +0x39
    BOOL _isFocusActive; // +0x3a
    BOOL _isInterrupted; // +0x3b
    unsigned int _appUuid; // +0x3c
    NSString * _appId; // +0x40
}
+ (void)setFactoryForTesting:(id /* block */)arg1;
+ (void)resetForTesting;
+ (id)onInitJsRuntimeWithAppId:(id)arg1 appUuid:(unsigned int)arg2 contextPtr:(unsigned long long)arg3;
+ (void)onPreReleaseLiteAppWithAppUuid:(unsigned int)arg1 inJSThread:(BOOL)arg2;
+ (void)onAppBackground;
+ (void)onAccountChanged;
+ (id)bindingForAppUuid:(unsigned int)arg1;
- (id)initWithAppId:(id)arg1 appUuid:(unsigned int)arg2 contextPtr:(unsigned long long)arg3;
- (void)dealloc;
- (void)bindJSContext:(unsigned long long)arg1;
- (id)getAudioFilePath:(id)arg1;
- (void)canPlayNowAndAutoActive:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)onWXAudioState:(int)arg1 audioId:(unsigned long long)arg2;
- (void)handleAudioState:(int)arg1 audioId:(unsigned long long)arg2;
- (void)acquireAudioFocusWithCompletion:(id /* block */)arg1;
- (void)handleFocusInterruption;
- (void)handleAppBackground;
- (void)releaseAudioFocusLease;
- (void)releaseAudioNative;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (BOOL)isBound;
- (void)setIsBound:(BOOL)arg1;
- (BOOL)isDestroyed;
- (void)setIsDestroyed:(BOOL)arg1;
- (BOOL)isFocusActive;
- (void)setIsFocusActive:(BOOL)arg1;
- (BOOL)isInterrupted;
- (void)setIsInterrupted:(BOOL)arg1;
- (void).cxx_destruct;
@end
