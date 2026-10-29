@interface MMScrollableActionSheetContainerDownStableView : MMUIView
{
    UIButton * _cancelButton; // +0x8
    id <MMScrollableActionSheetContainerDownStableViewDelegate> _delegate; // +0x10
    CAGradientLayer * _gradientLayer; // +0x18
}
- (id)initWithDelegate:(id)arg1;
- (void)setupCancelButton;
- (void)setupGradientLayer;
- (void)updateGradientLayerOpacity:(float)arg1;
- (void)layoutSubviews;
- (double)calcuateCancelButtonHeight;
- (void)onClickedCancelButton;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

