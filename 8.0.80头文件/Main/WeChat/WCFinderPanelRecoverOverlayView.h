@interface WCFinderPanelRecoverOverlayView : UIView
{
    BOOL _hasTriggeredRecover; // +0x8
    id /* block */ _onTapRecover; // +0x10
    UIView * _targetView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)onTapRecover;
- (void)setOnTapRecover:(id /* block */)arg1;
- (id)targetView;
- (void)setTargetView:(id)arg1;
- (BOOL)hasTriggeredRecover;
- (void)setHasTriggeredRecover:(BOOL)arg1;
- (void).cxx_destruct;
@end
