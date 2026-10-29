@interface CRBProtocolObservers : NSObject
{
    scoped_nsobject<Protocol> _protocol; // +0x8
    vector<id, std::allocator<id>> _observers; // +0x10
    int _invocationDepth; // +0x28
}
+ (id)observersWithProtocol:(id)arg1;
- (id)init;
- (id)initWithProtocol:(id)arg1;
- (id)protocol;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (BOOL)empty;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)executeOnObservers:(id /* block */)arg1;
- (void)compact;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

