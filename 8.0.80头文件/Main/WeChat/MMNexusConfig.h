@interface MMNexusConfig : NSObject
{
    NSMutableDictionary * _events; // +0x8
    NSMutableArray * _lifecycles; // +0x10
    id /* block */ _failHandler; // +0x18
    NSMutableDictionary * _preloadedImages; // +0x20
    BOOL _immersive; // +0x28
    BOOL _hideNavBar; // +0x29
    BOOL _usePreload; // +0x2a
    NSDictionary * _initialData; // +0x30
    NSString * _pageVariant; // +0x38
    double _heightRatio; // +0x40
    double _heightPx; // +0x48
    unsigned long long _dragDownButtonStyle; // +0x50
    UIColor * _dragDownProgressBarColor; // +0x58
    UIColor * _dragDownProgressArrowColor; // +0x60
    UIColor * _sheetBackgroundColor; // +0x68
    NSString * _navTitle; // +0x70
    UIColor * _backgroundColor; // +0x78
    long long _udrWaitTimeoutMs; // +0x80
    NSString * _localPathOverride; // +0x88
}
- (id)init;
- (void)on:(id)arg1 handler:(id /* block */)arg2;
- (void)onLifecycle:(id /* block */)arg1;
- (void)onFail:(id /* block */)arg1;
- (void)setPreloadedImageData:(id)arg1 mimeType:(id)arg2 forKey:(id)arg3;
- (id)_allEventHandlers;
- (id)_allLifecycleHandlers;
- (id /* block */)_failHandler;
- (id)_preloadedImageEntries;
- (id)initialData;
- (void)setInitialData:(id)arg1;
- (id)pageVariant;
- (void)setPageVariant:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (double)heightPx;
- (void)setHeightPx:(double)arg1;
- (BOOL)immersive;
- (void)setImmersive:(BOOL)arg1;
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
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)usePreload;
- (void)setUsePreload:(BOOL)arg1;
- (long long)udrWaitTimeoutMs;
- (void)setUdrWaitTimeoutMs:(long long)arg1;
- (id)localPathOverride;
- (void)setLocalPathOverride:(id)arg1;
- (void).cxx_destruct;
@end
