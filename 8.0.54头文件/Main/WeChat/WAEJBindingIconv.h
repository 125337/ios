@interface WAEJBindingIconv : WAEJBindingBase
{
    NSString * _from; // +0x20
    NSString * _to; // +0x28
}
+ (void *)_ptr_to_func_convert;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_func_convert:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
@end

