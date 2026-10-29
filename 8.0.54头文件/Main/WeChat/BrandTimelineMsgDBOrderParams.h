@interface BrandTimelineMsgDBOrderParams : NSObject
{
    BOOL _assignLimitWeight; // +0x8
    unsigned int _groupId; // +0xc
    unsigned int _predict; // +0x10
    unsigned int _orderId; // +0x14
}
+ (unsigned long long)genSeqIdByGroupId:(unsigned int)arg1 predict:(unsigned int)arg2 orderId:(unsigned int)arg3;
+ (void)retriveGroupId:(unsigned int *)arg1 predict:(unsigned int *)arg2 orderId:(unsigned int *)arg3 bySeqId:(unsigned long long)arg4;
- (id)initWithSeqId:(unsigned long long)arg1;
- (id)initWithGroupId:(unsigned int)arg1 predict:(unsigned int)arg2 orderId:(unsigned int)arg3;
- (unsigned long long)seqId;
- (void)setPredict:(unsigned int)arg1;
- (unsigned int)groupId;
- (void)setGroupId:(unsigned int)arg1;
- (unsigned int)predict;
- (unsigned int)orderId;
- (void)setOrderId:(unsigned int)arg1;
- (BOOL)assignLimitWeight;
- (void)setAssignLimitWeight:(BOOL)arg1;
@end

