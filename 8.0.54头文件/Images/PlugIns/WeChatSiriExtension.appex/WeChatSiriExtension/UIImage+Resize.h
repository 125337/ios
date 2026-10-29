@interface UIImage (Resize)
- (id)resizedImage:(CGSize)arg1 interpolationQuality:(int)arg2;
- (id)resizedImage:(CGSize)arg1 interpolationQuality:(int)arg2 aspectFill:(BOOL)arg3;
- (id)resizedImageWithContentMode:(long long)arg1 bounds:(CGSize)arg2 interpolationQuality:(int)arg3;
- (id)resizedImage:(CGSize)arg1 transform:(CGAffineTransform)arg2 drawTransposed:(BOOL)arg3 interpolationQuality:(int)arg4 aspectFill:(BOOL)arg5;
- (CGAffineTransform)transformForOrientation:(CGSize)arg1;
@end

