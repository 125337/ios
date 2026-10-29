@interface TPDataTransportManagerProxy : NSProxy
{
    TPProxyPlayManager * _manager; // +0x8
    id <TPProxyPlayDelegate> _outerDelegate; // +0x10
    TPDataTransportManagerProxyDelegate * _proxyDelegate; // +0x18
    TPPlayerEventPublisher * _publisher; // +0x20
}
- (id)initDataTransportManagerProxy:(id)arg1 withContext:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)hookDelegateIfNeed:(id)arg1;
- (void)pushEventAfterInvokeIfNeed:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (id)outerDelegate;
- (void)setOuterDelegate:(id)arg1;
- (id)proxyDelegate;
- (void)setProxyDelegate:(id)arg1;
- (id)publisher;
- (void)setPublisher:(id)arg1;
- (void).cxx_destruct;
@end

