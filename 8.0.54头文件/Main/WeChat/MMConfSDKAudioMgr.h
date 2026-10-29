@interface MMConfSDKAudioMgr : NSObject <AUAudioDataSource, IAUAudioDeviceExt>
{
    id /* block */ currentCallback; // +0x8
    BOOL isMutePlay; // +0x10
    NSRecursiveLock * mAudioPlayLock; // +0x18
    int _voiceSampleRate; // +0x20
    int _voiceChannels; // +0x24
    int _voiceFrameDuation; // +0x28
    int recordCount; // +0x2c
    int _failCount; // +0x30
    BOOL _isCallbackedStartStatus; // +0x34
    int _voicePlaySampleRate; // +0x38
    int _voicePlayChannels; // +0x3c
    int _voicePlayFrameDuation; // +0x40
    BOOL _hasSetPlayAndRecord; // +0x44
    NSString * _subAppId; // +0x48
}
- (id)init;
- (void)releaseAll;
- (BOOL)resumeVoIP:(BOOL)arg1 callback:(id /* block */)arg2;
- (BOOL)startVoIP:(BOOL)arg1 bluetooth:(BOOL)arg2 callback:(id /* block */)arg3;
- (BOOL)setMutePlay:(BOOL)arg1;
- (BOOL)setSubAppId:(id)arg1;
- (BOOL)setMuteRecord:(BOOL)arg1;
- (BOOL)isRunning;
- (void)setHandsFree:(BOOL)arg1;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (void)callback:(int)arg1;
- (void)audioDeviceForceStop:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)restartDeviceForFail;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)setDefaultAudioParam;
- (void)startRecord:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (void)startPlay:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (void)setAudioParam:(id)arg1;
- (void)__setAudioParam;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (BOOL)isConfSDKModel;
- (int)getRecordCount;
- (int)getPlayCount;
- (int)getVoiceVolume;
- (void)audioDevicePluginHeadset:(id)arg1;
- (void)audioDeviceUnPluginHeadset:(id)arg1;
- (void)HeadSetPlugin:(BOOL)arg1;
- (void)notifyAudioDeviceChange:(BOOL)arg1 isWirelessDevice:(BOOL)arg2 isWiredDevice:(BOOL)arg3;
- (unsigned long long)getSuccRecordTime;
- (unsigned long long)getStartRecordTime;
- (unsigned long long)getStartPlayTime;
- (void).cxx_destruct;
@end

