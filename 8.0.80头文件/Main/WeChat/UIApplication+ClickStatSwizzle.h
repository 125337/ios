@interface UIApplication (ClickStatSwizzle)
+ (void)load;
+ (BOOL)hookSendEvent;
+ (BOOL)hookSendAction;
- (void)mmSendEvent:(id)arg1;
- (BOOL)mmSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
@end
