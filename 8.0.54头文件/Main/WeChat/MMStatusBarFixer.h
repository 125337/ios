@interface MMStatusBarFixer : MMWindowViewController
{
    long long _statusBarStyle; // +0x78
}
+ (void)tryFixStatusBar;
- (id)init;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(BOOL)arg1;
- (long long)statusBarStyle;
- (void)setStatusBarStyle:(long long)arg1;
@end

