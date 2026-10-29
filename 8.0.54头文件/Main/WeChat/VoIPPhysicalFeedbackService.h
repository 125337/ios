@interface VoIPPhysicalFeedbackService : MMUserService <VoIPAudioServiceExtension, MMServiceProtocol>
{
    BOOL _isActived; // +0x8
    BOOL _isVideoMode; // +0x9
    BOOL _isReadyToLaunchTips; // +0xa
    BOOL _isLaunchTips; // +0xb
    NSObject<OS_dispatch_queue> * _queue; // +0x10
}
- (void)playSoundWithFileName:(id)arg1 fileType:(id)arg2 volume:(float)arg3 ambient:(BOOL)arg4;
- (void)playCloseSoundIfShouldBeLower:(BOOL)arg1;
- (void)launchTips;
- (void)launchEnding;
- (void)completeAudioUnitOutputInitialization;
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
- (BOOL)isReadyToLaunchTips;
- (void)setIsReadyToLaunchTips:(BOOL)arg1;
- (BOOL)isLaunchTips;
- (void)setIsLaunchTips:(BOOL)arg1;
- (void).cxx_destruct;
@end

