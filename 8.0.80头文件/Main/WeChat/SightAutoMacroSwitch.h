@interface SightAutoMacroSwitch : UIView
{
    BOOL _isAutoSwitchSelected; // +0x8
    BOOL _isLockState; // +0x9
    BOOL _isSelected; // +0xa
    BOOL _isBackSuperWide; // +0xb
    id <SightAutoMacroSwitchDelegate> _delegate; // +0x10
    unsigned long long _state; // +0x18
    UIButton * _autoMacroSwitchButton; // +0x20
    UITapGestureRecognizer * _tapGesture; // +0x28
    unsigned long long _preState; // +0x30
}
- (id)initWithContentFrame:(CGRect)arg1 toolBarFrame:(CGRect)arg2;
- (void)initAutoMacroSwitchButton;
- (void)relayoutAutoMacroSwitchViewContenView:(id)arg1 toolBar:(id)arg2;
- (BOOL)isAutoSwitchSelected;
- (void)autoMacroSwitchTapped:(id)arg1;
- (void)activePrimaryConstituentDeviceSwitchToBackSuperWide:(BOOL)arg1;
- (void)resetState;
- (void)markState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)justifyAutoMacroSwitchState;
- (void)updateOrientation:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setIsAutoSwitchSelected:(BOOL)arg1;
- (unsigned long long)state;
- (BOOL)isLockState;
- (void)setIsLockState:(BOOL)arg1;
- (id)autoMacroSwitchButton;
- (void)setAutoMacroSwitchButton:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isBackSuperWide;
- (void)setIsBackSuperWide:(BOOL)arg1;
- (unsigned long long)preState;
- (void)setPreState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
