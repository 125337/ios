@interface MAVGradientBlurEffect : MAVVLogEffect
{
    BOOL _centerCropBlur; // +0x8
    BOOL _blurTop; // +0x9
    BOOL _blurBottom; // +0xa
    float _radius; // +0xc
    float _blurMaskRatio; // +0x10
    float _contentOffset; // +0x14
    float _contentOffsetPercent; // +0x18
}
- (id)init;
- (long long)type;
- (void)setRadius:(float)arg1;
- (void)setCenterCropBlur:(BOOL)arg1;
- (void)setBlurMaskRatio:(float)arg1;
- (void)setBlurTop:(BOOL)arg1;
- (void)setBlurBottom:(BOOL)arg1;
- (void)setContentOffset:(float)arg1;
- (void)setContentOffsetPercent:(float)arg1;
- (float)radius;
- (BOOL)centerCropBlur;
- (float)blurMaskRatio;
- (BOOL)blurTop;
- (BOOL)blurBottom;
- (float)contentOffset;
- (float)contentOffsetPercent;
@end
