@interface FavBarButton : MMUIButton
{
    UIView * _divTopLine; // +0x8
    UIImageView * _arrowIcon; // +0x10
    MMUILabel * _label; // +0x18
    double _pixelLineAndLabelHor; // +0x20
    double _pixelLineAndLabelVer; // +0x28
    double _pixelLabelAndArrowHor; // +0x30
    double _arrowHeight; // +0x38
    double _arrowWidth; // +0x40
    double _fontSize; // +0x48
    double _lineHeight; // +0x50
    double _maxWidth; // +0x58
    CGSize _labelSize; // +0x60
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (CGSize)calFavBarButtonSize;
- (void)layoutSubviews;
- (CGSize)setLabelText:(id)arg1;
- (void).cxx_destruct;
@end
