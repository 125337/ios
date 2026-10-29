@interface UIViewController (SwizzleForCrashFix)
+ (void)load;
- (void)mmRemoveFromParentViewController;
@end

