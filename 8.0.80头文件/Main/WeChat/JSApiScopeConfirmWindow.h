@interface JSApiScopeConfirmWindow : MMUIWindow
{
    NSString * _appName; // +0x8
    NSString * _appIconURL; // +0x10
    NSArray * _arrScopeInfo; // +0x18
    NSString * _confirmTitle; // +0x20
    unsigned long long _orientationMask; // +0x28
    id <JSApiScopeConfirmWindowDelegate> _confirmWindowDelegate; // +0x30
}
- (void)setupView;
- (BOOL)shouldHandleStatusBarAppearance;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)appIconURL;
- (void)setAppIconURL:(id)arg1;
- (id)arrScopeInfo;
- (void)setArrScopeInfo:(id)arg1;
- (id)confirmTitle;
- (void)setConfirmTitle:(id)arg1;
- (unsigned long long)orientationMask;
- (void)setOrientationMask:(unsigned long long)arg1;
- (id)confirmWindowDelegate;
- (void)setConfirmWindowDelegate:(id)arg1;
- (void).cxx_destruct;
@end
