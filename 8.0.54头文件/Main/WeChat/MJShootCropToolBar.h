@interface MJShootCropToolBar : MMUIView
{
    BOOL _resetEnabled; // +0x8
    id <MJShootCropToolBarDelegate> _delegate; // +0x10
    MMUIButton * _rotateButton; // +0x18
    MMUIButton * _flipButton; // +0x20
    MMUIButton * _resetButton; // +0x28
}
+ (id)createButtonWithIconName:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)setResetEnabled:(BOOL)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)rotateButton;
- (void)rotateButtonDidTouchUpInside:(id)arg1;
- (id)flipButton;
- (void)flipButtonDidTouchUpInside:(id)arg1;
- (id)resetButton;
- (void)resetButtonDidTouchUpInside:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)resetEnabled;
- (void)setRotateButton:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setResetButton:(id)arg1;
- (void).cxx_destruct;
@end

