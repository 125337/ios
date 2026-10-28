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
    BOOL _delayStartAudio; // +0x50
    BOOL _isInInterruption; // +0x51
    BOOL _isAppInInterruption; // +0x52
    BOOL _isClosed; // +0x53
    BOOL _isStarting; // +0x54
    BOOL _isInInterruptionByBeginning; // +0x55
    unsigned long long _recoverTotalCount; // +0x58
    unsigned long long _recoverCurrentCount; // +0x60
    id /* block */ _recoveringBlock; // +0x68
    unsigned long long _startedSuccessCount; // +0x70
    id /* block */ _startedVoIPCallback; // +0x78
}
+ (BOOL)isOtherAppUsingAudioUnit;
- (void)beginInterruption;
- (void)endInterruption;
- (BOOL)isRecovering;
- (void)cancelRecovering;
- (void)recoverWithCompletion:(id /* block */)arg1;
- (void)recoverIfNeed;
- (void)recoverIfNeedAfterInterruptionBeginning;
- (id)init;
- (void)releaseAll;
- (BOOL)resumeVoIP:(BOOL)arg1 callback:(id /* block */)arg2;
- (BOOL)getIsStarting;
- (void)startVoIP:(BOOL)arg1 bluetooth:(BOOL)arg2 callback:(id /* block */)arg3;
- (BOOL)setMutePlay:(BOOL)arg1;
- (BOOL)setSubAppId:(id)arg1;
- (BOOL)setMuteRecord:(BOOL)arg1;
- (BOOL)isRunning;
- (void)setHandsFree:(BOOL)arg1;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (void)callback:(int)arg1;
- (void)audioDeviceForceStop:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceDidReceiveCallbackFirstEachStartup;
- (void)audioDeviceDidReceivePlaybackCallbackFirstEachStartup:(id)arg1;
- (void)audioDeviceDidReceiveRecordingCallbackFirstEachStartup:(id)arg1;
- (void)restartDeviceForFail;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)audioDeviceNearEar:(id)arg1;
- (void)audioDeviceFarawayEar:(id)arg1;
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
- (BOOL)isDelayStart;
- (int)getAudioDeviceRestartStatus;
- (void)mmConfSDKAudioMgrOnEnterForeground;
- (void)mmConfSDKAudioMgrDidBecomeActive;
- (BOOL)isInInterruption;
- (void)setIsInInterruption:(BOOL)arg1;
- (BOOL)isAppInInterruption;
- (void)setIsAppInInterruption:(BOOL)arg1;
- (unsigned long long)recoverTotalCount;
- (void)setRecoverTotalCount:(unsigned long long)arg1;
- (unsigned long long)recoverCurrentCount;
- (void)setRecoverCurrentCount:(unsigned long long)arg1;
- (BOOL)isClosed;
- (void)setIsClosed:(BOOL)arg1;
- (id /* block */)recoveringBlock;
- (void)setRecoveringBlock:(id /* block */)arg1;
- (unsigned long long)startedSuccessCount;
- (void)setStartedSuccessCount:(unsigned long long)arg1;
- (BOOL)isStarting;
- (void)setIsStarting:(BOOL)arg1;
- (BOOL)isInInterruptionByBeginning;
- (void)setIsInInterruptionByBeginning:(BOOL)arg1;
- (id /* block */)startedVoIPCallback;
- (void)setStartedVoIPCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
