@interface WCC2CShadowLabel : UIView
{
    BOOL _highlighted; // +0x8
    NSString * _text; // +0x10
    UILabel * _textLabel; // +0x18
    UILabel * _frontTextLabel; // +0x20
    UIView * _shadowView; // +0x28
}
- (id)init;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1;
- (void)setText:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateUI;
- (void)updateArritbuteText;
- (id)text;
- (BOOL)highlighted;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)frontTextLabel;
- (void)setFrontTextLabel:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (void).cxx_destruct;
@end

