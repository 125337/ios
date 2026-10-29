@interface WAEJBindingWindowEvents : WAEJBindingEventedBase <EJWindowEventsDelegate>
+ (void *)_ptr_to_get_onpagehide;
+ (void *)_ptr_to_set_onpagehide;
+ (void *)_ptr_to_get_onpageshow;
+ (void *)_ptr_to_set_onpageshow;
+ (void *)_ptr_to_get_onresize;
+ (void *)_ptr_to_set_onresize;
- (void)createWithJSObject:(OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (void)pause;
- (void)resume;
- (void)resize;
@end

