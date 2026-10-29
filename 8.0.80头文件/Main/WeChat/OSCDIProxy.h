@interface OSCDIProxy : NSProxy <OSCDIProxy>
{
    NSMapTable * _objectsByProtocolName; // +0x8
    NSMapTable * _targetsByActionName; // +0x10
}
- (id)init;
- (void)injectDependencyObject:(id)arg1 forProtocol:(id)arg2;
- (void)injectDependencyTarget:(id)arg1 forAction:(SEL)arg2;
- (id)injectedObjectForProtocol:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)objectsByProtocolName;
- (void)setObjectsByProtocolName:(id)arg1;
- (id)targetsByActionName;
- (void)setTargetsByActionName:(id)arg1;
- (void).cxx_destruct;
@end
