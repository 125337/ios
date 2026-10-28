@interface FlutterClippingMaskView : UIView
{
    vector<fml::CFRef<const CGPath *>, std::allocator<fml::CFRef<const CGPath *>>> paths_; // +0x8
    CATransform3D _reverseScreenScale; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 screenScale:(double)arg2;
- (void)reset;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(CGRect)arg1;
- (void)clipRect:(const SkRect *)arg1 matrix:(const SkMatrix *)arg2;
- (void)clipRRect:(const SkRRect *)arg1 matrix:(const SkMatrix *)arg2;
- (void)clipPath:(const void *)arg1 matrix:(const SkMatrix *)arg2;
- (CFRef<const CGPath *>)getTransformedPath:(CGPath *)arg1 matrix:(CATransform3D)arg2;
- (CATransform3D)reverseScreenScale;
- (void)setReverseScreenScale:(CATransform3D)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
