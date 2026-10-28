@interface WAEJBindingEventedBase : WAEJBindingBase
{
    NSMutableDictionary * eventListeners; // +0x20
    NSMutableDictionary * onCallbacks; // +0x28
}
+ (void *)_ptr_to_func_addEventListener;
+ (void *)_ptr_to_func_removeEventListener;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (void)dealloc;
- (OpaqueJSValue *)getCallbackWithType:(id)arg1 ctx:(OpaqueJSContext *)arg2;
- (void)setCallbackWithType:(id)arg1 ctx:(OpaqueJSContext *)arg2 callback:(OpaqueJSValue *)arg3;
- (OpaqueJSValue *)_func_addEventListener:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_removeEventListener:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (void)triggerEvent:(id)arg1 isMain:(BOOL)arg2 argc:(int)arg3 argv:(const OpaqueJSValue * *)arg4;
- (void)triggerEvent:(id)arg1 isMain:(BOOL)arg2;
- (void)triggerEvent:(id)arg1 isMain:(BOOL)arg2 properties:(struct *)arg3;
@end
