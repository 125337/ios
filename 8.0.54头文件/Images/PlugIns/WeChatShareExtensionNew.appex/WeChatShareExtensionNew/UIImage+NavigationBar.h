@interface UIImage (NavigationBar)
+ (id)genScaledImage:(id)arg1 scaleSize:(CGSize)arg2;
+ (id)createImageWithColor:(id)arg1;
- (id)resizeImageToMaxWidth:(int)arg1 andMaxHeight:(int)arg2;
- (id)croppedImageWithBounds:(CGRect)arg1;
- (id)scaleImageToScale:(float)arg1;
- (id)getRawGrayData:(CGSize *)arg1;
- (id)getRotatedImage;
@end

