@interface PhysxAdaptor : NSObject
{
    OpaqueJSContext * _jscontext; // +0x8
    Phys3DScriptState * _phys3dScriptState; // +0x10
}
- (id)initWithJSContext:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2;
- (void)setLogDelegate:(id)arg1;
- (void)releaseContext;
- (void)dealloc;
@end

