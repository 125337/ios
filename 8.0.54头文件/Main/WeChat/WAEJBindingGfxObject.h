@interface WAEJBindingGfxObject : WAEJBindingBase
{
    _sg_state_t * _sg; // +0x20
    WAEJBindingGfx * _gfx; // +0x28
    BOOL _invalid; // +0x30
    unsigned int _objectId; // +0x34
}
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 gfx:(id)arg2 objectId:(unsigned int)arg3 sg_state:(_sg_state_t *)arg4;
+ (void *)_ptr_to_func_destroy;
+ (void *)_ptr_to_func_toJSON;
- (id)initWithId:(id)arg1 objectId:(unsigned int)arg2 sg_state:(_sg_state_t *)arg3;
- (void)dealloc;
- (void)destroy;
- (OpaqueJSValue *)_func_destroy:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_toJSON:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
@end

