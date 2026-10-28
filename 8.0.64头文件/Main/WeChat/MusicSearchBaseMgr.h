@interface MusicSearchBaseMgr : MMUserService <SimpleRecordBufferDelegate, UploadShakeMusicMgrDelegate, MMServiceProtocol>
{
    unsigned long long m_offsetBytes; // +0x8
    BOOL m_bStopRecord; // +0x10
    unsigned int m_curSessionId; // +0x14
    SimpleAudioRecorder * m_recorder; // +0x18
    UploadShakeMusicMgr * m_uploadMgr; // +0x20
}
- (id)init;
- (void)dealloc;
- (int)StartSearch;
- (void)StartSearchInternal;
- (void)StartUploadMgr;
- (BOOL)StopSearch:(unsigned int)arg1;
- (BOOL)checkSearchEnvironmentIsValid;
- (long long)recordTimeLimitInSecond;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (void)outputPeakPower:(float)arg1;
- (void)onAudioBufferRecordEnd;
- (void)OnGetMusicItem:(id)arg1 FPId:(unsigned int)arg2;
- (void)onGetMusicItemSuccess:(id)arg1 fpId:(unsigned int)arg2;
- (void)OnGetMusicFail:(int)arg1 SessionId:(unsigned int)arg2;
- (void)onGetMusicItemFail:(int)arg1 sessionId:(unsigned int)arg2;
- (void).cxx_destruct;
@end
