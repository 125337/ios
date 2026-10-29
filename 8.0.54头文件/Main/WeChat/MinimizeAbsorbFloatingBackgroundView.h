@interface MinimizeAbsorbFloatingBackgroundView : UIView
{
    UIView * _bgView; // +0x8
    CustomVisualEffectView * _visualEffectView; // +0x10
}
- (id)init;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)visualEffectView;
- (void)setVisualEffectView:(id)arg1;
- (void).cxx_destruct;
@end

