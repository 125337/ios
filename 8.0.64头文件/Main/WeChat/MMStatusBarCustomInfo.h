@interface MMStatusBarCustomInfo : NSObject
{
    BOOL _overrideStatusBarHidden; // +0x8
    BOOL _shouldOverrideStatusBarHidden; // +0x9
    BOOL _shouldOverrideStatusBarStyle; // +0xa
    BOOL _shouldOverrideStatusBarAnimation; // +0xb
    long long _overrideStatusBarStyle; // +0x10
    long long _overrideStatusBarAnimation; // +0x18
}
- (void)reset;
- (void)setOverrideStatusBarHidden:(BOOL)arg1;
- (void)setOverrideStatusBarStyle:(long long)arg1;
- (void)setOverrideStatusBarAnimation:(long long)arg1;
- (BOOL)overrideStatusBarHidden;
- (long long)overrideStatusBarStyle;
- (long long)overrideStatusBarAnimation;
- (BOOL)shouldOverrideStatusBarHidden;
- (void)setShouldOverrideStatusBarHidden:(BOOL)arg1;
- (BOOL)shouldOverrideStatusBarStyle;
- (void)setShouldOverrideStatusBarStyle:(BOOL)arg1;
- (BOOL)shouldOverrideStatusBarAnimation;
- (void)setShouldOverrideStatusBarAnimation:(BOOL)arg1;
@end
