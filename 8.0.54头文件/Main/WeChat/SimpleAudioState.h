@interface SimpleAudioState : NSObject
{
    BOOL _m_isPlaying; // +0x8
    BOOL _m_running; // +0x9
    unsigned int _m_bufferByteSize; // +0xc
    unsigned int _m_numPacketsToRead; // +0x10
    AudioQueueBuffer * * m_buffers; // +0x18
    AudioStreamBasicDescription * m_dataFormat; // +0x20
    OpaqueAudioQueue * _m_queue; // +0x28
    id <SimpleAudioBufferDelegate> _m_delegate; // +0x30
    NSRecursiveLock * _m_dataLock; // +0x38
    MMContext * _m_context; // +0x40
}
- (id)init;
- (void)dealloc;
- (AudioQueueBuffer * *)m_buffers;
- (void)setM_buffers:(AudioQueueBuffer * *)arg1;
- (AudioStreamBasicDescription *)m_dataFormat;
- (void)setM_dataFormat:(AudioStreamBasicDescription *)arg1;
- (BOOL)m_isPlaying;
- (void)setM_isPlaying:(BOOL)arg1;
- (BOOL)m_running;
- (void)setM_running:(BOOL)arg1;
- (unsigned int)m_bufferByteSize;
- (void)setM_bufferByteSize:(unsigned int)arg1;
- (unsigned int)m_numPacketsToRead;
- (void)setM_numPacketsToRead:(unsigned int)arg1;
- (OpaqueAudioQueue *)m_queue;
- (void)setM_queue:(OpaqueAudioQueue *)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_dataLock;
- (void)setM_dataLock:(id)arg1;
- (id)m_context;
- (void)setM_context:(id)arg1;
- (void).cxx_destruct;
@end

