@interface TXCVideoPreprocessConfig : NSObject
{
    BOOL _isEnabled; // +0x8
    float _imageFilterStrength; // +0xc
}
- (id)init;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (float)imageFilterStrength;
- (void)setImageFilterStrength:(float)arg1;
@end

