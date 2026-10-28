@interface MMOpenVoiceAudioMgr : NSObject <AUAudioDataSource, IAUAudioDeviceExt>
{
    id /* block */ currentCallback; // +0x8
    BOOL isMutePlay; // +0x10
    BOOL isMuteRecord; // +0x11
    BOOL isHandsFree; // +0x12
    NSRecursiveLock * mAudioPlayLock; // +0x18
    int _voiceSampleRate; // +0x20
    int _voiceChannels; // +0x24
    int _voiceFrameDuation; // +0x28
    int _voicePlaySampleRate; // +0x2c
    int _voicePlayChannels; // +0x30
    int _voicePlayFrameDuation; // +0x34
    int recordCount; // +0x38
    int _failCount; // +0x3c
    BOOL _isCallbackedStartStatus; // +0x40
    char * pRecBuff; // +0x48
    unsigned int silentDataLen; // +0x50
    id <MMOpenVoiceAudioMgrDelegate> _delegate; // +0x58
}
- (id)init;
- (void)releaseAll;
- (BOOL)startVoIP:(BOOL)arg1 useRecorder:(BOOL)arg2 callback:(id /* block */)arg3;
- (void)startDeviceWithUseMicroPhone:(BOOL)arg1 permissionFailCallback:(id /* block */)arg2;
- (void)restartAudioWithIsHandsFree:(BOOL)arg1;
- (BOOL)setMutePlay:(BOOL)arg1;
- (BOOL)setMuteRecord:(BOOL)arg1;
- (BOOL)isRunning;
- (void)setHandsFree:(BOOL)arg1;
- (void)innerSetHandsFree:(BOOL)arg1;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (void)mockSilentAudioDataWhenMuteMicroPhone;
- (void)callback:(int)arg1;
- (void)audioDeviceForceStop:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)setAudioParam:(id)arg1;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (BOOL)isOpenVoiceModelRunning;
- (int)getRecordCount;
- (int)getPlayCount;
- (int)getVoiceVolume;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
