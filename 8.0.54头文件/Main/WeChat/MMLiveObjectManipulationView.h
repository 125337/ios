@interface MMLiveObjectManipulationView : UIView <MMLiveObjectManipulationViewCornerActionButtonDelegate>
{
    UIView * _content; // +0x8
    id <MMLiveObjectManipulationViewDelegate> _delegate; // +0x10
    MMLiveObjectManipulationViewConfiguration * _config; // +0x18
    MMLiveObjectManipulationGestureRecognizer * _gesture; // +0x20
    UIView * _borderView; // +0x28
    UIView * _cornerButtonsContainerView; // +0x30
    MMLiveObjectManipulationViewCornerActionButton * _topLeftActionButton; // +0x38
    MMLiveObjectManipulationViewCornerActionButton * _topRightActionButton; // +0x40
    MMLiveObjectManipulationViewCornerActionButton * _bottomLeftActionButton; // +0x48
    MMLiveObjectManipulationViewCornerActionButton * _bottomRightActionButton; // +0x50
    double _actualBorderWidth; // +0x58
    CGSize _contentSize; // +0x60
}
- (id)initWithContent:(id)arg1 contentSize:(CGSize)arg2 contentAccessibilityDescriptor:(id)arg3 configuration:(id)arg4;
- (void)dealloc;
- (CGPoint)contentCenter;
- (CGAffineTransform)contentTransform;
- (void)setTransform:(CGAffineTransform)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)onManipulationGesture:(id)arg1;
- (void)onTapped;
- (void)onVoiceOverStatusChanged;
- (void)onManipulationViewCustomCornerActionInvoked:(id)arg1;
- (void)onManipulationViewScaleRotationCornerActionInvokedByGestureRecognizer:(id)arg1;
- (void)updateBorder;
- (void)applyContentAccessibilityDescriptor:(id)arg1;
- (void)configureBorderAndCornerActions;
- (void)createBorderView;
- (void)updateCornerActions;
- (id)updatedCornerActionButtonWithOriginal:(id)arg1 action:(id)arg2;
- (BOOL)hasAnyCornerActions;
- (id)content;
- (void)setContent:(id)arg1;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)gesture;
- (void)setGesture:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)cornerButtonsContainerView;
- (void)setCornerButtonsContainerView:(id)arg1;
- (id)topLeftActionButton;
- (void)setTopLeftActionButton:(id)arg1;
- (id)topRightActionButton;
- (void)setTopRightActionButton:(id)arg1;
- (id)bottomLeftActionButton;
- (void)setBottomLeftActionButton:(id)arg1;
- (id)bottomRightActionButton;
- (void)setBottomRightActionButton:(id)arg1;
- (double)actualBorderWidth;
- (void)setActualBorderWidth:(double)arg1;
- (void).cxx_destruct;
@end

