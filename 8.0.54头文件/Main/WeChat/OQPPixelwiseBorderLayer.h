@interface OQPPixelwiseBorderLayer : CAShapeLayer
{
    double _uniformEdgeInsetPoints; // +0x8
}
- (id)init;
- (id)initWithLineWidthPoints:(double)arg1 uniformEdgeInsetPoints:(double)arg2;
- (id)initWithLineWidthPixels:(double)arg1 uniformEdgeInsetPixels:(double)arg2;
- (void)layoutSublayers;
- (CGPath *)borderPathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2;
@end

