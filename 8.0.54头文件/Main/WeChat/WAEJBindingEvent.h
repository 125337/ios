@interface WAEJBindingEvent : WAEJBindingBase
{
    NSString * type; // +0x20
    OpaqueJSValue * jsTarget; // +0x28
    OpaqueJSValue * jsTimestamp; // +0x30
}
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 scriptView:(id)arg2 type:(id)arg3 target:(OpaqueJSValue *)arg4;
+ (void *)_ptr_to_get_target;
+ (void *)_ptr_to_get_currentTarget;
+ (void *)_ptr_to_get_type;
+ (void *)_ptr_to_get_timestamp;
+ (void *)_ptr_to_func_preventDefault;
+ (void *)_ptr_to_func_stopPropagation;
- (void)dealloc;
- (OpaqueJSValue *)_get_target:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_currentTarget:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_type:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_timestamp:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_func_preventDefault:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_stopPropagation:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
@end

