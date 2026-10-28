@interface WCCanvasFloatView : MMUIView
{
    BOOL _forbiddenLayoutComponent; // +0x8
    id <WCCanvasFloatViewDelegate> _delegate; // +0x10
    UIView * _containerView; // +0x18
}
- (id)initWithComponent:(id)arg1;
- (void)tryCloseFloatView:(id)arg1 forEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)notifyViewDidAppear;
- (void)dealloc;
- (id)getComponent;
- (void)showBGView;
- (void)tryToDoOpenAnimation;
- (void)tryToDoCloseAnimation;
- (void)removeView;
- (BOOL)isForbiddenToClose;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)forbiddenLayoutComponent;
- (void)setForbiddenLayoutComponent:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
