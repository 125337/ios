@interface WXVoIPAudioHardwareCallbackAdapter : NSObject
{
    unique_ptr<wxvoipsdk::audio::HardwareCallbackImpl, std::default_delete<wxvoipsdk::audio::HardwareCallbackImpl>> _callbackImpl; // +0x8
    id <WXVoIPAudioHardwareDelegate> _delegate; // +0x10
}
- (id)init:(id)arg1;
- (AudioUnitCaptureDataCallback *)getCaptureDataCallback;
- (AudioUnitPlayDataCallback *)getPlayDataCallback;
- (HardwareManagerEventCallback *)getEventCallback;
- (void)capturePortprocess:(AudioFrame *)arg1;
- (void)getDataToPlay:(AudioFrame *)arg1;
- (void)notifyAudioUnitEvent:(const void *)arg1;
- (void)notifyAudioUnitError:(const void *)arg1;
- (void)notifyInUseCaptureHardwareChangedSuccessfully:(const Hardware *)arg1;
- (void)notifyInUsePlayHardwareChangedSuccessfully:(const Hardware *)arg1;
- (void)notifyHardwarePluggedIn:(const Hardware *)arg1;
- (void)notifyHardwarePluggedOut:(const Hardware *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

