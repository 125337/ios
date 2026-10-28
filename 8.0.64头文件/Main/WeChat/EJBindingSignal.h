@interface EJBindingSignal : WAEJBindingBase
{
    OpaqueJSValue * _result; // +0x20
    BOOL _hasData; // +0x28
}
+ (void *)_ptr_to_func_wait;
+ (void *)_ptr_to_func_notify;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_func_wait:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_notify:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
@end
