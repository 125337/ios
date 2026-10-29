@interface SimpleRecordState : NSObject
{
    BOOL _m_running; // +0x8
    BOOL _m_hasStart; // +0x9
    BOOL _m_hasPrePared; // +0xa
    unsigned int _m_bufferByteSize; // +0xc
    AudioQueueBuffer * * m_buffers; // +0x10
    AudioStreamBasicDescription * m_dataFormat; // +0x18
    OpaqueAudioQueue * _m_queue; // +0x20
    id <SimpleRecordBufferDelegate> _m_delegate; // +0x28
    NSRecursiveLock * _m_dataLock; // +0x30
    MMContext * _m_context; // +0x38
    long long _m_startRecordTime; // +0x40
}
- (id)init;
- (void)dealloc;
- (AudioQueueBuffer * *)m_buffers;
- (void)setM_buffers:(AudioQueueBuffer * *)arg1;
- (AudioStreamBasicDescription *)m_dataFormat;
- (void)setM_dataFormat:(AudioStreamBasicDescription *)arg1;
- (BOOL)m_running;
- (void)setM_running:(BOOL)arg1;
- (unsigned int)m_bufferByteSize;
- (void)setM_bufferByteSize:(unsigned int)arg1;
- (OpaqueAudioQueue *)m_queue;
- (void)setM_queue:(OpaqueAudioQueue *)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_dataLock;
- (void)setM_dataLock:(id)arg1;
- (id)m_context;
- (void)setM_context:(id)arg1;
- (BOOL)m_hasStart;
- (void)setM_hasStart:(BOOL)arg1;
- (long long)m_startRecordTime;
- (void)setM_startRecordTime:(long long)arg1;
- (BOOL)m_hasPrePared;
- (void)setM_hasPrePared:(BOOL)arg1;
- (void).cxx_destruct;
@end
