@interface WCFinderMinimizeAnimatorContext : NSObject
{
    BOOL _fromGesture; // +0x8
    BOOL _isExpand; // +0x9
    UIView * _fromView; // +0x10
    UIViewController * _fromVC; // +0x18
    UIView * _toView; // +0x20
    UIViewController * _toVC; // +0x28
    double _gestureMaskAlpha; // +0x30
    WCFinderTransitionUserInfo * _userInfo; // +0x38
    id _passObject; // +0x40
    id <UIViewControllerContextTransitioning> _ctx; // +0x48
}
+ (id)wrapContext:(id)arg1;
- (id)container;
- (id)fromView;
- (id)fromVC;
- (id)toView;
- (id)toVC;
- (id)frontView;
- (id)backView;
- (id)frontVC;
- (id)backVC;
- (BOOL)isPresentingOrDismiss;
- (CGRect)fromViewInitialFrame;
- (CGRect)toViewFinalFrame;
- (CGRect)toViewInitialFrame;
- (CGRect)frontViewInitialFrame;
- (CGRect)frontViewFinalFrame;
- (CGRect)backViewFinalFrame;
- (CGRect)backViewInitialFrame;
- (void)setFromView:(id)arg1;
- (void)setFromVC:(id)arg1;
- (void)setToView:(id)arg1;
- (void)setToVC:(id)arg1;
- (BOOL)fromGesture;
- (void)setFromGesture:(BOOL)arg1;
- (double)gestureMaskAlpha;
- (void)setGestureMaskAlpha:(double)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)passObject;
- (void)setPassObject:(id)arg1;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (id)ctx;
- (void)setCtx:(id)arg1;
- (void).cxx_destruct;
@end
