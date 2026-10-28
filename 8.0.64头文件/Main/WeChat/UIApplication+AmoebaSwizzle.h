@interface UIApplication (AmoebaSwizzle)
+ (void)load;
+ (BOOL)amb_hookSendEvent;
+ (BOOL)amb_hookSendAction;
- (void)amb_sendEvent:(id)arg1;
- (BOOL)amb_sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
@end
