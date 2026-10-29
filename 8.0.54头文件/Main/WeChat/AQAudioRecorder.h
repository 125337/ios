@interface AQAudioRecorder : BaseAudioRecorder
{
    BOOL mIsNeedRestartMusic; // +0x20
    BOOL mIsNeedRestartAudioTalk; // +0x21
    BOOL mDisableWritingToFile; // +0x22
    BOOL _enableMultiChannel; // +0x23
    float _pcmSampleRate; // +0x24
    unsigned int _maxAudioChannels; // +0x28
    unsigned long long _firstTimeStamp; // +0x30
}
- (void)createAudioFile_WAVE:(id)arg1 Fd:(OpaqueAudioFileID * *)arg2;
- (void)setDataFormat_PCM;
- (void)prepareBuffers;
- (void)setMagicCookieToAudioFile:(OpaqueAudioFileID *)arg1;
- (id)init;
- (BOOL)shouldAutoRestartWith:(int)arg1;
- (BOOL)canAutoRestart;
- (BOOL)prepareRecordWithPCMFile:(id)arg1;
- (void)record;
- (void)cleanResource;
- (void)autostop;
- (BOOL)needRestartMusic;
- (void)setNeedRestartMusic:(BOOL)arg1;
- (BOOL)needRestartAudioTalk;
- (void)setNeedRestartAudioTalk:(BOOL)arg1;
- (BOOL)disableWritingToFile;
- (void)setDisableWritingToFile:(BOOL)arg1;
- (unsigned long long)firstTimeStamp;
- (void)setFirstTimeStamp:(unsigned long long)arg1;
- (float)pcmSampleRate;
- (void)setPcmSampleRate:(float)arg1;
- (BOOL)enableMultiChannel;
- (void)setEnableMultiChannel:(BOOL)arg1;
- (unsigned int)maxAudioChannels;
- (void)setMaxAudioChannels:(unsigned int)arg1;
@end

