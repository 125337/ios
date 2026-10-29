@interface WAMediaCastingPageSheet : MMUIWindow <UIGestureRecognizerDelegate, IUiUtilExt>
{
    BOOL _shouldRelease; // +0x8
    id <WAMediaCastingPageSheetDelegate> _delegate; // +0x10
    UIView * _contentView; // +0x18
    UIView * _containerView; // +0x20
    UIView * _backgroundView; // +0x28
}
- (void)dealloc;
- (id)init;
- (void)setupRootViewController;
- (void)show;
- (void)dismiss;
- (CGSize)contentViewSize;
- (CGPoint)containerPoint;
- (BOOL)cornerRaduis;
- (CGPoint)containerShowAnimationStartPoint;
- (CGPoint)containerDismissAnimationEndPoint;
- (void)reloadInnerView;
- (void)addTapRecognizer;
- (id)contentView;
- (id)containerView;
- (id)backgroundView;
- (void)handleTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)deviceDidRotate:(id)arg1;
- (void)onMainWindowFrameChanged;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (BOOL)shouldRelease;
- (void)setShouldRelease:(BOOL)arg1;
- (void).cxx_destruct;
@end

