@interface MMNexusHalfScreenParams : NSObject
{
    BOOL _overrideCache; // +0x8
    BOOL _forbidAutoUpateTitle; // +0x9
    BOOL _supportSharing; // +0xa
    BOOL _showDislike; // +0xb
    BOOL _hideNavBar; // +0xc
    NSString * _uri; // +0x10
    double _screenRatio; // +0x18
    NSString * _localFileReadAccessDir; // +0x20
    unsigned long long _dragDownButtonStyle; // +0x28
    UIColor * _dragDownProgressBarColor; // +0x30
    UIColor * _dragDownProgressArrowColor; // +0x38
    UIColor * _sheetBackgroundColor; // +0x40
    NSString * _navTitle; // +0x48
    UIColor * _navButtonTintColor; // +0x50
}
+ (id)paramsWithUri:(id)arg1 screenRatio:(double)arg2;
- (id)uri;
- (void)setUri:(id)arg1;
- (double)screenRatio;
- (void)setScreenRatio:(double)arg1;
- (id)localFileReadAccessDir;
- (void)setLocalFileReadAccessDir:(id)arg1;
- (BOOL)overrideCache;
- (void)setOverrideCache:(BOOL)arg1;
- (BOOL)forbidAutoUpateTitle;
- (void)setForbidAutoUpateTitle:(BOOL)arg1;
- (BOOL)supportSharing;
- (void)setSupportSharing:(BOOL)arg1;
- (BOOL)showDislike;
- (void)setShowDislike:(BOOL)arg1;
- (BOOL)hideNavBar;
- (void)setHideNavBar:(BOOL)arg1;
- (unsigned long long)dragDownButtonStyle;
- (void)setDragDownButtonStyle:(unsigned long long)arg1;
- (id)dragDownProgressBarColor;
- (void)setDragDownProgressBarColor:(id)arg1;
- (id)dragDownProgressArrowColor;
- (void)setDragDownProgressArrowColor:(id)arg1;
- (id)sheetBackgroundColor;
- (void)setSheetBackgroundColor:(id)arg1;
- (id)navTitle;
- (void)setNavTitle:(id)arg1;
- (id)navButtonTintColor;
- (void)setNavButtonTintColor:(id)arg1;
- (void).cxx_destruct;
@end
