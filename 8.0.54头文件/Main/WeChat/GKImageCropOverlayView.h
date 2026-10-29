@interface GKImageCropOverlayView : UIView
{
    UIToolbar * toolbar; // +0x8
    CGSize cropSize; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (CGSize)cropSize;
- (void)setCropSize:(CGSize)arg1;
- (id)toolbar;
- (void)setToolbar:(id)arg1;
- (void).cxx_destruct;
@end

