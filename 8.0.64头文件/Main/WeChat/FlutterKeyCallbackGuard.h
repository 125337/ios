@interface FlutterKeyCallbackGuard : NSObject
{
    id /* block */ _callback; // +0x8
    BOOL _handled; // +0x10
    NSString * _debugHandleSource; // +0x18
}
- (id)initWithCallback:(id /* block */)arg1;
- (void)dealloc;
- (void)pendTo:(id)arg1 withId:(unsigned long long)arg2;
- (void)resolveTo:(BOOL)arg1;
- (BOOL)handled;
- (void)setHandled:(BOOL)arg1;
- (id)debugHandleSource;
@end
