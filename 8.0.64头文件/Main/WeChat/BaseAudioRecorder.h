@interface BaseAudioRecorder : NSObject <AudioRecorderDelegate>
{
    RecorderState * mAqData; // +0x8
    BOOL mIsNeedNotifyOtherAudio; // +0x10
    NSRecursiveLock * _dataLock; // +0x18
    BOOL needStopInBackground; // +0x20
    BOOL _receivedHandleInputBufferCallback; // +0x21
    BOOL _bHadTryFixRecord; // +0x22
    BOOL _isInputMuted; // +0x23
    BOOL _fixInputMutedFlag; // +0x24
    BOOL _fixInputMutedResult; // +0x25
    BOOL _shouldMixWithSpeaker; // +0x26
    unsigned int _receivedBufferCount; // +0x28
    int _tryFixRecordFlag; // +0x2c
    unsigned int _availableChannels; // +0x30
    AudioRecorderUserData * _mUserData; // +0x38
    MMTimer * _meterTimer; // +0x40
    NSRecursiveLock * _lock; // +0x48
    AudioChannelLayout _availableChannelLayout; // +0x50
}
- (void)registerInter;
- (void)unregisterInter;
- (id)init;
- (void)updateSession;
- (void)dealloc;
- (BOOL)initQueue;
- (void)updateStatus;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (void)notifyAudioStart;
- (void)reportAudioQueueStartError:(int)arg1;
- (void)reportAudioQueueRestartFailed;
- (void)reportAudioQueueRestartOk;
- (void)reportAudioQueueRestartError:(int)arg1;
- (BOOL)isArgumentError:(int)arg1;
- (BOOL)shouldAutoRestartWith:(int)arg1;
- (BOOL)canAutoRestart;
- (int)real_record;
- (void)record;
- (void)asyncRecord:(id /* block */)arg1;
- (void)EndNotifyOnMainThread;
- (void)createFile:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)prepareRecord;
- (void)ayncPrepareRecordWithBlock:(id /* block */)arg1;
- (BOOL)prepareRecordButNotNotify;
- (void)stopButNotNotify;
- (void)destoryQueue;
- (void)stop;
- (void)stopWithFail;
- (void)cleanResource;
- (void)stopInBackground;
- (void)autostop;
- (BOOL)isRecording;
- (unsigned int)RecordStatus;
- (void)setRecordStatus:(int)arg1;
- (long long)RecordingTime;
- (void)setUserData:(id)arg1;
- (long long)getVoiceFormat;
- (void)setForceDelete;
- (void)setForTranslate;
- (void)setBeginSendData;
- (void)TimerCheckMeter;
- (BOOL)needNotifyOtherAudio;
- (void)setNeedNotifyOtherAudio:(BOOL)arg1;
- (RecorderState *)pAqData;
- (void)setPAqData:(RecorderState *)arg1;
- (id)dataLock;
- (BOOL)needStopInBackground;
- (void)setNeedStopInBackground:(BOOL)arg1;
- (id)mUserData;
- (void)setMUserData:(id)arg1;
- (BOOL)receivedHandleInputBufferCallback;
- (void)setReceivedHandleInputBufferCallback:(BOOL)arg1;
- (unsigned int)receivedBufferCount;
- (void)setReceivedBufferCount:(unsigned int)arg1;
- (BOOL)bHadTryFixRecord;
- (void)setBHadTryFixRecord:(BOOL)arg1;
- (int)tryFixRecordFlag;
- (void)setTryFixRecordFlag:(int)arg1;
- (BOOL)isInputMuted;
- (void)setIsInputMuted:(BOOL)arg1;
- (BOOL)fixInputMutedFlag;
- (void)setFixInputMutedFlag:(BOOL)arg1;
- (BOOL)fixInputMutedResult;
- (void)setFixInputMutedResult:(BOOL)arg1;
- (BOOL)shouldMixWithSpeaker;
- (void)setShouldMixWithSpeaker:(BOOL)arg1;
- (unsigned int)availableChannels;
- (AudioChannelLayout)availableChannelLayout;
- (id)meterTimer;
- (void)setMeterTimer:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
