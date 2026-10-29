@interface StrokeView : UIView
{
    UIBezierPath * m_strokePath; // +0x8
    UIColor * m_strokeColor; // +0x10
    BOOL m_fill; // +0x18
    int _blendMode; // +0x1c
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setStrokePath:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)drawRect:(CGRect)arg1;
- (id)strokePath;
- (id)strokeColor;
- (BOOL)fill;
- (void)setFill:(BOOL)arg1;
- (int)blendMode;
- (void)setBlendMode:(int)arg1;
- (void).cxx_destruct;
@end

