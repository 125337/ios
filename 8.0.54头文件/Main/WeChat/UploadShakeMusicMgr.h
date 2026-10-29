@interface UploadShakeMusicMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned int m_inputId; // +0x8
    NSMutableArray * m_uploadQueue; // +0x10
    NSMutableData * m_audioBuffer; // +0x18
    NSMutableArray * m_audioLengthQueue; // +0x20
    int m_seq; // +0x28
    int m_offsetTime; // +0x2c
    int m_offsetBytes; // +0x30
    int m_eventType; // +0x34
    double m_uploadInterval; // +0x38
    int m_maxUploadBytesSize; // +0x40
    unsigned long long m_lastSendTime; // +0x48
    BOOL m_bUploading; // +0x50
    id <UploadShakeMusicMgrDelegate> _delegate; // +0x58
    unsigned long long _totalBytes; // +0x60
    MMTimer * _checkUploadQueueTimer; // +0x68
    NSDate * _waitingRespTime; // +0x70
}
- (id)init;
- (void)dealloc;
- (void)start:(unsigned int)arg1;
- (void)stop;
- (void)addAudioBuffer:(id)arg1;
- (void)checkAudioBuffer;
- (int)getSendAudioSize;
- (void)checkUploadQueue;
- (BOOL)canSendData;
- (void)resetStauts;
- (void)doUpload:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)totalBytes;
- (void)setTotalBytes:(unsigned long long)arg1;
- (id)checkUploadQueueTimer;
- (void)setCheckUploadQueueTimer:(id)arg1;
- (id)waitingRespTime;
- (void)setWaitingRespTime:(id)arg1;
- (void).cxx_destruct;
@end

