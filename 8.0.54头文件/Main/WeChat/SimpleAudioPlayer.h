@interface SimpleAudioPlayer : NSObject
{
    BOOL _m_hasPrepare; // +0x8
    float _m_volume; // +0xc
    SimpleAudioState * m_bufferState; // +0x10
}
+ (void)sprintRetCode:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)getState;
- (BOOL)updateDataFormat;
- (void)clearQueue;
- (BOOL)updateQueue;
- (void)clearBuffer;
- (BOOL)updateBuffer;
- (BOOL)audioQueueStart;
- (BOOL)audioQueueStop;
- (BOOL)preparePlay;
- (BOOL)play;
- (void)stop;
- (void)printRetCode:(int)arg1;
- (id)m_bufferState;
- (void)setM_bufferState:(id)arg1;
- (BOOL)m_hasPrepare;
- (void)setM_hasPrepare:(BOOL)arg1;
- (float)m_volume;
- (void)setM_volume:(float)arg1;
- (void).cxx_destruct;
@end

