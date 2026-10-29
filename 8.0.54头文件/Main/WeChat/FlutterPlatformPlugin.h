@interface FlutterPlatformPlugin : NSObject
{
    WeakNSObject<FlutterEngine> _engine; // +0x8
    UITextField * _textField; // +0x18
    BOOL _enableViewControllerBasedStatusBarAppearance; // +0x20
}
- (id)initWithEngine:(WeakNSObject<FlutterEngine>)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
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
- (void)dealloc;
- (BOOL)enableViewControllerBasedStatusBarAppearance;
- (void)setEnableViewControllerBasedStatusBarAppearance:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

