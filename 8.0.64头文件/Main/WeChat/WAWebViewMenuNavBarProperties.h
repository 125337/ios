@interface WAWebViewMenuNavBarProperties : NSObject
{
    BOOL _rightButtonHidden; // +0x8
    BOOL _loading; // +0x9
    long long _navMode; // +0x10
    long long _statusBarType; // +0x18
    NSString * _navTitle; // +0x20
    UIColor * _navBarColor; // +0x28
}
- (long long)navMode;
- (void)setNavMode:(long long)arg1;
- (long long)statusBarType;
- (void)setStatusBarType:(long long)arg1;
- (id)navTitle;
- (void)setNavTitle:(id)arg1;
- (id)navBarColor;
- (void)setNavBarColor:(id)arg1;
- (BOOL)rightButtonHidden;
- (void)setRightButtonHidden:(BOOL)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
