@interface MBJSFunction : NSObject
{
    unsigned long long _handlerId; // +0x8
    id /* block */ _invokeCallback; // +0x10
}
- (void)invoke:(id)arg1;
- (void)invokeWithDict:(id)arg1;
- (unsigned long long)handlerId;
- (void)setHandlerId:(unsigned long long)arg1;
- (id /* block */)invokeCallback;
- (void)setInvokeCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
