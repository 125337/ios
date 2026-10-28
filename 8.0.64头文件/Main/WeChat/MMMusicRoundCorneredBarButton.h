@interface MMMusicRoundCorneredBarButton : UIView
{
    BOOL _selected; // +0x8
    BOOL _highlighted; // +0x9
    double _paddingHorizontal; // +0x10
    UILabel * _label; // +0x18
    id /* block */ _tappedBlock; // +0x20
    UIImage * _normalImage; // +0x28
    UIImage * _highlightedImage; // +0x30
    UIImageView * _imageView; // +0x38
}
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)handleTap:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (double)paddingHorizontal;
- (void)setPaddingHorizontal:(double)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (BOOL)selected;
- (id /* block */)tappedBlock;
- (void)setTappedBlock:(id /* block */)arg1;
- (id)normalImage;
- (void)setNormalImage:(id)arg1;
- (id)highlightedImage;
- (void)setHighlightedImage:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (BOOL)highlighted;
- (void).cxx_destruct;
@end
