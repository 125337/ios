@interface AMRAudioRecorder : BaseAudioRecorder
{
    NSRecursiveLock * mPrepareSentLock; // +0x20
    BOOL mIsPrepareSent; // +0x28
}
- (void)setDataFormat;
- (void)prepareBuffers;
- (id)init;
- (BOOL)prepareRecord;
- (void)createAMRFile:(id)arg1;
- (void)createFile:(id)arg1;
- (BOOL)prepareSend;
- (BOOL)prepareRecordButNotNotify;
- (BOOL)prepareQueue;
- (void)stopButNotNotify;
- (void)cleanResource;
- (void)stop;
- (long long)getVoiceFormat;
- (void).cxx_destruct;
@end
