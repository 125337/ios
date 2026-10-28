@interface CameraScanTipsView : UIView
{
    BOOL _hasFrontCamera; // +0x8
    id <CameraScanTipsViewDelegate> _delegate; // +0x10
    UIButton * _icon; // +0x18
    UILabel * _noCameraTips; // +0x20
    UILabel * _frontCameraTips; // +0x28
    RichTextView * _frontCameraOpreationTips; // +0x30
    UIView * _containerView; // +0x38
    UIButton * _coverButton; // +0x40
    UIButton * _maskButton; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 frontCamera:(BOOL)arg2;
- (void)setupSubviews;
- (void)containerButtonTapped:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasFrontCamera;
- (void)setHasFrontCamera:(BOOL)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)noCameraTips;
- (void)setNoCameraTips:(id)arg1;
- (id)frontCameraTips;
- (void)setFrontCameraTips:(id)arg1;
- (id)frontCameraOpreationTips;
- (void)setFrontCameraOpreationTips:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)coverButton;
- (void)setCoverButton:(id)arg1;
- (id)maskButton;
- (void)setMaskButton:(id)arg1;
- (void).cxx_destruct;
@end
