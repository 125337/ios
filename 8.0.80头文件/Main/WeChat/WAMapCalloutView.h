@interface WAMapCalloutView : UIView <QAnnotationViewCollisionDelegate>
{
    unsigned long long collisionType; // +0x8
    UIButton * _btn; // +0x10
    UIButton * _btnBig; // +0x18
    UIView * _targetCalloutCoverView; // +0x20
    UIColor * _bgColor; // +0x28
    double _radius; // +0x30
    double _borderWidth; // +0x38
    UIColor * _borderColor; // +0x40
    double _margin; // +0x48
    double _arrowLen; // +0x50
    UIColor * _shadowColor; // +0x58
    double _shadowOpacity; // +0x60
    double _shadowOffsetX; // +0x68
    double _shadowOffsetY; // +0x70
    double _shadowBlurRadius; // +0x78
    CGSize _textSize; // +0x80
}
- (void)dealloc;
- (void)drawRect:(CGRect)arg1;
- (void)drawInContext:(CGContext *)arg1;
- (id)initWithParam:(id)arg1;
- (id)initWithParam:(id)arg1 view:(id)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (unsigned long long)collisionType;
- (void)setCollisionType:(unsigned long long)arg1;
- (id)btn;
- (void)setBtn:(id)arg1;
- (id)btnBig;
- (void)setBtnBig:(id)arg1;
- (id)targetCalloutCoverView;
- (void)setTargetCalloutCoverView:(id)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (double)margin;
- (void)setMargin:(double)arg1;
- (CGSize)textSize;
- (void)setTextSize:(CGSize)arg1;
- (double)arrowLen;
- (void)setArrowLen:(double)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (double)shadowOpacity;
- (void)setShadowOpacity:(double)arg1;
- (double)shadowOffsetX;
- (void)setShadowOffsetX:(double)arg1;
- (double)shadowOffsetY;
- (void)setShadowOffsetY:(double)arg1;
- (double)shadowBlurRadius;
- (void)setShadowBlurRadius:(double)arg1;
- (void).cxx_destruct;
@end
