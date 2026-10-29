@interface ChatBotBlurImageView : UIImageView
{
    BOOL _blurEnabled; // +0x8
    double _blurRadius; // +0x10
    UIImage * _originalImage; // +0x18
    UIImage * _blurredImage; // +0x20
}
+ (id)applyBlurEffectInmage:(id)arg1 blurRadius:(double)arg2;
- (void)setImage:(id)arg1;
- (void)setBlurEnabled:(BOOL)arg1;
- (double)blurRadius;
- (void)setBlurRadius:(double)arg1;
- (id)originalImage;
- (void)setOriginalImage:(id)arg1;
- (id)blurredImage;
- (void)setBlurredImage:(id)arg1;
- (BOOL)blurEnabled;
- (void).cxx_destruct;
@end
