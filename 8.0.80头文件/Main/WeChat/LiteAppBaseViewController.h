@interface LiteAppBaseViewController : WxaFlutterViewController <UIGestureRecognizerDelegate>
{
    BOOL _acceptSmallKeyboardHeightEvent; // +0x8
    BOOL _keyboardShow; // +0x9
    float _fontScale; // +0xc
    float _lastBatteryLevel; // +0x10
    float _lastVolume; // +0x14
    long long _lastOrientation; // +0x18
    double _pendingKeyboardHeight; // +0x20
    UIViewController<LiteAppParentViewControllerDelegate> * _liteAppParentViewController; // +0x28
}
- (id)init;
- (id)initWithImpeller:(BOOL)arg1 engineId:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)preDealloc;
- (void)keyboardDidShow:(id)arg1;
- (void)notifyKeyboardHeightChanged;
- (void)keyboardDidHideShow:(id)arg1;
- (void)boldTextStatusChanged:(id)arg1;
- (void)SystemFontSizeChanged:(id)arg1;
- (void)orientationDidChange:(id)arg1;
- (void)batteryLevelDidChange:(id)arg1;
- (void)lowPowerModeDidChange:(id)arg1;
- (void)onVolumeDidChangeBeforeIOS15:(id)arg1;
- (void)onVolumeDidChangeAfterIOS15:(id)arg1;
- (void)parseGlobalPkg:(id)arg1 block:(id /* block */)arg2;
- (BOOL)acceptSmallKeyboardHeightEvent;
- (void)setAcceptSmallKeyboardHeightEvent:(BOOL)arg1;
- (BOOL)keyboardShow;
- (void)setKeyboardShow:(BOOL)arg1;
- (float)fontScale;
- (void)setFontScale:(float)arg1;
- (float)lastBatteryLevel;
- (void)setLastBatteryLevel:(float)arg1;
- (long long)lastOrientation;
- (void)setLastOrientation:(long long)arg1;
- (float)lastVolume;
- (void)setLastVolume:(float)arg1;
- (double)pendingKeyboardHeight;
- (void)setPendingKeyboardHeight:(double)arg1;
- (id)liteAppParentViewController;
- (void)setLiteAppParentViewController:(id)arg1;
- (void).cxx_destruct;
@end
