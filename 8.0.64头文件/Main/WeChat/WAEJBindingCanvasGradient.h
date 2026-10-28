@interface WAEJBindingCanvasGradient : WAEJBindingBase
{
    WAEJCanvasGradient * gradient; // +0x20
}
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 scriptView:(id)arg2 gradient:(id)arg3;
+ (id)gradientFromJSValue:(OpaqueJSValue *)arg1;
+ (void *)_ptr_to_func_addColorStop;
+ (id)gradientFromInstance:(unsigned long long)arg1;
+ (void *)_ptr_to_get_instance;
+ (void *)_ptr_to_get___type;
- (void)dealloc;
- (OpaqueJSValue *)_func_addColorStop:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_get_instance:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get___type:(OpaqueJSContext *)arg1;
@end
