@interface WAPlatformContainerView : UIView <FlutterPlatformView>
{
    BOOL _disableHook; // +0x8
    UIView * _nativeView; // +0x10
    long long _viewId; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (void)dealloc;
- (id)view;
- (void)setNativeView:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)removeHook;
- (void)addHook;
- (void)updateNativeViewFrame;
- (id)nativeView;
- (long long)viewId;
- (void)setViewId:(long long)arg1;
- (BOOL)disableHook;
- (void)setDisableHook:(BOOL)arg1;
- (void).cxx_destruct;
@end
