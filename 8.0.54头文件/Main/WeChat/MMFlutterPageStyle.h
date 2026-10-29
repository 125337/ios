@interface MMFlutterPageStyle : NSObject
{
    BOOL _needSnapshot; // +0x8
    BOOL _needWaitActionBarSnapshot; // +0x9
    BOOL _needNavPresented; // +0xa
    BOOL _disableAnimation; // +0xb
    BOOL _disablePlatformNav; // +0xc
    BOOL _disableInteractivePop; // +0xd
    BOOL _popOrDismissWithAnimation; // +0xe
    BOOL _autoReleaseFlutterView; // +0xf
    Class _pageViewControllerClass; // +0x10
    unsigned long long _pageType; // +0x18
    UIColor * _backgroundColor; // +0x20
    UIColor * _beforeRenderBackgroundColor; // +0x28
    long long _modalPresentationStyle; // +0x30
    NSObject<MMFlutterViewControllerAnimatedTransitioning> * _transitionManager; // +0x38
}
- (id)init;
- (id)initWithPageType:(unsigned long long)arg1;
- (Class)pageViewControllerClass;
- (void)setPageViewControllerClass:(Class)arg1;
- (unsigned long long)pageType;
- (void)setPageType:(unsigned long long)arg1;
- (BOOL)needSnapshot;
- (void)setNeedSnapshot:(BOOL)arg1;
- (BOOL)needWaitActionBarSnapshot;
- (void)setNeedWaitActionBarSnapshot:(BOOL)arg1;
- (BOOL)needNavPresented;
- (void)setNeedNavPresented:(BOOL)arg1;
- (BOOL)disableAnimation;
- (void)setDisableAnimation:(BOOL)arg1;
- (BOOL)disablePlatformNav;
- (void)setDisablePlatformNav:(BOOL)arg1;
- (BOOL)disableInteractivePop;
- (void)setDisableInteractivePop:(BOOL)arg1;
- (BOOL)popOrDismissWithAnimation;
- (void)setPopOrDismissWithAnimation:(BOOL)arg1;
- (BOOL)autoReleaseFlutterView;
- (void)setAutoReleaseFlutterView:(BOOL)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)beforeRenderBackgroundColor;
- (void)setBeforeRenderBackgroundColor:(id)arg1;
- (long long)modalPresentationStyle;
- (void)setModalPresentationStyle:(long long)arg1;
- (id)transitionManager;
- (void)setTransitionManager:(id)arg1;
- (void).cxx_destruct;
@end

