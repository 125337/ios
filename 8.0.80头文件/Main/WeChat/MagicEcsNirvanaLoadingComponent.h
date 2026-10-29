@interface MagicEcsNirvanaLoadingComponent : NSObject
{
    BOOL _isShowing; // +0x8
    UIViewController * _viewController; // +0x10
    id <MagicEcsNirvanaLoadingComponentCallbacks> _callbacks; // +0x18
    UIView * _inlineLoadingView; // +0x20
}
+ (double)autoCancelTimeout;
- (id)initWithViewController:(id)arg1 callbacks:(id)arg2;
- (id)initWithViewController:(id)arg1 callbacks:(id)arg2 inlineLoadingView:(id)arg3;
- (void)scheduleDelayedLoading:(double)arg1;
- (void)dismiss;
- (void)onDestroy;
- (void)showLoading;
- (void)showLoadingDelayed;
- (void)handleLoadingTimeout;
- (void)hideLoading;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)callbacks;
- (void)setCallbacks:(id)arg1;
- (id)inlineLoadingView;
- (void)setInlineLoadingView:(id)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (void).cxx_destruct;
@end
