@interface MultiTalkCornerView : UIView
{
    unsigned long long _corner; // +0x8
    CAShapeLayer * _shapeLayer; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 corner:(unsigned long long)arg2;
- (void)layoutSubviews;
- (unsigned long long)autoresizingMaskForCorner:(unsigned long long)arg1;
- (unsigned long long)corner;
- (void)setCorner:(unsigned long long)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void).cxx_destruct;
@end
