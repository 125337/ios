@interface WCPopUpWindowViewController : MMWindowViewController
{
    UIView * _popUpView; // +0x80
    id /* block */ _willShowCallback; // +0x88
    id /* block */ _willHideCallback; // +0x90
    id /* block */ _didHideCallback; // +0x98
    id /* block */ _hideAnimations; // +0xa0
    double _showDuration; // +0xa8
    double _hideDuration; // +0xb0
    id <UITimingCurveProvider> _showTimingParameters; // +0xb8
    id <UITimingCurveProvider> _hideTimingParameters; // +0xc0
    UIViewPropertyAnimator * _animator; // +0xc8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)clean;
- (BOOL)popUpViewAvailable;
- (void)showView:(id)arg1 showAnimation:(id /* block */)arg2 hideAnimation:(id /* block */)arg3;
- (void)hideView;
- (id)popUpView;
- (void)setPopUpView:(id)arg1;
- (id /* block */)willShowCallback;
- (void)setWillShowCallback:(id /* block */)arg1;
- (id /* block */)willHideCallback;
- (void)setWillHideCallback:(id /* block */)arg1;
- (id /* block */)didHideCallback;
- (void)setDidHideCallback:(id /* block */)arg1;
- (id /* block */)hideAnimations;
- (void)setHideAnimations:(id /* block */)arg1;
- (double)showDuration;
- (void)setShowDuration:(double)arg1;
- (double)hideDuration;
- (void)setHideDuration:(double)arg1;
- (id)showTimingParameters;
- (void)setShowTimingParameters:(id)arg1;
- (id)hideTimingParameters;
- (void)setHideTimingParameters:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end
