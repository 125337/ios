@interface OSCWeakProxy : NSProxy
{
    Protocol * _protocol; // +0x8
    id _target; // +0x10
}
+ (id)proxyWithTarget:(id)arg1;
+ (id)proxyWithTarget:(id)arg1 protocol:(id)arg2;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)target;
- (void).cxx_destruct;
@end
