@interface TXCAudioSessionManager : NSObject
{
    BOOL _isAppActive; // +0x8
    BOOL _isStereoCaptureInFront; // +0x9
    BOOL _isOtherAppPlaying; // +0xa
    int _outputVolume; // +0xc
    id <TXCAudioSessionManagerDelegate> _delegate; // +0x10
    NSObject<OS_dispatch_source> * _timer; // +0x18
    NSObject<OS_dispatch_queue> * _timerQueue; // +0x20
    long long _currentStereoOrientation; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)updateAppActiveState;
- (void)startStatusTimer;
- (void)stopStatusTimer;
- (void)onTimer;
- (void)handleInterruptionNotification:(id)arg1;
- (void)handleRouteChangeNotification:(id)arg1;
- (void)handleMediaServicesWereLost:(id)arg1;
- (void)handleMediaServicesWereReset:(id)arg1;
- (void)handleSilenceSecondaryAudioHintNotification:(id)arg1;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)handleApplicationWillResignActive:(id)arg1;
- (void)notifyDidBeginInterruption;
- (void)notifyDidEndInterruptionWithShouldResumeSession:(BOOL)arg1;
- (void)notifyDidChangeRouteWithReason:(unsigned long long)arg1 previousRoute:(id)arg2;
- (void)notifyMediaServicesWereLost;
- (void)notifyMediaServicesWereReset;
- (void)notifyDidChangeOutputVolume:(int)arg1;
- (void)notifyDidChangeOtherAppPlayoutState:(BOOL)arg1;
- (void)notifyDeviceOrientationDidChange:(id)arg1;
- (BOOL)updateStereoOrientation;
- (BOOL)setStereoCaptureWithDatasrouce:(id)arg1;
- (id)findSuitableDatasource;
- (void)enableBuiltInStereoCaptureIfNeeded;
- (BOOL)updateStereoCaptureDirectrion:(BOOL)arg1;
- (SystemError)beginConfigration:(id)arg1;
- (SystemError)endConfigration;
- (SystemError)updateCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3;
- (SystemError)updateCategory:(id)arg1 mode:(id)arg2;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)categoryToString:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAppActive;
- (void)setIsAppActive:(BOOL)arg1;
- (BOOL)isStereoCaptureInFront;
- (void)setIsStereoCaptureInFront:(BOOL)arg1;
- (BOOL)isOtherAppPlaying;
- (void)setIsOtherAppPlaying:(BOOL)arg1;
- (int)outputVolume;
- (void)setOutputVolume:(int)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)timerQueue;
- (void)setTimerQueue:(id)arg1;
- (long long)currentStereoOrientation;
- (void)setCurrentStereoOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

