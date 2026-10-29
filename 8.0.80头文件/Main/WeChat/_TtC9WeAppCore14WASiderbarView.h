@interface _TtC9WeAppCore14WASiderbarView : MMUIView <UIGestureRecognizerDelegate>
{
    BOOL constraitByContainer; // +0x8
    long long containerViewOrientation; // +0x10
    void * weappCloseAction; // +0x18
    void * rebootAction; // +0x28
    void * prepareOpenTaskAction; // +0x38
     backgroundView; // +0x48
     containerView; // +0x50
     topToolbarView; // +0x58
     toolView; // +0x60
     exitButtonGroup; // +0x68
     refreshButtonGroup; // +0x70
     collapseButtonGroup; // +0x78
     barContentView; // +0x80
     logic; // +0x88
     edgePanGesture; // +0x90
     hasExposed; // +0x98
     impactHasOccurred; // +0x99
     lastLaidOutSize; // +0xa0
}
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)constraitByContainer;
- (void)setConstraitByContainer:(BOOL)arg1;
- (long long)containerViewOrientation;
- (void)setContainerViewOrientation:(long long)arg1;
- (id /* block */)weappCloseAction;
- (void)setWeappCloseAction:(id /* block */)arg1;
- (id /* block */)rebootAction;
- (void)setRebootAction:(id /* block */)arg1;
- (id /* block */)prepareOpenTaskAction;
- (void)setPrepareOpenTaskAction:(id /* block */)arg1;
- (id)initWithLogic:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)showInView:(id)arg1;
- (void)prepareForShowIn:(id)arg1;
- (void)layoutSubviews;
- (void)updateProgress:(double)arg1 animated:(BOOL)arg2 completed:(BOOL)arg3;
- (void)dismissFromDismissButton;
- (void)dismissFromBackground;
- (void)dismissAndReportWithAction:(long long)arg1 animated:(BOOL)arg2;
- (void)onCloseWeapp;
- (void)onReboot;
- (void)handleEdgePan:(id)arg1;
- (void)didRotate:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
