@interface WCMainThreadHandler : NSObject
{
    _opaque_pthread_mutex_t m_threadLock; // +0x8
    int m_cycleArrayCount; // +0x48
    unsigned long long * * m_mainThreadStackCycleArray; // +0x50
    unsigned long long * m_mainThreadStackCount; // +0x58
    unsigned long long m_tailPoint; // +0x60
    unsigned long long * m_topStackAddressRepeatArray; // +0x68
    int * m_mainThreadStackRepeatCountArray; // +0x70
}
+ (unsigned int)p_findRepeatCountInStack:(unsigned long long *)arg1 withAddr:(unsigned long long)arg2;
- (id)initWithCycleArrayCount:(int)arg1;
- (id)init;
- (void)dealloc;
- (void)addThreadStack:(unsigned long long *)arg1 andStackCount:(unsigned long long)arg2;
- (unsigned long long)getLastMainThreadStackCount;
- (unsigned long long *)getLastMainThreadStack;
- (id)makeStackProfile;
- (KSStackCursor *)getPointStackCursor;
- (int *)getPointStackRepeatCount;
- (KSStackCursor * *)getStackCursorWithLimit:(int)arg1 withReturnSize:(unsigned long long *)arg2;
- (KSStackCursor * *)getAllStackCursorWithReturnSize:(unsigned long long *)arg1;
- (unsigned int)p_findRepeatCountInArrayWithAddr:(unsigned long long)arg1;
- (unsigned long long)getStackMaxCount;
@end

