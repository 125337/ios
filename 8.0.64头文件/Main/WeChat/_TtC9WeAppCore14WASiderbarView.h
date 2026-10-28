@interface _TtC9WeAppCore14WASiderbarView : MMUIView <UIGestureRecognizerDelegate>
{
     constraitByContainer; // +0x8
     containerViewOrientation; // +0x10
     weappCloseAction; // +0x18
     backgroundView; // +0x28
     containerView; // +0x30
     toolView; // +0x38
     barContentView; // +0x40
     logic; // +0x48
     hasExposed; // +0x50
     impactHasOccurred; // +0x51
}
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)constraitByContainer;
- (void)setConstraitByContainer:(BOOL)arg1;
- (long long)containerViewOrientation;
- (void)setContainerViewOrientation:(long long)arg1;
- (id /* block */)weappCloseAction;
- (void)setWeappCloseAction:(id /* block */)arg1;
- (id)initWithLogic:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)showInView:(id)arg1;
- (void)prepareForShowIn:(id)arg1;
- (void)updateProgress:(double)arg1 animated:(BOOL)arg2;
- (void)dismissFromDismissButton;
- (void)dismissFromBackground;
- (void)dismissAndReportWithAction:(long long)arg1 animated:(BOOL)arg2;
- (void)onCloseWeapp;
- (void)didRotate:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
