@interface CALayer (QPExt)
- (id)qp_snapshotImage;
- (void)qp_addAnimation:(id)arg1;
- (void)qp_addAnimation:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)qp_setOrigin:(CGPoint)arg1;
- (double)qp_transformRotation;
- (void)qp_setTransformRotation:(double)arg1;
@end
