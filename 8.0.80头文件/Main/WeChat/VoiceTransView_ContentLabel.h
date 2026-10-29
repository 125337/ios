@interface VoiceTransView_ContentLabel : UIView
{
    UIView * _topGradientMaskView; // +0x8
    CAGradientLayer * _topGradientLayer; // +0x10
    UILabel * _textLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)show;
- (id)topGradientMaskView;
- (id)textLabel;
- (void)setTopGradientMaskView:(id)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
