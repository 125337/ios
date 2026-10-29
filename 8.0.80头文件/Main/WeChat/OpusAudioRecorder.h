@interface OpusAudioRecorder : BaseAudioRecorder
{
    BOOL m_isNeedRestartAudioTalk; // +0x20
    NSRecursiveLock * m_prepareSentLock; // +0x28
    BOOL m_isPrepareSent; // +0x30
    double m_sampleRate; // +0x38
    double m_bitrate; // +0x40
}
+ (double)GetDynamicSampleRate;
+ (double)GetDynamicBitrate;
+ (void)outputPcmBuffer:(short *)arg1 withBufferSize:(unsigned int)arg2 WithRecorderState:(RecorderState *)arg3;
+ (void)encodePcmBuffer:(short *)arg1 withBufferSize:(unsigned int)arg2 WithRecorderState:(RecorderState *)arg3 WithNumberPackets:(unsigned int)arg4;
+ (id)encodePcmBuffer:(id)arg1 Encoder:(id)arg2 SampleRate:(double)arg3;
- (id)init;
- (void)ayncPrepareRecordWithBlock:(id /* block */)arg1;
- (BOOL)prepareRecord;
- (void)notify;
- (BOOL)prepareQueue;
- (void)initOpusEncoder;
- (BOOL)isNeedSwitchBuiltInMicDataSource;
- (void)selectInputDevice;
- (void)createFile:(id)arg1;
- (void)createOpusFile:(id)arg1;
- (BOOL)prepareSend;
- (BOOL)prepareRecordButNotNotify;
- (void)stopButNotNotify;
- (void)cleanResource;
- (void)stop;
- (long long)getVoiceFormat;
- (void)setDataFormat;
- (void)TimerCheckMeter;
- (void)setSampleRate:(double)arg1;
- (void)setBitrate:(double)arg1;
- (unsigned int)audioDuration;
- (void)prepareBuffers;
- (BOOL)m_isPrepareSent;
- (void)setM_isPrepareSent:(BOOL)arg1;
- (id)m_prepareSentLock;
- (void)setM_prepareSentLock:(id)arg1;
- (void).cxx_destruct;
@end
