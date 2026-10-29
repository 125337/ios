@interface PlatformImageScaleInfo : NSObject
{
    double _imageViewWidth; // +0x8
    double _imageViewHeight; // +0x10
    double _contentOffsetX; // +0x18
    double _contentOffsetY; // +0x20
    double _scale; // +0x28
    double _translationX; // +0x30
    double _translationY; // +0x38
}
+ (id)makeWithImageViewWidth:(double)arg1 imageViewHeight:(double)arg2 contentOffsetX:(double)arg3 contentOffsetY:(double)arg4 scale:(double)arg5 translationX:(double)arg6 translationY:(double)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (double)imageViewWidth;
- (void)setImageViewWidth:(double)arg1;
- (double)imageViewHeight;
- (void)setImageViewHeight:(double)arg1;
- (double)contentOffsetX;
- (void)setContentOffsetX:(double)arg1;
- (double)contentOffsetY;
- (void)setContentOffsetY:(double)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (double)translationX;
- (void)setTranslationX:(double)arg1;
- (double)translationY;
- (void)setTranslationY:(double)arg1;
@end
