@interface MMImageCropPopTransitionContext : NSObject
{
    UIImageView * _imageView; // +0x8
    CGRect _imageOriginFrameInWindow; // +0x10
    CGRect _imageFinalFrameInWindow; // +0x30
}
- (id)imageView;
- (void)setImageView:(id)arg1;
- (CGRect)imageOriginFrameInWindow;
- (void)setImageOriginFrameInWindow:(CGRect)arg1;
- (CGRect)imageFinalFrameInWindow;
- (void)setImageFinalFrameInWindow:(CGRect)arg1;
- (void).cxx_destruct;
@end

