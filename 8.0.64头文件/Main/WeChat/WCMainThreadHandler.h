@interface WCMainThreadHandler : NSObject
{
    _opaque_pthread_mutex_t m_threadLock; // +0x8
    int m_cycleArrayCount; // +0x48
    int m_tailPoint; // +0x4c
    MatrixStackInfo * * m_mainThreadStackCycleArray; // +0x50
    void * * m_lockTraceArray; // +0x58
    int * m_topStackAddressRepeatArray; // +0x60
    int * m_mainThreadStackRepeatCountArray; // +0x68
    KSStackCursor m_pointStackCursor; // +0x70
}
- (id)initWithCycleArrayCount:(int)arg1;
- (id)init;
- (void)dealloc;
- (void)freeLockTrace:(void *)arg1;
- (void)addThreadStack:(MatrixStackInfo *)arg1 andLockTrace:(void *)arg2;
- (MatrixStackInfo *)getLastMainThreadStack;
- (id)makeThreadProfileJson;
- (KSStackCursor *)getPointStackCursor;
- (int *)getPointStackRepeatCount;
- (id)makeLockTraceJson;
@end
