@interface VoIPPhysicalFeedbackService : MMUserService <VoIPAudioServiceExtension, WCAudioSessionExt, MMServiceProtocol>
{
    BOOL _isActived; // +0x8
    BOOL _isVideoMode; // +0x9
    BOOL _isCallConnected; // +0xa
    BOOL _hasCompletedAudioUnitOutputInitialization; // +0xb
    BOOL _hasReceivedAudioUnitPlaybackCallbackFirst; // +0xc
    BOOL _isLaunchTips; // +0xd
    NSObject<OS_dispatch_queue> * _queue; // +0x10
    VoIPPlaybackInjectionManager * _playbackInjector; // +0x18
}
- (void)playSoundWithParams:(id)arg1;
- (void)playConnectedSound;
- (void)playCloseSoundIfShouldBeLower:(BOOL)arg1;
- (void)playCloseSoundIfShouldBeLower:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)playPromptTone;
- (void)launchBeginInterruptTips;
- (void)launchTips;
- (void)tryLaunchTips;
- (void)launchEndingWithCompletion:(id /* block */)arg1;
- (void)completeAudioUnitOutputInitialization;
- (void)notifyCallConnected;
- (void)reset;
- (void)openIfIsVideoMode:(BOOL)arg1;
- (void)close;
- (id)init;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceQuitCompulsivelyFromInterruption;
- (void)voIPAudioServiceDidReceiveAudioUnitPlaybackCallbackFirst:(id)arg1;
- (BOOL)isActived;
- (void)setIsActived:(BOOL)arg1;
- (BOOL)isVideoMode;
- (void)setIsVideoMode:(BOOL)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (BOOL)isCallConnected;
- (void)setIsCallConnected:(BOOL)arg1;
- (BOOL)hasCompletedAudioUnitOutputInitialization;
- (void)setHasCompletedAudioUnitOutputInitialization:(BOOL)arg1;
- (BOOL)hasReceivedAudioUnitPlaybackCallbackFirst;
- (void)setHasReceivedAudioUnitPlaybackCallbackFirst:(BOOL)arg1;
- (BOOL)isLaunchTips;
- (void)setIsLaunchTips:(BOOL)arg1;
- (id)playbackInjector;
- (void)setPlaybackInjector:(id)arg1;
- (void).cxx_destruct;
@end
