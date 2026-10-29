@interface MMLiveObjectManipulationViewCornerActionButton : MMUIButton <UIGestureRecognizerDelegate>
{
    BOOL _forManipulationAction; // +0x8
    id <MMLiveObjectManipulationViewCornerActionButtonDelegate> _delegate; // +0x10
    id <MMLiveObjectManipulationViewCornerAction> _actionDescriptor; // +0x18
    UIGestureRecognizer * _actionGestureRecognizer; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithCustomAction:(id)arg1;
- (void)updateWithManipulationAction:(id)arg1 manipulatedView:(id)arg2 accessibilityDescriptor:(id)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)onTapped;
- (void)onManipulationGesture:(id)arg1;
- (BOOL)forManipulationAction;
- (void)setForManipulationAction:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)actionDescriptor;
- (void)setActionDescriptor:(id)arg1;
- (id)actionGestureRecognizer;
- (void)setActionGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

