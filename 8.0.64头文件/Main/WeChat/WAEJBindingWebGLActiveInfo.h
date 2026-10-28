@interface WAEJBindingWebGLActiveInfo : WAEJBindingBase
{
    int size; // +0x20
    unsigned int type; // +0x24
    NSString * name; // +0x28
}
+ (void *)_ptr_to_get_size;
+ (void *)_ptr_to_get_type;
+ (void *)_ptr_to_get_name;
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 scriptView:(id)arg2 size:(int)arg3 type:(unsigned int)arg4 name:(id)arg5;
- (id)initWithSize:(int)arg1 type:(unsigned int)arg2 name:(id)arg3;
- (void)dealloc;
- (OpaqueJSValue *)_get_size:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_type:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_name:(OpaqueJSContext *)arg1;
@end
