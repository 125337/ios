@interface WAEJBindingBindingObject : WAEJBindingEventedBase
{
    BOOL stopRender; // +0x30
    WAEJBindingGlobalUtils * global; // +0x38
}
+ (void *)_ptr_to_get___id;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (void)createWithJSObject:(OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (void)prepareGarbageCollection;
- (OpaqueJSValue *)_get___id:(OpaqueJSContext *)arg1;
- (BOOL)stopRender;
- (void)setStopRender:(BOOL)arg1;
@end

