@interface MMLiteAppWidgetHandler : NSObject
{
    BOOL _statusBarHidden; // +0x8
    BOOL _homeIndicatorHidden; // +0x9
    BOOL _isPopGestureEnable; // +0xa
    BOOL _forbidRightGestureEnable; // +0xb
    unsigned int _appUuid; // +0xc
    int _lastFlags; // +0x10
    NSString * _appId; // +0x18
    id /* block */ _willdisappearBlock; // +0x20
    id /* block */ _darkModeChangeBlock; // +0x28
    unsigned long long _interfaceOrientationMask; // +0x30
    long long _interfaceOrientation; // +0x38
    LiteAppJsApiPluginScheduler * _jsApiPluginScheduler; // +0x40
    NSMutableDictionary * _extraData; // +0x48
    long long _storeUiStatusBarStyle; // +0x50
}
- (id)initWithAppId:(id)arg1 appUuid:(unsigned int)arg2;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (id /* block */)willdisappearBlock;
- (void)setWilldisappearBlock:(id /* block */)arg1;
- (id /* block */)darkModeChangeBlock;
- (void)setDarkModeChangeBlock:(id /* block */)arg1;
- (int)lastFlags;
- (void)setLastFlags:(int)arg1;
- (BOOL)statusBarHidden;
- (void)setStatusBarHidden:(BOOL)arg1;
- (BOOL)homeIndicatorHidden;
- (void)setHomeIndicatorHidden:(BOOL)arg1;
- (unsigned long long)interfaceOrientationMask;
- (void)setInterfaceOrientationMask:(unsigned long long)arg1;
- (long long)interfaceOrientation;
- (void)setInterfaceOrientation:(long long)arg1;
- (BOOL)isPopGestureEnable;
- (void)setIsPopGestureEnable:(BOOL)arg1;
- (BOOL)forbidRightGestureEnable;
- (void)setForbidRightGestureEnable:(BOOL)arg1;
- (id)jsApiPluginScheduler;
- (void)setJsApiPluginScheduler:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (long long)storeUiStatusBarStyle;
- (void)setStoreUiStatusBarStyle:(long long)arg1;
- (void).cxx_destruct;
@end

