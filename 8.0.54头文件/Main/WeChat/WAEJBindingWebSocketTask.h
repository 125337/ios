@interface WAEJBindingWebSocketTask : WAEJBindingEventedBase
{
    NSString * taskId; // +0x30
    unsigned int workerId; // +0x38
}
+ (void *)_ptr_to_func_connect;
+ (void *)_ptr_to_func_send;
+ (void *)_ptr_to_func_close;
+ (void *)_ptr_to_get_onmessage;
+ (void *)_ptr_to_set_onmessage;
+ (void *)_ptr_to_get_onopen;
+ (void *)_ptr_to_set_onopen;
+ (void *)_ptr_to_get_onerror;
+ (void *)_ptr_to_set_onerror;
+ (void *)_ptr_to_get_onclose;
+ (void *)_ptr_to_set_onclose;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (void)createWithJSObject:(OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (OpaqueJSValue *)_func_connect:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_send:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_close:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (void)onHeaderReceived:(id)arg1 profile:(id)arg2;
- (void)onMessageReceived:(id)arg1;
- (void)onClose:(id)arg1 code:(unsigned int)arg2;
- (void)onError:(id)arg1 code:(unsigned int)arg2;
@end

