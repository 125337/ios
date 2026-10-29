@interface WCCustomNavigationHostedViewContainer : UIView
{
    UIView * _hostedView; // +0x8
    id /* block */ _hostedViewDidDetach; // +0x10
    id /* block */ _hostedViewFrameDidChange; // +0x18
}
- (id)initWithHostedView:(id)arg1;
- (void)dealloc;
- (void)willRemoveSubview:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)hostedView;
- (void)setHostedView:(id)arg1;
- (id /* block */)hostedViewDidDetach;
- (void)setHostedViewDidDetach:(id /* block */)arg1;
- (id /* block */)hostedViewFrameDidChange;
- (void)setHostedViewFrameDidChange:(id /* block */)arg1;
- (void).cxx_destruct;
@end
