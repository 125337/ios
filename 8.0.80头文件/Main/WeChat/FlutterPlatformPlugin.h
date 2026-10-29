@interface FlutterPlatformPlugin : NSObject
{
    BOOL _enableViewControllerBasedStatusBarAppearance; // +0x8
    FlutterEngine * _engine; // +0x10
    UITextField * _textField; // +0x18
}
- (id)initWithEngine:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)showSystemContextMenu:(id)arg1;
- (void)hideSystemContextMenu;
- (void)showShareViewController:(id)arg1;
- (void)searchWeb:(id)arg1;
- (void)playSystemSound:(id)arg1;
- (void)vibrateHapticFeedback:(id)arg1;
- (void)setSystemChromePreferredOrientations:(id)arg1;
- (void)setSystemChromeApplicationSwitcherDescription:(id)arg1;
- (void)setSystemChromeEnabledSystemUIOverlays:(id)arg1;
- (void)setSystemChromeEnabledSystemUIMode:(id)arg1;
- (void)restoreSystemChromeSystemUIOverlays;
- (void)setSystemChromeSystemUIOverlayStyle:(id)arg1;
- (void)popSystemNavigator:(BOOL)arg1;
- (id)getClipboardData:(id)arg1;
- (void)setClipboardData:(id)arg1;
- (id)clipboardHasStrings;
- (BOOL)isLiveTextInputAvailable;
- (void)showLookUpViewController:(id)arg1;
- (id)textField;
- (BOOL)enableViewControllerBasedStatusBarAppearance;
- (void)setEnableViewControllerBasedStatusBarAppearance:(BOOL)arg1;
- (id)engine;
- (void)setEngine:(id)arg1;
- (void)setTextField:(id)arg1;
- (void).cxx_destruct;
@end
