@interface BaseAudioPlayer : NSObject <WCAudioSessionExt, WCProximityStateRecognizerDelegate, MsgAudioPlayerProtocol>
{
    PlayerState * mAqData; // +0x8
    int mLastNumber; // +0x10
    float lastMeterPeak; // +0x14
    BOOL mRouteChanging; // +0x18
    BOOL _isFixingEarVolume; // +0x19
    BOOL _stopInBackground; // +0x1a
    id <AudioPlayerDelegate> mNotifyListener; // +0x20
    AudioPlayerUserData * _mUserData; // +0x28
    MMTimer * _meterTimer; // +0x30
}
- (id)init;
- (void)observeOutputVolume;
- (void)dealloc;
- (void)initSession;
- (BOOL)initQueue;
- (void)updateSession;
- (void)asyncUpdateSession;
- (void)updateSetting;
- (void)updateStatus;
- (BOOL)preparePlayNotNotify;
- (BOOL)preparePlayWithFile:(id)arg1;
- (BOOL)preparePlayWithFile:(id)arg1 sync:(BOOL)arg2;
- (void)asyncPreparePlayWithFile:(id)arg1 finished:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setUserData:(id)arg1;
- (id)getUserData;
- (void)play;
- (void)setProgress:(unsigned int)arg1;
- (void)pause;
- (void)resume;
- (void)replay;
- (void)playAtTime:(unsigned int)arg1;
- (void)asyncPlayAtTime:(unsigned int)arg1;
- (void)stop;
- (void)autostop;
- (void)stopAndNotifyUI;
- (void)stopButNotNotify;
- (unsigned int)currentTime;
- (int)getCurrentTimeMs;
- (BOOL)isPlaying;
- (void)setSpeakerMode;
- (void)setEarpieceMode;
- (void)setAutoMode;
- (void)swithOutputToMicroPhone;
- (void)switchOutputToEarpieceMode;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (void)EndNotifyOnMainThread;
- (void)openActionRecognition;
- (void)onProximityStateChangeToCloseEar;
- (void)onProximityStateChangeToAwayFromEar;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionCategoryChange:(unsigned long long)arg1;
- (void)onWCAudioSessionOverride;
- (float)TimerCheckMeter;
- (void)handleInterruption;
- (void)registerNotification;
- (void)unregisterNotification;
- (id)delegate;
- (id)mUserData;
- (void)setMUserData:(id)arg1;
- (id)meterTimer;
- (void)setMeterTimer:(id)arg1;
- (BOOL)isFixingEarVolume;
- (void)setIsFixingEarVolume:(BOOL)arg1;
- (BOOL)stopInBackground;
- (void)setStopInBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end

