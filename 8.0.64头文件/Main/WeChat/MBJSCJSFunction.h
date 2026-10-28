@interface MBJSCJSFunction : MBJSFunction
{
    JSContext * _context; // +0x8
    MBJSCRuntime * _runtime; // +0x10
    void * _callback; // +0x18
}
- (void)invoke:(id)arg1;
- (void)invokeWithDict:(id)arg1;
- (void)dealloc;
- (id)context;
- (void)setContext:(id)arg1;
- (id)runtime;
- (void)setRuntime:(id)arg1;
- (void *)callback;
- (void)setCallback:(void *)arg1;
- (void).cxx_destruct;
@end
