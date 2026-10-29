@interface TingWeCoinServiceObjc : MMUserService <MMServiceProtocol>
{
    NSMutableSet * _delegateSet; // +0x8
}
- (id)init;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (unsigned long long)convertConsumeMode:(int)arg1;
- (void)startConsume:(id)arg1 completion:(id /* block */)arg2;
- (void).cxx_destruct;
@end
