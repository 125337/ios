@interface WAEJBindingWebGLShaderPrecisionFormat : WAEJBindingBase
{
    int rangeMin; // +0x20
    int rangeMax; // +0x24
    int precision; // +0x28
}
+ (void *)_ptr_to_get_rangeMin;
+ (void *)_ptr_to_get_rangeMax;
+ (void *)_ptr_to_get_precision;
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 scriptView:(id)arg2 rangeMin:(int)arg3 rangeMax:(int)arg4 precision:(int)arg5;
+ (void *)_ptr_to_get___id;
- (id)initWithRangeMin:(int)arg1 rangeMax:(int)arg2 precision:(int)arg3;
- (OpaqueJSValue *)_get_rangeMin:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_rangeMax:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_precision:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get___id:(OpaqueJSContext *)arg1;
@end

