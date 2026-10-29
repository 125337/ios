@interface WCLagStackTracePool : NSObject
{
    unsigned long long * * m_stackCyclePool; // +0x8
    unsigned long long * m_stackCount; // +0x10
    unsigned long long m_maxStackCount; // +0x18
    NSMutableArray * _parentAddressFrame; // +0x20
}
- (id)initWithStackCyclePool:(unsigned long long * *)arg1 stackCount:(unsigned long long *)arg2 maxStackTraceCount:(unsigned long long)arg3;
- (id)makeCallTree;
- (id)p_getInfoDictFromAddressFrame:(id)arg1;
- (id)p_getAddressFrameWithStackTraces:(unsigned long long *)arg1 length:(unsigned long long)arg2;
- (void)p_addAddressFrame:(id)arg1;
- (void)p_mergeAddressFrame:(id)arg1 with:(id)arg2;
- (void)p_mergedAddressFrameArray:(id)arg1 with:(id)arg2;
- (id)description;
- (id)parentAddressFrame;
- (void)setParentAddressFrame:(id)arg1;
- (void).cxx_destruct;
@end

