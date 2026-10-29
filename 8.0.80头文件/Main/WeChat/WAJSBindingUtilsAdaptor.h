@interface WAJSBindingUtilsAdaptor : NSObject
{
    OpaqueJSContext * _jscontext; // +0x8
}
- (id)initWithJSContext:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2;
- (void)releaseContext;
@end
