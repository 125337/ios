@interface MJShootSideToolboxEntryView : MMUIView <MJShootFrontFillLightAppearanceAdjusting>
{
    id <MJShootSideToolboxEntryViewDelegate> _delegate; // +0x8
    UIButton * _beautyButton; // +0x10
    UIButton * _lightButton; // +0x18
    UIButton * _toolboxButton; // +0x20
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (id)buildButtonWithImageName:(id)arg1 titleToken:(id)arg2;
- (void)updateButton:(id)arg1 foregroundColor:(id)arg2;
- (double)firstItemIconTopSpacing;
- (CGSize)intrinsicContentSize;
- (void)beautyButtonDidTouchUpInside:(id)arg1;
- (void)lightButtonDidTouchUpInside:(id)arg1;
- (void)toolBoxButtonDidTouchUpInside:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)shootComposingFrontFillLightStateDidChange:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)beautyButton;
- (void)setBeautyButton:(id)arg1;
- (id)lightButton;
- (void)setLightButton:(id)arg1;
- (id)toolboxButton;
- (void)setToolboxButton:(id)arg1;
- (void).cxx_destruct;
@end
