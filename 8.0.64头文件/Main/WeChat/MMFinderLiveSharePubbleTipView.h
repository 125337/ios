@interface MMFinderLiveSharePubbleTipView : MMRectTriangleArrowView
{
    id /* block */ _clickCloseBlock; // +0x8
    id /* block */ _clickPubbleBlock; // +0x10
    UIView * _contentView; // +0x18
    long long _type; // +0x20
    NSString * _title; // +0x28
    UIFont * _titleFont; // +0x30
    double _customCornerRadius; // +0x38
    unsigned long long _numbersOfLines; // +0x40
    long long _titleTextAlignment; // +0x48
    MMUILabel * _titleLabel; // +0x50
    MMUIImageView * _imageView; // +0x58
    MMUIButton * _closeButton; // +0x60
    CAShapeLayer * _shapeLayer; // +0x68
    UITapGestureRecognizer * _tapGesture; // +0x70
    MMTimer * _dismissTimer; // +0x78
    id /* block */ _dismissTimerCallback; // +0x80
}
+ (double)caculatePubbleTipViewWidthWithType:(long long)arg1 titleText:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateCustomCornerRadius:(double)arg1;
- (void)layoutContentView;
- (void)layoutImageView;
- (void)layoutTitleLabel;
- (void)layoutCloseButton;
- (id)contentView;
- (id)closeButton;
- (id)titleLabel;
- (id)imageView;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)contentHeight;
- (void)clickCloseButton:(id)arg1;
- (void)onBackViewDidTaped:(id)arg1;
- (void)setClickCloseBlock:(id /* block */)arg1;
- (void)setClickPubbleBlock:(id /* block */)arg1;
- (void)setDismissTimeS:(unsigned int)arg1 callBack:(id /* block */)arg2;
- (void)callDismissTimerCallback;
- (void)setContentView:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (double)customCornerRadius;
- (void)setCustomCornerRadius:(double)arg1;
- (unsigned long long)numbersOfLines;
- (void)setNumbersOfLines:(unsigned long long)arg1;
- (long long)titleTextAlignment;
- (void)setTitleTextAlignment:(long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)dismissTimer;
- (void)setDismissTimer:(id)arg1;
- (id /* block */)dismissTimerCallback;
- (void)setDismissTimerCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
