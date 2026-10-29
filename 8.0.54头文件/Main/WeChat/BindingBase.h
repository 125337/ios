@interface BindingBase : NSObject
{
    OpaqueJSContext * __ctx; // +0x8
    OpaqueJSValue * __obj; // +0x10
}
- (id)initWithContext:(OpaqueJSContext *)arg1 name:(id)arg2 parent:(OpaqueJSValue *)arg3;
- (void)initMethods;
@end

