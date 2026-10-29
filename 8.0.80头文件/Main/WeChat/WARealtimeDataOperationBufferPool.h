@interface WARealtimeDataOperationBufferPool : MMObject
{
    NSMutableArray * _immediatePriorityBuffer; // +0x8
    NSMutableArray * _highPriorityBuffer; // +0x10
    NSMutableArray * _normalPriorityBuffer; // +0x18
}
- (id)init;
- (void)addOperation:(id)arg1;
- (id)dequeueProperBatchOperationsUnderTotalBytesSize:(unsigned long long)arg1 actualBytesSize:(unsigned long long *)arg2 despiteRetryInterval:(unsigned int)arg3;
- (unsigned long long)totalBufferSize;
- (id)immediatePriorityBuffer;
- (void)setImmediatePriorityBuffer:(id)arg1;
- (id)highPriorityBuffer;
- (void)setHighPriorityBuffer:(id)arg1;
- (id)normalPriorityBuffer;
- (void)setNormalPriorityBuffer:(id)arg1;
- (void).cxx_destruct;
@end
