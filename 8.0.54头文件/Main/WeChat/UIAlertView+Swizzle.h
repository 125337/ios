@interface UIAlertView (Swizzle)
+ (void)load;
- (id)hook_initWithFrame:(CGRect)arg1;
- (id)hook_initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
@end

