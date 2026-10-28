@interface QMapNetworkProcessorQueue : NSObject
{
    QMapNetworkStatProcessor * _processor; // +0x8
}
- (id)init;
- (void)registerRules:(id)arg1;
- (void)unregisterRules:(id)arg1;
- (void)onRequest:(id)arg1;
- (void)onResponse:(id)arg1 error:(id)arg2 request:(id)arg3 data:(id)arg4;
- (id)processor;
- (void)setProcessor:(id)arg1;
- (void).cxx_destruct;
@end
