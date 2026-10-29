@interface WCFinderEventDelegate : NSObject
{
    set<Protocol *, std::less<Protocol *>, std::allocator<Protocol *>> protocols; // +0x8
    NSMutableSet * _whiteList; // +0x20
    NSMutableSet * _blackList; // +0x28
    id _target; // +0x30
    WCFinderEventDelegate * _next; // +0x38
    NSMutableDictionary * _signatureMap; // +0x40
    NSMutableSet * _alreadyFastForwardSelectors; // +0x48
}
+ (id)delegateWithProtocol:(id)arg1 handler:(id)arg2;
+ (id)globalAlreadyFastForwardSelectors;
- (void)addNextChain:(id)arg1;
- (void)post:(id)arg1 selector:(SEL)arg2 action:(id /* block */)arg3;
- (void)handle:(id)arg1 name:(id)arg2 selector:(SEL)arg3 action:(id /* block */)arg4;
- (id)cast;
- (id)cast:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)delegateHandleForwardInvocation:(id)arg1;
- (void)_addForwardMethodForSelector:(SEL)arg1;
- (id)whiteList;
- (void)setWhiteList:(id)arg1;
- (id)blackList;
- (void)setBlackList:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)next;
- (void)setNext:(id)arg1;
- (id)signatureMap;
- (void)setSignatureMap:(id)arg1;
- (id)alreadyFastForwardSelectors;
- (void)setAlreadyFastForwardSelectors:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

