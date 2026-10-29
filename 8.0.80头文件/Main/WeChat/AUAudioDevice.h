@interface AUAudioDevice : MMUserService <WCAudioSessionExt, WCProximityStateRecognizerDelegate, MMServiceProtocol>
{
    struct mAUState; // +0x8
    int mWillWorkMode; // +0x78
    int mWorkMode; // +0x7c
    int mBizMode; // +0x80
    int mAudioUnitSubType; // +0x84
    int mInSamplerate; // +0x88
    int mInChannels; // +0x8c
    int mInFrameSize; // +0x90
    int mOutChannels; // +0x94
    int mOutSamplerate; // +0x98
    int mOutFrameSize; // +0x9c
    char * pRecBuff; // +0xa0
    int mRBLeft; // +0xa8
    char * pPlayBuff; // +0xb0
    int mPBLeft; // +0xb8
    BOOL bMicrophoneMute; // +0xbc
    BOOL bSpeakerphone; // +0xbd
    BOOL bEnableProximity; // +0xbe
    BOOL bSoundCardFlag; // +0xbf
    NSString * mOutFromName; // +0xc0
    PCMAudioFile * mOutPCMFile; // +0xc8
    PCMAudioFile * mRecordPCMFile; // +0xd0
    BOOL mIsNeedRestartAudioTalk; // +0xd8
    BOOL mHasiOS7UsedVoip; // +0xd9
    BOOL bFirstEnterRecord; // +0xda
    BOOL bFirstEnterPlay; // +0xdb
    BOOL bEnableEnterEachStartup; // +0xdc
    BOOL bFirstEnterRecordEachStartup; // +0xdd
    BOOL bFirstEnterPlayEachStartup; // +0xde
    BOOL bEnableReceiveCallbackSteadyTimestamp; // +0xdf
    unsigned long long uLastReceivePlayCallbackSteadyTimestamp; // +0xe0
    unsigned long long uLastReceiveRecordCallbackSteadyTimestamp; // +0xe8
    unsigned long long llLastReocrdTime; // +0xf0
    unsigned long long llLastPlayTime; // +0xf8
    NSRecursiveLock * m_audioSessionLock; // +0x100
    NSRecursiveLock * m_audioPlayLock; // +0x108
    NSObject<OS_dispatch_queue> * m_audioSessionQueue; // +0x110
    int mSetBottomMic; // +0x118
    char * pRMSRecBuff; // +0x120
    BOOL m_isForPstn; // +0x128
    shared_ptr<HumanVoiceDetection> m_humanVoiceDetector; // +0x130
    BOOL bEnableRmIO; // +0x140
    BOOL bFirstMediaServiceReset; // +0x141
    BOOL _isFirst1sCheckRMS; // +0x142
    BOOL _isUsingExternalAudioDevice; // +0x143
    BOOL _canRestartAudioPlaying; // +0x144
    BOOL _minimumOtherAudioDuckingRequested; // +0x145
    int audioDevErrCode; // +0x148
    int audioRecordingCallbackNum; // +0x14c
    int audioPlayingCallbackNum; // +0x150
    int iMediaServiceResetCnt; // +0x154
    int audioEncPlayingCallbackNum; // +0x158
    int audioEncPlayingCallbackNum_r; // +0x15c
    int _audioRecordStateErrorCnt; // +0x160
    int _longSilentCount; // +0x164
    int _rmsCheckLen; // +0x168
    int _curRMSBufferLen; // +0x16c
    int _voipModeSessionCount; // +0x170
    int _mFramelenMs; // +0x174
    MMTimer * mMeterTimer; // +0x178
    id <AUAudioDataSource> dataSource; // +0x180
    unsigned long long mLastMediaSrvResetTime; // +0x188
    unsigned long long mStartRecordTime; // +0x190
    unsigned long long mBefRecordTime; // +0x198
    unsigned long long mSuccRecordTime; // +0x1a0
    unsigned long long mStartPlayTime; // +0x1a8
    unsigned long long audioPlayCallbackSampleCnt; // +0x1b0
    unsigned long long _recordCallbackLastTime; // +0x1b8
    unsigned long long _playCallbackLastTime; // +0x1c0
    unsigned long long _recordCallbackTimeoutCount; // +0x1c8
    unsigned long long _playCallbackTimeoutCount; // +0x1d0
    long long _recordCallbackTimeoutMaxDeltaTime; // +0x1d8
    long long _playCallbackTimeoutMaxDeltaTime; // +0x1e0
    double _startTimeStamp; // +0x1e8
    unsigned long long _startDeviceMode; // +0x1f0
    NSString * _startPortName; // +0x1f8
    unsigned long long _roomID; // +0x200
    long long _roomKey; // +0x208
    id <AUAudioPlaybackInterceptor> _playbackInterceptor; // +0x210
}
+ (BOOL)isStartTimeStatEnable;
+ (BOOL)isUsingEarDeviceWithRoute:(id)arg1;
+ (BOOL)isUsingBuiltInReceiver:(unsigned long long)arg1;
+ (BOOL)isUsingEarDevice:(unsigned long long)arg1;
+ (BOOL)isUsingLineDevice:(unsigned long long)arg1;
+ (BOOL)isUsingWirelessDevice:(unsigned long long)arg1;
- (void)OpenVoiceProcess:(OpaqueAudioComponentInstance *)arg1;
- (void)CloseVoiceProcess:(OpaqueAudioComponentInstance *)arg1;
- (void)OpenVoiceAGC:(OpaqueAudioComponentInstance *)arg1;
- (void)CloseVoiceAGC:(OpaqueAudioComponentInstance *)arg1;
- (void)ApplyOtherAudioDuckingConfiguration:(BOOL)arg1;
- (void)SetInputIOEnable:(OpaqueAudioComponentInstance *)arg1 enabled:(BOOL)arg2;
- (void)SetOutputIOEnable:(OpaqueAudioComponentInstance *)arg1 enabled:(BOOL)arg2;
- (void)SetDataFormat:(AudioStreamBasicDescription *)arg1 SampleRate:(int)arg2 ChannelPerFrame:(int)arg3;
- (void)SetInputDataFormat:(OpaqueAudioComponentInstance *)arg1;
- (void)SetOutputDataFormat:(OpaqueAudioComponentInstance *)arg1;
- (void)SetInputCallback:(OpaqueAudioComponentInstance *)arg1;
- (void)SetOutputCallback:(OpaqueAudioComponentInstance *)arg1;
- (void)TimerCheckMeter;
- (void)VoipCheckRecordStateWithSessionCount:(int)arg1;
- (BOOL)setPlayAndRecordCategoryWithMode:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 withBlockType:(unsigned long long)arg4;
- (void)setupCategory;
- (void)setupCategoryIfIsAfterInterruption:(BOOL)arg1;
- (BOOL)StartSessionWithWorkMode:(int)arg1;
- (BOOL)StartSessionWithWorkMode1:(int)arg1 isAfterInterruption:(BOOL)arg2;
- (BOOL)StartSessionWithWorkMode1:(int)arg1;
- (BOOL)StartSessionWithWorkMode2:(int)arg1;
- (void)StopSession;
- (void)StopSessionWithCompletion:(id /* block */)arg1;
- (void)InputMicphoneSelection:(BOOL)arg1;
- (unsigned long long)lastReceivePlayCallbackSteadyTimestamp;
- (unsigned long long)lastReceiveRecordCallbackSteadyTimestamp;
- (void)dispatchToAudioSessionQueue:(id /* block */)arg1;
- (void)loadAudioUnitStatus:(id /* block */)arg1;
- (void)didReceiveRecordingCallbackFirstEachStartup;
- (void)didReceivePlaybackCallbackFirstEachStartup;
- (void)didReceivePlaybackCallbackFirst;
- (void)didReceiveRecordingCallbackFirst;
- (void)pauseTalk;
- (void)restartTalk;
- (void)delayRestartTalk;
- (double)getVolumnMeter;
- (id)init;
- (void)dealloc;
- (void)mediaServiceFail:(id)arg1;
- (void)mediaServiceReset:(id)arg1;
- (int)setRecDataFormat:(int)arg1 Channels:(int)arg2 Duration:(int)arg3;
- (int)setPlayDataFormat:(int)arg1 Channels:(int)arg2 Duration:(int)arg3;
- (int)getPlayChannels;
- (void)setMicrophoneMute:(BOOL)arg1;
- (void)setEableRmIOFlag:(int)arg1;
- (void)ResetMediaServiceCnt;
- (void)setSpeakerphone:(BOOL)arg1;
- (void)setMinimumOtherAudioDuckingEnabled:(BOOL)arg1;
- (void)setSoundCardFlag:(BOOL)arg1;
- (BOOL)getSoundCardFlag;
- (BOOL)getSpeakerphone;
- (unsigned long long)getCurrentDeviceMode;
- (BOOL)isUsingBuiltInReceiver;
- (BOOL)isUsingEarDevice;
- (BOOL)isUsingLineDevice;
- (BOOL)isUsingWirelessDevice;
- (void)setVolumeFactor:(unsigned int)arg1;
- (void)onProximityStateChangeToCloseEar;
- (void)onProximityStateChangeToAwayFromEar;
- (void)enableProximity;
- (void)disableProximity;
- (void)PluginHeadset;
- (void)UnPluginHeadset;
- (void)setCaptureToFileFrom:(id)arg1;
- (void)StartRecord;
- (void)StartPlay;
- (void)StartRecordAndPlayWithPrewarmOnly:(BOOL)arg1;
- (void)StartRecordForChatbot;
- (void)StartPlayForChatbot;
- (void)StartRecordAndPlayForChatbot;
- (void)StartRecordAndPlayForVoIP;
- (void)StartRecordAndPlayForVoIPWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2;
- (void)StartRecordAndPlayForPSTN;
- (void)StartRecordAndPlayForMuTalk;
- (void)StartRecordAndPlayForIlink:(BOOL)arg1;
- (void)StartRecordAndPlayForVoIPInterruptionRecovery;
- (void)StartRecordAndPlayForOpenVoice;
- (void)StartPlayForOpenVoice;
- (void)StartRecordAndPlayForCheckVoipMic;
- (void)activeMixWithOtherAudio;
- (void)Restart;
- (BOOL)RestartAudioPlayingAndNotifyUIRestart;
- (void)Stop;
- (void)StopWithCompletion:(id /* block */)arg1;
- (BOOL)PauseAudioPlayingAndNotifyUIPause;
- (void)StopForVoIP;
- (void)ChangeToCategory:(int)arg1;
- (BOOL)isRunning;
- (BOOL)isTrueRunning;
- (BOOL)isAudioPlaying;
- (BOOL)isAudioRecording;
- (BOOL)isVoIPPlaying;
- (BOOL)isBeingVoiceProcessingIO;
- (int)getWorkMode;
- (void)ResetAudioRecordStateErrorCnt;
- (BOOL)getIfUsingExternalAudioDevice;
- (void)setBottomMic:(BOOL)arg1;
- (void)setPlaybackInterceptor:(id)arg1;
- (id)currentPlaybackInterceptor;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionCategoryChange;
- (void)onWCAudioSessionOverride;
- (void)checkExternalAudioDeviceState;
- (void)calRmsAndNotifyWithBuff:(char *)arg1 andSampleNum:(int)arg2;
- (BOOL)StartSessionWithWorkModeSecondPart:(int)arg1;
- (void)setupCategoryAfterVoIPReceivingCallbackFirstEachStartup;
- (void)setupHumanVoiceDector;
- (void)releaseHumanVoiceDector;
- (id)mMeterTimer;
- (void)setMMeterTimer:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (int)workMode;
- (void)setWorkMode:(int)arg1;
- (BOOL)needRestartAudioTalk;
- (void)setNeedRestartAudioTalk:(BOOL)arg1;
- (id)m_audioPlayLock;
- (void)setM_audioPlayLock:(id)arg1;
- (id)m_audioSessionLock;
- (void)setM_audioSessionLock:(id)arg1;
- (int)audioDevErrCode;
- (void)setAudioDevErrCode:(int)arg1;
- (int)audioRecordingCallbackNum;
- (void)setAudioRecordingCallbackNum:(int)arg1;
- (int)audioPlayingCallbackNum;
- (void)setAudioPlayingCallbackNum:(int)arg1;
- (BOOL)bEnableRmIO;
- (void)setBEnableRmIO:(BOOL)arg1;
- (int)iMediaServiceResetCnt;
- (void)setIMediaServiceResetCnt:(int)arg1;
- (BOOL)bFirstMediaServiceReset;
- (void)setBFirstMediaServiceReset:(BOOL)arg1;
- (unsigned long long)mLastMediaSrvResetTime;
- (void)setMLastMediaSrvResetTime:(unsigned long long)arg1;
- (unsigned long long)mStartRecordTime;
- (void)setMStartRecordTime:(unsigned long long)arg1;
- (unsigned long long)mBefRecordTime;
- (void)setMBefRecordTime:(unsigned long long)arg1;
- (unsigned long long)mSuccRecordTime;
- (void)setMSuccRecordTime:(unsigned long long)arg1;
- (unsigned long long)mStartPlayTime;
- (void)setMStartPlayTime:(unsigned long long)arg1;
- (int)audioEncPlayingCallbackNum;
- (void)setAudioEncPlayingCallbackNum:(int)arg1;
- (int)audioEncPlayingCallbackNum_r;
- (void)setAudioEncPlayingCallbackNum_r:(int)arg1;
- (unsigned long long)audioPlayCallbackSampleCnt;
- (void)setAudioPlayCallbackSampleCnt:(unsigned long long)arg1;
- (int)audioRecordStateErrorCnt;
- (void)setAudioRecordStateErrorCnt:(int)arg1;
- (int)longSilentCount;
- (void)setLongSilentCount:(int)arg1;
- (BOOL)isFirst1sCheckRMS;
- (void)setIsFirst1sCheckRMS:(BOOL)arg1;
- (int)rmsCheckLen;
- (void)setRmsCheckLen:(int)arg1;
- (int)curRMSBufferLen;
- (void)setCurRMSBufferLen:(int)arg1;
- (unsigned long long)recordCallbackLastTime;
- (void)setRecordCallbackLastTime:(unsigned long long)arg1;
- (unsigned long long)playCallbackLastTime;
- (void)setPlayCallbackLastTime:(unsigned long long)arg1;
- (unsigned long long)recordCallbackTimeoutCount;
- (void)setRecordCallbackTimeoutCount:(unsigned long long)arg1;
- (unsigned long long)playCallbackTimeoutCount;
- (void)setPlayCallbackTimeoutCount:(unsigned long long)arg1;
- (long long)recordCallbackTimeoutMaxDeltaTime;
- (void)setRecordCallbackTimeoutMaxDeltaTime:(long long)arg1;
- (long long)playCallbackTimeoutMaxDeltaTime;
- (void)setPlayCallbackTimeoutMaxDeltaTime:(long long)arg1;
- (double)startTimeStamp;
- (void)setStartTimeStamp:(double)arg1;
- (unsigned long long)startDeviceMode;
- (void)setStartDeviceMode:(unsigned long long)arg1;
- (id)startPortName;
- (void)setStartPortName:(id)arg1;
- (unsigned long long)roomID;
- (void)setRoomID:(unsigned long long)arg1;
- (long long)roomKey;
- (void)setRoomKey:(long long)arg1;
- (BOOL)isUsingExternalAudioDevice;
- (void)setIsUsingExternalAudioDevice:(BOOL)arg1;
- (int)voipModeSessionCount;
- (void)setVoipModeSessionCount:(int)arg1;
- (BOOL)canRestartAudioPlaying;
- (void)setCanRestartAudioPlaying:(BOOL)arg1;
- (BOOL)minimumOtherAudioDuckingRequested;
- (void)setMinimumOtherAudioDuckingRequested:(BOOL)arg1;
- (id)playbackInterceptor;
- (int)mFramelenMs;
- (void)setMFramelenMs:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
