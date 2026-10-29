@interface LiteAppBaseViewController : WxaFlutterViewController <UIGestureRecognizerDelegate>
{
    BOOL _acceptSmallKeyboardHeightEvent; // +0x8
    BOOL _keyboardShow; // +0x9
    float _fontScale; // +0xc
    float _lastBatteryLevel; // +0x10
    float _lastVolume; // +0x14
    long long _lastOrientation; // +0x18
}
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)preDealloc;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHideShow:(id)arg1;
- (void)boldTextStatusChanged:(id)arg1;
- (void)SystemFontSizeChanged:(id)arg1;
- (void)orientationDidChange:(id)arg1;
- (void)batteryLevelDidChange:(id)arg1;
- (void)lowPowerModeDidChange:(id)arg1;
- (void)onVolumeDidChangeBeforeIOS15:(id)arg1;
- (void)onVolumeDidChangeAfterIOS15:(id)arg1;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)parseGlobalPkg:(id)arg1;
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
@end

