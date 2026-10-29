@interface WCStackTracePool : NSObject
{
    unsigned long long * * m_stackCyclePool; // +0x8
    unsigned long long * m_stackCount; // +0x10
    float * m_stackCPU; // +0x18
    BOOL * m_stackInBackground; // +0x20
    unsigned long long m_poolTailPoint; // +0x28
    unsigned long long m_maxStackCount; // +0x30
    NSMutableArray * _parentAddressFrame; // +0x38
}
- (id)init;
- (id)initWithMaxStackTraceCount:(unsigned long long)arg1;
- (void)dealloc;
- (void)addThreadStack:(unsigned long long *)arg1 andLength:(unsigned long long)arg2 andCPU:(float)arg3 isInBackground:(BOOL)arg4;
- (id)makeCallTree;
- (id)p_getInfoDictFromAddressFrame:(id)arg1;
- (id)p_getAddressFrameWithStackTraces:(unsigned long long *)arg1 length:(unsigned long long)arg2 cpu:(float)arg3 isInBackground:(BOOL)arg4;
- (void)p_addAddressFrame:(id)arg1;
- (void)p_mergeAddressFrame:(id)arg1 with:(id)arg2;
- (void)p_mergedAddressFrameArray:(id)arg1 with:(id)arg2;
- (id)description;
- (id)parentAddressFrame;
- (void)setParentAddressFrame:(id)arg1;
- (void).cxx_destruct;
@end

