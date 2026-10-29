@interface FlutterClippingMaskView : UIView
{
    vector<fml::CFRef<const CGPath *>, std::allocator<fml::CFRef<const CGPath *>>> paths_; // +0x8
    BOOL containsNonRectPath_; // +0x20
    CGRect rectSoFar_; // +0x28
    CATransform3D _reverseScreenScale; // +0x48
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 screenScale:(double)arg2;
- (id)shapeLayer;
- (void)reset;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(CGRect)arg1;
- (void)clipRect:(const void *)arg1 matrix:(const Matrix *)arg2;
- (void)clipRRect:(const void *)arg1 matrix:(const Matrix *)arg2;
- (void)clipPath:(const void *)arg1 matrix:(const Matrix *)arg2;
- (CGAffineTransform)affineWithMatrix:(CATransform3D)arg1;
- (CFRef<const CGPath *>)getTransformedPath:(CGPath *)arg1 matrix:(CATransform3D)arg2;
- (CATransform3D)reverseScreenScale;
- (void)setReverseScreenScale:(CATransform3D)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
