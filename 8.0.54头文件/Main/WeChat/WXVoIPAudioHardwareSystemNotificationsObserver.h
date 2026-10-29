@interface WXVoIPAudioHardwareSystemNotificationsObserver : NSObject
{
    BOOL _isOtherAPPPlaying; // +0x8
    BOOL _isInVOIPMode; // +0x9
    BOOL _isCaptureObservationStarted; // +0xa
    BOOL _isPlayObservationStarted; // +0xb
    int _playDeviceType; // +0xc
    int _playHardwareVolume; // +0x10
    AudioHardwareSystemNotificationsCallback * _callback; // +0x18
    NSObject<OS_dispatch_queue> * _delegateQueue; // +0x20
    NSObject<OS_dispatch_source> * _systemStatusObserver; // +0x28
}
+ (int)getPlayHardwareVolume;
- (id)init:(id)arg1;
- (void)startCaptureObservation:(const Hardware *)arg1;
- (void)restartCaptureObservation:(const Hardware *)arg1;
- (void)stopCaptureObservation;
- (void)startPlayObservation:(const Hardware *)arg1;
- (void)restartPlayObservation:(const Hardware *)arg1;
- (void)stopPlayObservation;
- (void)observeIfPlayOrCaptureFirstStarted;
- (void)stopObservingIfPlayAndeCaptureBothStopped;
- (void)observeSystemStatus;
- (void)stopObservingSystemStatus;
- (void)observeSystemNotifications;
- (void)stopObservingSystemNotifications;
- (void)handleIfOtherAPPPlayingStateChanged;
- (void)reportHardwareVolumeIfChanged;
- (void)handleRouteChange:(id)arg1;
- (RouteChangeDetails)getRouteChangeDetails:(id)arg1;
- (void)reportRouteChangeEvent:(id)arg1 result:(DeviceErrorApple)arg2;
- (AudioHardwareSystemNotificationsCallback *)callback;
- (void)setCallback:(AudioHardwareSystemNotificationsCallback *)arg1;
- (BOOL)isOtherAPPPlaying;
- (void)setIsOtherAPPPlaying:(BOOL)arg1;
- (BOOL)isInVOIPMode;
- (void)setIsInVOIPMode:(BOOL)arg1;
- (int)playDeviceType;
- (void)setPlayDeviceType:(int)arg1;
- (id)delegateQueue;
- (void)setDelegateQueue:(id)arg1;
- (id)systemStatusObserver;
- (void)setSystemStatusObserver:(id)arg1;
- (int)playHardwareVolume;
- (void)setPlayHardwareVolume:(int)arg1;
- (BOOL)isCaptureObservationStarted;
- (void)setIsCaptureObservationStarted:(BOOL)arg1;
- (BOOL)isPlayObservationStarted;
- (void)setIsPlayObservationStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end

