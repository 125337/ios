@interface ChatbotAudioUnit : NSObject <AUAudioDataSource>
{
    BOOL _enableInterphoneMode; // +0x8
    BOOL _isRecording; // +0x9
    BOOL _isAudioSucc; // +0xa
    MMConfSDKAudioMgr * _audioMgr; // +0x10
    NSRecursiveLock * _audioEncLock; // +0x18
    AVAudioPlayer * _player; // +0x20
    CHHapticEngine * _hapticsEngine; // +0x28
}
- (id)init;
- (BOOL)getIfEnableInterphoneMode;
- (BOOL)getIfLagPlayMode;
- (void)changeIntoFullDuplexMode;
- (void)changeInfoHalfDuplexMode;
- (void)startChatbotAudio:(id /* block */)arg1;
- (void)setSpeakerMode;
- (void)releaseAll;
- (void)StartRecord;
- (void)StopRecord;
- (void)StartPlay;
- (BOOL)getIsRecordMode;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)setMute:(BOOL)arg1 needPlaySound:(BOOL)arg2;
- (void)audioDeviceStartedSuccess;
- (void)createHapticsEngine;
- (void)startHapticsEnginePlay;
- (void)stopHapticsEngine;
- (BOOL)isGetDataReady;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (id)audioMgr;
- (void)setAudioMgr:(id)arg1;
- (BOOL)enableInterphoneMode;
- (void)setEnableInterphoneMode:(BOOL)arg1;
- (id)audioEncLock;
- (void)setAudioEncLock:(id)arg1;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (BOOL)isAudioSucc;
- (void)setIsAudioSucc:(BOOL)arg1;
- (id)hapticsEngine;
- (void)setHapticsEngine:(id)arg1;
- (void).cxx_destruct;
@end
