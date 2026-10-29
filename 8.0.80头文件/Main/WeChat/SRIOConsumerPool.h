@interface SRIOConsumerPool : NSObject
{
    unsigned long long _poolSize; // +0x8
    NSMutableArray * _bufferedConsumers; // +0x10
}
- (id)initWithBufferCapacity:(unsigned long long)arg1;
- (id)init;
- (id)consumerWithScanner:(id /* block */)arg1 handler:(id /* block */)arg2 bytesNeeded:(unsigned long long)arg3 readToCurrentFrame:(BOOL)arg4 unmaskBytes:(BOOL)arg5;
- (void)returnConsumer:(id)arg1;
- (void).cxx_destruct;
@end
