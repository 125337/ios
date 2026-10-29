@interface VoipCheckAudioDeviceObj : NSObject <WCAudioSessionExt>
{
    BOOL _isUsingEarDevice; // +0x8
    id /* block */ _audioDevicePluginCallback; // +0x10
}
- (id)initWithMainThreadCallback:(id /* block */)arg1;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionCategoryChange;
- (void)onWCAudioSessionOverride;
- (void)checkExternalAudioDeviceState;
- (BOOL)isUsingEarDevice;
- (void)setIsUsingEarDevice:(BOOL)arg1;
- (id /* block */)audioDevicePluginCallback;
- (void)setAudioDevicePluginCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

