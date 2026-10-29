@interface TPPlayerAdapterProxy : NSProxy
{
    TPPlayerAdapter * _playerAdapter; // +0x8
    id <ITPPlayerBaseDelegate> _outerDelegate; // +0x10
    TPPlayerAdapterProxyDelegate * _proxyDelegate; // +0x18
    TPEventTrackingPublisher * _eventTrackingPublisher; // +0x20
}
- (id)initTPPlayerAdapterProxy:(id)arg1 withContext:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)hookDelegateIfNeed:(id)arg1;
- (void)pushEventWithNestedInvocation:(id)arg1;
- (id)playerAdapter;
- (void)setPlayerAdapter:(id)arg1;
- (id)outerDelegate;
- (void)setOuterDelegate:(id)arg1;
- (id)proxyDelegate;
- (void)setProxyDelegate:(id)arg1;
- (id)eventTrackingPublisher;
- (void)setEventTrackingPublisher:(id)arg1;
- (void).cxx_destruct;
@end

