@interface MsgAudioUnitPlayer : AudioUnitPlayer <WCAudioSessionExt, WCProximityStateRecognizerDelegate, MsgAudioPlayerProtocol>
{
    BOOL m_isForceStop; // +0xe
    NSMutableDictionary * m_settings; // +0x10
    BOOL _isNeedUnmuteLongVideoPlay; // +0x18
    int _soundControlMode; // +0x1c
}
- (id)init;
- (void)dealloc;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (void)onAppWillResignActive;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)openMonitorDetection;
- (void)closeMonitorDetection;
- (void)addProximityMonitorIfNeed;
- (void)doWorkBeforePlay;
- (void)doWorkAfterPlay;
- (void)doBusinessWorkBeforePlay;
- (void)doBusinessWorkAfterPlay;
- (void)updatePlayVoiceMode;
- (void)onProximityStateChangeToCloseEar;
- (void)onProximityStateChangeToAwayFromEar;
- (void)setEarpieceMode;
- (void)setAutoMode;
- (void)setUserData:(id)arg1;
- (id)getUserData;
- (void)stopAndNotifyUI;
- (void)EndNotifyOnMainThread;
- (int)soundControlMode;
- (void)setSoundControlMode:(int)arg1;
- (BOOL)isNeedUnmuteLongVideoPlay;
- (void)setIsNeedUnmuteLongVideoPlay:(BOOL)arg1;
- (void).cxx_destruct;
@end

