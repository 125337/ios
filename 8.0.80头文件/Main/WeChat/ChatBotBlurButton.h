@interface ChatBotBlurButton : MMUIButton
{
    UIVisualEffectView * _blurView; // +0x8
}
- (id)init;
- (void)layoutSubviews;
- (void)layoutBlurView;
- (void)setupShadow;
- (void)setCornerRadius:(double)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (void).cxx_destruct;
@end
